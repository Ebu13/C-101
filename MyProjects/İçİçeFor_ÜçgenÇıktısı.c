int main(){
	
//	* 
//	** 
//	*** 
//	**** 
//	***** 
//	****** 

	//Yukar�daki gibi bir ��gen ��kt�s� veren kod:
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
	
	//Yukar�daki say�lardan olu�an ��gen ��kt�s�n� veren kod:
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
