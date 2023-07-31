#include<stdio.h>
#define boyut 5
 int dizi[boyut];
 int front=-1,rear=-1;
 
 int dolumu(){
 if(rear==boyut-1){
 return 1;
 }
 else{
 return 0;
 }
 
 
 }
int bosmu(){
if(rear==-1){
return 1;
}
else{
return 0;
}



}

void ekle(int a){
if(dolumu()==1){
printf("dizi doludur\n");
}
else{
 dizi[++rear]=a;
}
}
int cikar(){
if(bosmu()==1){
printf("dizi bostur\n");
}
else if(front==boyut-1){
front=-1;
rear=-1;
}
else{
return dizi[front++];

}

}

void listele(){
if(bosmu()==1){
printf("dizi bostur\n");
}
else{
	printf("dizi ");
for(int i=front+1;i<=rear;i++){
printf("%d ",dizi[i]);
}


}
}





int main(){
	int secim,kontrol=1,top=0;
	printf("----------- yigit islemleri------\n\n\n");
	printf("Islem seciniz:\n");
	printf("1.EKLE\n");
	
	printf("2.CIKAR\n");
	printf("3.LISTELE\n");
	printf("4.CIKIS\n");
	
	while(kontrol==1){
	if(top==1){
		printf("\t\t\tIslem seciniz:\n");
	printf("1.EKLE\n");
	
	printf("2.CIKAR\n");
	printf("3.LISTELE\n");
	printf("4.CIKIS\n");
	
}
scanf("%d",&secim);
	switch(secim){
	
	case 1:
		int a;
		printf("sayi giriniz:\n");
		scanf("%d",&a);
	ekle(a);
	break;
	case 2:
		cikar();
	break;
	case 3: 
	listele();
	break;
	case 4:
	printf("cikis yapildi\n");
	break;
	default:
		printf("boyle bir secenek yok\n");
		break;
}
	top=1;
	printf("devam etmek istiyorsaniz 1e basin ");
	scanf("%d",&kontrol);
	
	
	
	}
	
	
	
	
	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
