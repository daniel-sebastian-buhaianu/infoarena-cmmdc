#include <stdio.h>

int main()
{
	unsigned a, b, rest;
	FILE *fin, *fout;

	fin = fopen("cmmdc.in", "r");

	fscanf(fin, "%u", &a);
	fscanf(fin, "%u", &b);

	while (b != 0) {
		rest = a % b;
		a = b;
		b = rest;
	}
	
	fout = fopen("cmmdc.out", "w");
	
	a = a == 1 ? 0 : a;

	fprintf(fout, "%u", a);

	fclose(fin);
	fclose(fout);

	return 0;
}
