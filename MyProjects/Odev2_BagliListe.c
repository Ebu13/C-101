#include <stdio.h>
struct Node{
	int data;
	struct Node *sonraki;
};

struct Node* ilk=NULL;

void ElemanEkle(int veri,int siraNo){
	if(siraNo<1){
		printf("Sira No 1'den kucuk olamaz!");
	}	
	else{
		struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
		yeni->data=veri;
		yeni->sonraki=NULL;
	
		if(ilk==NULL){ //eleman yoksa ba�a ekle (BasaEkle() fonksiyonu �a�r�labilir)
			ilk=yeni;
		}
		else if(siraNo==1){ //s�raNo 1 ise ba�a ekle (BasaEkle() fonksiyonu �a�r�labilir)
			yeni->sonraki=ilk; 
			ilk=yeni; 
		}
		else{	
			int sayac=1;
		
			struct Node *gecici=ilk;
			while(gecici->sonraki!=NULL){			
				sayac++;
				if(sayac==siraNo){//s�ra no bulunduysa d�ng�den ��k					
					break;
				}	
				gecici=gecici->sonraki;
			}
			
			//geciciden sonras�na ekle: 
			//(s�ra no bulunduysa bulunan yere eklemi� olur, bulunamad�ysa gecici en sondad�r ve sona eklenir)
			yeni->sonraki=gecici->sonraki;
			gecici->sonraki=yeni;
		}
	}
	Listele();//Her ekleme sonras� listeyi Yazd�r
}

void Sil(int siraNo){
	
	if(ilk==NULL){
		printf("Liste BOS!");
	}
	else{
		struct Node* gecici=ilk;
		int silindi=0;
		if(siraNo==1){ 
			ilk=ilk->sonraki;
			free(gecici); 
			silindi=1;
		}
		else{
		
			int sayac=1;
			struct Node *silinecek;
			while(gecici->sonraki!=NULL){
				sayac++;
				if(siraNo==sayac){ 
					silinecek=gecici->sonraki; 
					gecici->sonraki=silinecek->sonraki;
					
					free(silinecek);
					silindi=1;
					break;
				}				
				gecici=gecici->sonraki;				
			}
						
		}
		if(silindi==0){
			printf("%d.sirada eleman olmadigindan silinemedi!\n",siraNo);
		}
		else{
			Listele(); //Her silme sonras� listeyi Yazd�r
		}
	}	
}

void Listele(){
	printf("\n");
	if(ilk==NULL){
		printf("Liste BOS!");
	}
	else{
		struct Node* gecici=ilk;
		while(gecici!=NULL){
			printf("%d->",gecici->data);
			gecici=gecici->sonraki;
		}
		printf("NULL");
	}
	printf("\n");
}

struct Node* Ara(int siraNo){//Arama fonksiyonu struct Node* tipinde olup d���m� d�nd�r�r
	
	if(ilk==NULL){
		printf("Liste BOS!");
	}
	else{
		struct Node* gecici=ilk;
		int sayac=0;		
		while(gecici!=NULL){
			sayac++;
			if(siraNo==sayac){
				return gecici;//bulunan d���m� d�nd�r
			}			
			gecici=gecici->sonraki;
		}
	}
	return NULL;//bulunamazsa NULL d�nd�r;
}

int ElemanSayisiBul(){
	int sayac=0;
	struct Node* gecici=ilk;
	while(gecici!=NULL){
		gecici=gecici->sonraki;
		sayac++;
	}
	return sayac;
}

struct Node* OrtadakiElemanBul(){
	if(ilk==NULL){
		printf("Liste BOS!");
	}
	else{						
		int elemanSayisi=ElemanSayisiBul();
		if(elemanSayisi<3){
			return NULL; //eleman say�s� 1 veya 2 ise ortas� olamaz
		}
		else{			
			int ortaSira=elemanSayisi/2+1;
			int sayac=0;
			struct Node* gecici=ilk;
			while(gecici!=NULL){
				sayac++;
				if(sayac==ortaSira){
					return gecici;//ortadaki d���m� d�nd�r
				}			
				gecici=gecici->sonraki;
			}	
		}
		
	}
	return NULL;//bulunamazsa NULL d�nd�r;
}

void TamSayiyaDonustur(){
	if(ilk==NULL){
		printf("Liste BOS!");
	}
	else{
		//1.y�ntem: her ad�mda say�y� 10 kat�na ��kar�p eleman�n de�erini ekle
		int sayi=0;
		struct Node* gecici=ilk;
		while(gecici!=NULL){
			sayi=sayi*10 + gecici->data;			
			gecici=gecici->sonraki;			
		}
		printf("Tam Sayi:%d\n",sayi);
		
		//2.y�ntem: basamak say�s�n� bulup basamak de�erini hesapla, sonra her eleman� basamak de�eri ile �arp ve basama�� 10'a b�l
		//�rne�in eleman say�s� 3 ise basamak de�eri 100 olur. �lk say�y� 100 ile �arp, ikinci say�y� 10 ile,���nc� say�y� 1 ile �arp�p toplar
		int elemanSayisi=ElemanSayisiBul();
		int basamak=1;
		int i;
		for(i=1;i<elemanSayisi;i++){
			basamak=basamak*10;
		}
		
		int tamSayi;
		gecici=ilk;
		while(gecici!=NULL){
			tamSayi+=gecici->data*basamak;
			basamak=basamak/10;
			gecici=gecici->sonraki;			
		}
		printf("Tam Sayi:%d\n",tamSayi);

		
	}
}


main(){
	
	ElemanEkle(3,1);
	ElemanEkle(2,4);
	ElemanEkle(5,3);
	ElemanEkle(6,3);
	ElemanEkle(4,2);
	
	Sil(5);
	//Sil(2);
	
	int siraNo=3;
	struct Node* aranan=Ara(siraNo);
	if(aranan!=NULL)
		printf("%d.siradaki eleman:%d\n",siraNo,aranan->data);
	else
		printf("%d.sirada eleman bulunamadi!\n",siraNo);	
		
	struct Node* orta=OrtadakiElemanBul();
	if(orta!=NULL)
		printf("Ortadaki eleman:%d\n",orta->data);
	else
		printf("Orta eleman bulunamadi!\n");
		
	
	TamSayiyaDonustur();
}

