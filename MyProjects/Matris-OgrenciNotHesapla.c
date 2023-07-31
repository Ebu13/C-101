//2 Boyutlu Diziler-MATRÝS
int main(){
		
	int matris[3][3];
	int i,j;
	for(i=0;i<3;i++){//satýr
		for(j=0;j<2;j++){//sütun
			printf("%d.ogrenci %d.sinav:",i+1,j+1);//2.öðrenci 1.sýnav:
			scanf("%d",&matris[i][j]);					
		}		
	}
		
	//ortalama hesapla:
	for(i=0;i<3;i++){
		matris[i][2]=matris[i][0]*0.4+matris[i][1]*0.6;		
	}	
		
	for(i=0;i<3;i++){//satýr
		for(j=0;j<3;j++){//sütun
			printf("%d \t",matris[i][j]);					
		}
		printf("\n");
	}
	
	
}
