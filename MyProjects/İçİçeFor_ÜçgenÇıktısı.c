int main(){
	
//	* 
//	** 
//	*** 
//	**** 
//	***** 
//	****** 

	//Yukarıdaki gibi bir üçgen çıktısı veren kod:
	int i,j;
	int n=6;
	for(i=0;i<n;i++){
		for(j=0;j<i+1;j++){
			printf("*");	
		}
		printf("\n");
	}


//	1
//	2 3
//	4 5 6
//	7 8 9 10
//	11 12 13 14	
	
	//Yukarıdaki sayılardan oluşan üçgen çıktısını veren kod:
	int sayi=1;
	int satir=5;	
	for(i=0;i<satir;i++){
		int sutun=i+1;
		for(j=0;j<sutun;j++){
			printf("%d ",sayi++);				
		}
		printf("\n");
	}
	
}
