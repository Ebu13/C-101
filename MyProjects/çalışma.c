#include <stdio.h>
#include <conio.h>
main(){
	int ortsayi[1],i,toplam;
	float ortalama;
	printf("Kac tane sayinin ortalamasi hesaplansin:");
	scanf("%d",&ortsayi[0]);
	int dizi[ortsayi[0]];
	for(i=0;i<ortsayi[0];i++){
		printf("\n\n%d.Sayiyi giriniz:",i+1);
		scanf("%d",&dizi[i]);
		toplam=toplam+dizi[i];		
	}
	ortalama=toplam/ortsayi[0];
	printf("Girilen sayilarin ortalamsi=%f",ortalama);
}
