#include <stdio.h>
#include <conio.h>
main(){
	printf("Girilen Sayilarin Ortalamasini Hesaplayan Makine\n\n\n");
    int i,x,toplam;
	float ort;
	printf("Kac tane sayi girilecek:");
	scanf("%d",&x);
    for(i=0;i<x;i++){
    	int dizi[x];
		printf("%d.Sayiyi Giriniz:",i+1);
		scanf("%d",&dizi[i]);
		toplam=toplam+dizi[i];
	}
    ort=toplam/x;
    printf("Girilen Sayilarin Ortalamasi=%.2f",ort);
    return 0;
}
