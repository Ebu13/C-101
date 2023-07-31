main(){
		
	int *p=(int *)malloc(sizeof(int)*5);
	
	int i;
	for(i=0;i<5;i++){
		printf("%d.sayi:",i+1);				
		scanf("%d",p+i);
	}
	
	for(i=0;i<5;i++){
		printf("%d ",*(p+i));
	}
		
}
