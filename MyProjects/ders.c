#include <stdio.h>
#include <conio.h>
main(){
	printf("Girilen Sayilarin Ortalamasini Hesaplayan Makine\n\n\n");
    int i;
	int dizi[4];
	int toplam;
	float ort;
    for(i=0;i<4;i++){
    	printf("%d.Sayiyi Giriniz:",i+1);
		scanf("%d",&dizi[i]);
		toplam=toplam+dizi[i];
	}
    ort=toplam/4;
    printf("Girilen Sayilarin Ortalamasi=%.2f",ort);
    getch();
    return 0;
}
