//2 Boyutlu Diziler-MATR�S
int main(){
		
	int matris[3][3];
	int i,j;
	for(i=0;i<3;i++){//sat�r
		for(j=0;j<2;j++){//s�tun
			printf("%d.ogrenci %d.sinav:",i+1,j+1);//2.��renci 1.s�nav:
			scanf("%d",&matris[i][j]);					
		}		
	}
		
	//ortalama hesapla:
	for(i=0;i<3;i++){
		matris[i][2]=matris[i][0]*0.4+matris[i][1]*0.6;		
	}	
		
	for(i=0;i<3;i++){//sat�r
		for(j=0;j<3;j++){//s�tun
			printf("%d \t",matris[i][j]);					
		}
		printf("\n");
	}
	
	
}
