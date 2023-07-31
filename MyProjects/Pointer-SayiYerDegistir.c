
void degistir(int a,int b){
	int gecici=a;
	a=b;
	b=gecici;	
}
void degistirP(int *a,int *b){
	int gecici;
	gecici=*a;
	*a=*b;
	*b=gecici;
}

main(){	
	int a=5,b=3;
	printf("a:%d b:%d \n",a,b);
	
	printf("degistir fonksiyonu:\n");
	degistir(a,b);
	printf("a:%d b:%d \n",a,b);
	
	printf("degistirP pointer fonksiyonu:\n");
	degistirP(&a,&b);
	printf("a:%d b:%d \n",a,b);
}
