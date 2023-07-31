/*
YAPILAR (STRUCT)
*/

struct Ogrenci{
	char ad[50];
	int no;
	int sinif;
};
void yazdir(struct Ogrenci x){
	printf("ad:%s no:%d sinif:%d \n",x.ad,x.no,x.sinif);
}
main(){

	struct Ogrenci ogr[50];	
	int i;
	for(i=0;i<2;i++){
		printf("%d.ogrencinin ad,no,sinif giriniz:",i+1);
		scanf("%s %d %d",&ogr[i].ad,&ogr[i].no,&ogr[i].sinif);
	}
	
	for(i=0;<2;i++){
		yazdir(ogr[i]);
	}	
	
}
