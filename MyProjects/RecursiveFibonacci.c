
//Recursive(Özyinelemeli) fibonacci serisi:
int f(int n){
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	
	return f(n-1)+f(n-2);		
}

//Döngü ile fibonacci serisi:
void fibonacciSerisi(int n){
	int a=0,b=1,c,i;
	for(i=0;i<=n;i++){
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;		
	}
}



main(){
	printf("Recursive fibonacci sonucu:%d\n", f(7));
	printf("Dongusel fibonacci:");
	fibonacciSerisi(7);
}

