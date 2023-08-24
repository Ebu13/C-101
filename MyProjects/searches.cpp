// Your First C++ Program

#include <iostream>

//Linear Search
int dogrusalArama(int dizi[],int N,int aranan){
	int i;	
	int index=-1;
	for(i=0;i<N;i++){
		if(dizi[i]==aranan){			
			return i;			
		}			
	}	
	return index;	//veya return -1;
}

//Binary Search
int ikiliArama(int dizi[],int N, int aranan)
{
    int orta,sol=0,sag=N-1;
    while(sol<=sag)
    {        
        orta=(sol+sag)/2;//dizinin ortasýndaki indeksi bul
        if(aranan==dizi[orta])
           return orta; //aranan sayý bulundu ise maine döndür
         else if(aranan>dizi[orta]) 
            sol=orta+1;//aranan sayý ortadaki sayýdan büyükse sol indeksi kaydýr(ortanýn sonrasýna/saðýna bak)
        else
            sag=orta-1;//aranan sayý ortadaki sayýdan küçükse sað indeksi kaydýr(ortanýn öncesine/soluna bak)
    }
    return -1;//bulunamadý ise -1 döndür
}

//Bubble Sort
void kabarcikSirala(int dizi[],int N){
	int i,j;
	int gecici;
	for(i=0;i<N;i++){//Adým sayýsý
		for(j=0;j<N-1-i;j++){
			if(dizi[j]>dizi[j+1]){ //Dizideki her bir sayý ile bir sonraki sayýyý karþýlaþtýr
				//büyükse yer deðiþtir:
				gecici=dizi[j+1];
				dizi[j+1]=dizi[j];
				dizi[j]=gecici;
			}
		}
	}	
}

//Selection Sort
void secmeliSirala(int dizi[],int N){
	int i,j;
	int gecici;
	for(i=0;i<N;i++){//Dizi boyutu kadar Adým sayýsý
		//en küçük sayýnýn indeksini bul
		int minIndex=i;
		for(j=i+1;j<N;j++){
			if(dizi[j]<dizi[minIndex])
				minIndex=j;
		}
		//en küçük ile i.indekstekini yer deðiþtir
		gecici=dizi[minIndex];
		dizi[minIndex]=dizi[i];
		dizi[i]=gecici;		
	}
}

main(){
	//NOT:Dizi elemanlarý ve aranacak sayý kullanýcýdan scanf ile alýnmalýdýr.
	int dizi[]={-2,1,4,9,12,7,8};
	int aranan=9;
	int sonuc=dogrusalArama(dizi,7,aranan);
	if(sonuc>=0){
		printf("%d sayisi %d.konumda bulundu.",aranan,sonuc+1);
	}
	else{
		printf("%d sayisi bulunamadi.",aranan);
	}
	
	printf("\n");
	
	int sonuc1=ikiliArama(dizi,7,aranan);
		if(sonuc1>=0){
		printf("%d sayisi %d.konumda bulundu.",aranan,sonuc1+1);
	}
	else{
		printf("%d sayisi bulunamadi.",aranan);
	}
	
		printf("\n");
		
	

	
	
}
