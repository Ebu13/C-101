/*
G��L� SAYI: 145=1!+ 4!+ 5!

145%10=5 (birler basama��)
145/10=14

14%10=4 (onlar basama��)
14/10=1

1%10=1(y�zler basama��)
1/10=0 

Not: 1,2,145 ve 40585 say�lar� g��l� say�lard�r.

*/

int fakt(int sayi){
	//4!=4.3.2.1;
	int carpim=1;
	int i;
	for(i=sayi;i>0;i--){
		carpim=carpim*i;
	}
	return carpim;
}
main(){
	int sayi,ilkSayi;
	printf("sayi gir:");
	scanf("%d",&sayi);
	ilkSayi=sayi; //girilen sayi s�rekli b�l�nd��� i�in orjinal say�y� kaybetmemek i�in ilkSayi de�i�kenine kopyala
	int kalan;
	int toplam=0;
	while(sayi>0){
		kalan=sayi%10; //basamak bulunuyor		
		sayi=sayi/10;		
		
		int faktoriyel=fakt(kalan);//her basama��n fakt�riyelini bul
		printf("%d!=%d \n",kalan,faktoriyel);//fakt�riyel sonucunu ekrana yaz
		toplam+=faktoriyel;//fakt�riyeli toplama ekle
	}	
	printf("Toplam=%d \n",toplam);//Toplam sonucunu yazd�r
	if(toplam==ilkSayi) //toplam sonucu girilen say�ya e�itse g��l� say�d�r
		printf("Guclu sayidir");
	else
		printf("Guclu sayi degildir");	
	
}
