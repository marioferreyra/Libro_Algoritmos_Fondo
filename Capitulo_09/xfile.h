
typedef struct XFile
{
	FILE* arch; // archivo original
	int recSize; // longitud de los registros del archivo original
	FILE* archBajas; // archivo de bajas
	int* bajas; // array de bajas para subir el archivo
	int lenBajas; // longitud del array de bajas
	int actual; // numero de registro actualmente apuntado en arch
} XFile;

XFile xopen(char*, char*, int);

// cerrar el archivo
void xclose(XFile*);

// leer un registro
void xread(XFile*, void*);

// escribir un registro
void xwrite(XFile*, void*);

// determinar si llego el fi n del archivo
int xeof(XFile*);

// eliminar un registro
void xdelete(XFile*, int);

// mover el indicador de posicion del archivo
void xseek(XFile*, int);

// obtener el tamanio del archivo
long xfileSize(XFile*, int raw);

// obtener la cantidad de registros
int xrecCount(XFile*, int raw);

// posiciona el puntero en el registro logico numero 0
void xreset(XFile*);

// retorna el numero de registro logico que actualment esta siendo apuntado
int xcurrent(XFile*);
