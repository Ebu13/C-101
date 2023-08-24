int fact(int n){
	if(n<=1){
		return 1;
	}
	return n*fact(n-1);
}
main(){
	int i,dizi[]={1,2,3,4,5,6,7,8,9,10};
	for(i=0;i<10;i++){
		fact(dizi[i]);
		printf("%d!=%d",i+1,fact(dizi[i]));
		printf("\n");
	}
}
