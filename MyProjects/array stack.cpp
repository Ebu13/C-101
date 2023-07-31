#define BOYUT 5
int Yigit[BOYUT];
int top=-1;

int DoluMu(){
	if(top==BOYUT-1)
		return 1;//True
	else
		return 0;//False	
}
int BosMu(){
	if(top==-1)
		return 1;
	else
		return 0;	
}

void Push(int a){
	if(DoluMu()){
		printf("Yigit DOLU!\n");
	}
	else{
		top++;
		Yigit[top]=a;
	}	
}

int Pop(){
	if(BosMu()==1){
		printf("Yigit BOS!\n");
	}
	else{		
		return Yigit[top--];
	}
}

void Yazdir(){
	int i;
	for(i=0;i<=top;i++){
		printf("%d ",Yigit[i]);
	}
	printf("\n");
}

main(){
	
//	Push(5);
//	Push(3);
//	Push(1);
//	Push(4);
//	Push(2);
//	Push(6);
//	Push(7);
//	Yazdir();
//	int a=Pop();
//	printf("%d cikarildi\n",a);
//	Yazdir();
//	a=Pop();
//	printf("%d cikarildi\n",a);
//	Yazdir();

//MENÜ :
int secim;
	do{
		printf("----------------\n");
		printf("YIGIT ISLEMLERI\n");
		printf("----------------\n");
		printf("Islem seciniz:\n");
		printf("1.EKLE\n");
		printf("2.CIKAR\n");
		printf("3.LISTELE\n");
		printf("4.CIKIS\n");
		scanf("%d",&secim);
		int sayi;
		switch(secim){
			case 1: 
			
			printf("Sayi giriniz:");
			scanf("%d",&sayi);
					Push(sayi);
			break;
			
			case 2: 
					Pop();
			break;
			
			case 3: 
					Yazdir();
			break;
			
			case 4:
					printf("CIKIS YAPILDI");
			break;
			
			default:
				printf("Hatali Secim!");
				break;
			
		}
		
	}while(secim!=4);
}

	
