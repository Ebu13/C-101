/*
GÜÇLÜ SAYI: 145=1!+ 4!+ 5!

145%10=5 (birler basamaðý)
145/10=14

14%10=4 (onlar basamaðý)
14/10=1

1%10=1(yüzler basamaðý)
1/10=0 

Not: 1,2,145 ve 40585 sayýlarý güçlü sayýlardýr.

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
	ilkSayi=sayi; //girilen sayi sürekli bölündüðü için orjinal sayýyý kaybetmemek için ilkSayi deðiþkenine kopyala
	int kalan;
	int toplam=0;
	while(sayi>0){
		kalan=sayi%10; //basamak bulunuyor		
		sayi=sayi/10;		
		
		int faktoriyel=fakt(kalan);//her basamaðýn faktöriyelini bul
		printf("%d!=%d \n",kalan,faktoriyel);//faktöriyel sonucunu ekrana yaz
		toplam+=faktoriyel;//faktöriyeli toplama ekle
	}	
	printf("Toplam=%d \n",toplam);//Toplam sonucunu yazdýr
	if(toplam==ilkSayi) //toplam sonucu girilen sayýya eþitse güçlü sayýdýr
		printf("Guclu sayidir");
	else
		printf("Guclu sayi degildir");	
	
}
