int asal(int x){
	
	int sayac=0;
	int i;
	for(i=2;i<x;i++){
		if(x%i==0)
			sayac++;
	}
	
	if(sayac==0)
		return 1;//do�ru-true 
	else 
		return 0;//yanl��-false
	
	
//	if(sayac==0)
//		printf("%d asal",x);
//	else 
//		printf("%d asal degil",x);	
}

main(){		
	int sayi;
	printf("sayi gir:");
	scanf("%d",&sayi);
	int asalSonuc=asal(sayi);//asal fonksiyonu �a�r�l�yor
	
	if(asalSonuc)//asalSonuc==1
		printf("%d asal",sayi);
	else 
		printf("%d asal degil",sayi);	
	
}
