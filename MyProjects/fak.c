#include <stdio.h>

int fact(int sayi){
	int ra=1;
	for(;sayi>1;sayi--){
		ra=ra*sayi;
	}
	return ra;
}


main(){
	int ra=1,sayi;
	printf("Kac faktoriyel  olsun:");
	scanf_s("%d",&sayi);
	printf("\ncevap=%d",fact(sayi));
}
