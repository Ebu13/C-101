

int fact(int n){
	if(n<=1){
		return 1;
	}		
	return n*fact(n-1);	
}

main(){
	
	int sonuc=fact(3);
	printf("%d",sonuc);
}
