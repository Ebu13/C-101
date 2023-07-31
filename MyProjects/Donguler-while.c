int main(){
	//Kullanıcıdan alınan başlangıç ve bitiş değeri
	//arasındaki sayıları topla	
	int sayac;
	int toplam=0;
	int bas,bitis;
	printf("Baslangic degeri gir:");
	scanf("%d",&bas);
	printf("Bitis degeri gir:");
	scanf("%d",&bitis);
	sayac=bas;
	
	while(sayac<=bitis){
		printf("%d\n",sayac);
		toplam=toplam+sayac;		
		sayac++;
	}
	printf("toplam sonucu=%d",toplam);
}
