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
        orta=(sol+sag)/2;//dizinin ortas�ndaki indeksi bul
        if(aranan==dizi[orta])
           return orta; //aranan say� bulundu ise maine d�nd�r
         else if(aranan>dizi[orta]) 
            sol=orta+1;//aranan say� ortadaki say�dan b�y�kse sol indeksi kayd�r(ortan�n sonras�na/sa��na bak)
        else
            sag=orta-1;//aranan say� ortadaki say�dan k���kse sa� indeksi kayd�r(ortan�n �ncesine/soluna bak)
    }
    return -1;//bulunamad� ise -1 d�nd�r
}

//Bubble Sort
void kabarcikSirala(int dizi[],int N){
	int i,j;
	int gecici;
	for(i=0;i<N;i++){//Ad�m say�s�
		for(j=0;j<N-1-i;j++){
			if(dizi[j]>dizi[j+1]){ //Dizideki her bir say� ile bir sonraki say�y� kar��la�t�r
				//b�y�kse yer de�i�tir:
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
	for(i=0;i<N;i++){//Dizi boyutu kadar Ad�m say�s�
		//en k���k say�n�n indeksini bul
		int minIndex=i;
		for(j=i+1;j<N;j++){
			if(dizi[j]<dizi[minIndex])
				minIndex=j;
		}
		//en k���k ile i.indekstekini yer de�i�tir
		gecici=dizi[minIndex];
		dizi[minIndex]=dizi[i];
		dizi[i]=gecici;		
	}
}

main(){
	//NOT:Dizi elemanlar� ve aranacak say� kullan�c�dan scanf ile al�nmal�d�r.
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
