int sayiYazdirTersten(int n){	
	printf("%d ",n);//n'den 1'e kadar yazdýr
	if(n>1)
		sayiYazdir(n-1);		
	
}

int sayiYazdir(int n){	
	if(n>1)
		sayiYazdir(n-1);		
	printf("%d ",n);//1'den n'e kadar yazdýr	
}

main(){	

	sayiYazdir(5);	
	
}
