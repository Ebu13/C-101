
void kareBul(int sayi){
	int kare=sayi*sayi;
	printf("Kare=%d \n",kare);
}

int kupAl(int sayi){ 
	int kup=sayi*sayi*sayi;
	return kup;	
}

float topla(float a,float b){
	return a+b;
}

main(){
	
	float toplam= topla(4,3);
	printf("%f \n",toplam);
	
	float toplam2=topla(5,5);
	printf("%f \n",toplam2);
	
//	int a;
//	printf("bir sayi gir:");
//	scanf("%d",&a);
//	kareBul(a);//void olan KareBul fonksiyonu çaðýr
//	
//	int kupSonuc=kupAl(a);//kupAl fonksiyonu çaðýr
//	printf("Kup=%d \n",kupSonuc);
//	
//	int toplam=a+kupSonuc;
//	printf("sayi ve kup toplam=%d \n",toplam);
	
	//printf("Kup=%d \n", kupAl(a));
	
	
	
	
}
