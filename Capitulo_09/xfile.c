
XFile xopen(char* filename, char* mode, int recSize)
{
	XFile f;

	// abro el archivo original
	f.arch = fopen(filename, mode);

	// abro el archivo de bajas (primero obtengo su nombre)
	char *filenameBajas = obtenerNombreBajas(filename);
	f.archBajas = fopen(filenameBajas, mode);

	// dimensiono el array de bajas y subo el archivo de bajas
	f.bajas = (int*) malloc(sizeof(int) * xrecCount(&f, 1));
	f.lenBajas = subirBajas(f.archBajas, f.bajas);

	// guardo el tamanio de registro
	f.recSize = recSize;

	// posiciono el puntero en el primer registro del archivo
	xseek(&f, 0);
	return f;
}

char* obtenerNombreBajas(char* filename)
{
	char* c = (char*) malloc(strlen(filename) + 1 + 1);
	strcpy(c, filename);
	strcat(c, "_");
	return c;
}

int subirBajas(FILE* f, int a[])
{
	int r;
	int len = 0;
	fread(&r, sizeof(int), 1, f);

	while( !feof(f) )
	{
		a[len++] = r;
		fread(&r, sizeof(int), 1, f);
	}

	return len;
}

void xclose(XFile* f)
{
	fclose(f->archBajas);
	fclose(f->arch);
	free(f->bajas);
}

void xdelete(XFile* f, int recNo)
{
	// inserto en el array el numero de registro que se da de baja
	f->bajas[f->lenBajas++] = recNo;

	// grabo este numero al fi nal del archivo de bajas
	fseek(f->archBajas, 0, SEEK_END);
	fwrite(&recNo, sizeof(int), 1, f->archBajas);
}

int regLogicoToRegFisico(XFile* f, int regLogico)
{
	int regFisico = regLogico;
	int i;

	for( i = f->lenBajas - 1; i >= 0; i-- )
	{
		if( f->bajas[i] <= regFisico )
		{
			regFisico++;
		}
	}

	return regFisico;
}

void xseek(XFile* f, int recNo)
{
	// convierto la posicion logica en una posicion fi sica
	int p = regLogicoToRegFisico(f, recNo);

	// posiciono el registro fi sico
	fseek(f->arch, p * f->recSize, SEEK_SET);

	// guardo el numero de registro actual (logico)
	f->actual = recNo;
}

void xread(XFile* f, void* reg)
{
	fread(reg, f->recSize, 1, f->arch);
	xseek(f, f->actual + 1);
}

void xwrite(XFile* f, void* reg)
{
	fwrite(reg, f->recSize, 1, f->arch);
	xseek(f, f->actual + 1);
}

long xfileSize(XFile* f, int raw)
{
	// obtengo el tamanio del archivo fi sico
	long actual = ftell(f->arch);
	fseek(f->arch, 0, SEEK_END);
	long ultimo = ftell(f->arch);
	fseek(f->arch, actual, SEEK_SET);

	// calculo la cantidad de bytes dados de baja
	long bytesBajas = f->lenBajas * f->recSize;

	// segun el fl ag retorno el size fi sico y este menos las bajas
	return raw ? ultimo : ultimo - bytesBajas;
}

int xrecCount(XFile* f, int raw)
{
	return xfileSize(f, raw) / f->recSize;
}

int xeof(XFile* f)
{
	return f->actual > xrecCount(f, 0);
}

void xreset(XFile* f)
{
	xseek(f, 0);
}

long xcurrent(XFile* f)
{
	return f->actual;
}
