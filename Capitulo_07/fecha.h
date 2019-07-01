typedef long Fecha;

// "crea" una Fecha
Fecha crearFecha(int,int,int);
// dada una Fecha retorna el dia
int obtenerDia(Fecha);
// dada una Fecha retorna el mes
int obtenerMes(Fecha);
// dada una Fecha retorna el Anio
int obtenerAnio(Fecha);
// dadas dos Fechas f1 y f2 retorna un valor que sera
// mayor, menor o igual a cero segun f2 lo sea respecto de f1
int compararFechas(Fecha,Fecha);
// dada una Fecha retorna una cadena con formato "dd/mm/aaaa"
char* toString(Fecha f);
