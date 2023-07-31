#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *sonraki;
};

struct Node* ilk=NULL;

void SonaEkle(int veri){
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->data=veri;
	yeni->sonraki=NULL;
	
	if(ilk==NULL){
		ilk=yeni;
	}
	else{
		struct Node* gecici=ilk; //listenin ba��ndan ba�la
		while(gecici->sonraki!=NULL){ //son elemana kadar ilerle		
			gecici=gecici->sonraki;
		}	
		gecici->sonraki=yeni;//d�ng� bitti�inde gecici son d���m� g�sterdi�inden sonras�na yeni d���m� ekle
	}
}

void BasaEkle(int veri){
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->data=veri;
	yeni->sonraki=NULL;
	
	if(ilk==NULL){//listede eleman yoksa
		ilk=yeni;
	}
	else{
		yeni->sonraki=ilk; //ilk eleman� yeni eleman�n sonras�na ba�la
		ilk=yeni; //yeni d���m� ilk d���m olarak ata
	}
}

void ArayaEkle(int veri,int aranan){ //aranan: hangi elemandan sonra eklenece�ini belirtir. 5'ten sonra 7 eklenecekse veri:7,aranan:5 olur
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->data=veri;
	yeni->sonraki=NULL;
	
	if(ilk==NULL){//listede eleman yoksa
		ilk=yeni;
	}
	else{
		struct Node* gecici=ilk;
		while(gecici!=NULL){
			if(gecici->data==aranan){ //sonras�na eklenecek eleman bulundu ise
				yeni->sonraki=gecici->sonraki;
				gecici->sonraki=yeni;
				break;
			}
			gecici=gecici->sonraki;
		}		
	}	
}

void Sil(int veri){
	
	if(ilk==NULL){
		printf("Liste BOS!");
	}
	else{
		struct Node* gecici=ilk;
		
		if(ilk->data==veri){ 
			ilk=ilk->sonraki;//ilk eleman silinecekse ilk de�erini sonrakini g�sterecek �ekilde g�ncelle
			free(gecici); //bellekten sil
		}
		else{
			//Silinecek eleman: geciciden sonraki eleman olacak. gecici ile silinecek eleman�n sonras� ba�lanmal�d�r.
			//silinecek d���mden �nceki d���m ile sonraki d���m ba�lant�s�n� sa�lanmal�
			
			struct Node *silinecek;
			while(gecici->sonraki!=NULL){
				if(gecici->sonraki->data==veri){ 
					silinecek=gecici->sonraki; 
					gecici->sonraki=silinecek->sonraki;
					
					free(silinecek);
					break;
				}				
				gecici=gecici->sonraki;				
			}			
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
			printf("%d ",gecici->data);
			gecici=gecici->sonraki;
		}
	}
	printf("\n");
}

struct Node* Ara(int aranan){//Arama fonksiyonu struct Node* tipinde olup d���m� d�nderir
	
	if(ilk==NULL){
		printf("Liste BOS!");
	}
	else{
		struct Node* gecici=ilk;		
		while(gecici!=NULL){
			if(gecici->data==aranan){
				return gecici;//aranan say�n�n oldu�u d���m� d�nder
			}			
			gecici=gecici->sonraki;
		}
	}
	return NULL;//bulunamazsa NULL d�nder;
}

main(){
	
	BasaEkle(5);
	SonaEkle(9);
	
	Listele();
	BasaEkle(3);
	SonaEkle(10);
	ArayaEkle(7,5);//7 say�s�n� 5 ten sonras�na ekle
	Listele();
	
	Sil(5);//aradakini sil
	Sil(10);//sondan sil
	Sil(3);//ba�tan sil
	Listele();
	
	int sayi=9;
	struct Node* arananDugum=Ara(sayi);
	if(arananDugum!=NULL){
		printf("%d bulundu.",arananDugum->data);//bulunan d���m�n t�m bilgileri yaz�labilir
	}
	else{
		printf("%d bulunamadi!",sayi);
	}
	
}

