#include <stdio.h>
#include <stdlib.h>

int main() {
	
	FILE *dg;// dosya gostericisi
	const int n=5; // ogrenci sayisi
	int no,Not,i=0;
	char ad[10];
	
	dg=fopen("ogrenci.txt","w");
	
	printf("\n");
	
	if(dg== NULL) {
	puts("ogrenci.txt dosyasi acilamadi! \n"),exit(1);
	
	}
	
	puts("5 ogrenciye ait bilgileri giriniz:");
	while (i++<n) {
		printf("%d. ogrencinin numarasi:",i);
		scanf("%d",&no);
		printf("%d.ogrencinin adi:",i);
		scanf("%s",ad);
		printf("%d. ogrencinin notu:",i);
		scanf("%d",&Not);
		printf("\n");
		
		fprintf(dg,"%5d %10s %3d\n",no,ad,Not);		
	}
	fclose(dg);
	puts ("Bilgiler kaydedildi . \n");
	return 0;
}
