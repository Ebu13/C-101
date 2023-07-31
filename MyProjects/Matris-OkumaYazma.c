//2 Boyutlu Diziler-MATRÝS
int main(){
		
	int matris[2][3];
	int i,j;
	for(i=0;i<2;i++){//satýr
		for(j=0;j<3;j++){//sütun
			printf("matris[%d][%d]:",i,j);//matris[0][1]:
			scanf("%d",&matris[i][j]);					
		}		
	}
	for(i=0;i<2;i++){//satýr
		for(j=0;j<3;j++){//sütun
			printf("matris[%d][%d]:%d ",i,j,matris[i][j]);					
		}
		printf("\n");		
	}
	
	
}
