void procesarBilletes(int* v, int denom)
{
	intcant = *v / denom;
	*v = *v % denom;
	printf("%d billetes de $%d\n", cant, denom);
}

int main()
{
	int v;

	printf("Ingrese el valor a pagar: $");
	scanf("%d", &v);

	procesarBilletes(&v, 100);
	procesarBilletes(&v, 50);
	procesarBilletes(&v, 20);
	procesarBilletes(&v, 10);
	procesarBilletes(&v, 5);
	procesarBilletes(&v, 2);
	procesarBilletes(&v, 1);

	return 0;
}
