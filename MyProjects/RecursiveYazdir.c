int sayiYazdirTersten(int n){	
	printf("%d ",n);//n'den 1'e kadar yazd�r
	if(n>1)
		sayiYazdir(n-1);		
	
}

int sayiYazdir(int n){	
	if(n>1)
		sayiYazdir(n-1);		
	printf("%d ",n);//1'den n'e kadar yazd�r	
}

main(){	

	sayiYazdir(5);	
	
}
