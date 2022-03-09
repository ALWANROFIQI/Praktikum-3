#include <string.h>
#include <stdio.h>

int main ()
{
	char KALIMAT [100];
	int jumlah;
	
	printf ("Tuliskan kata : ");
	fgets (KALIMAT, sizeof(KALIMAT), stdin);
	
	jumlah = strlen(KALIMAT)-1;
	
	printf("Jumlah karakter:  %d\n", jumlah);
	
	return 0;
	
}

