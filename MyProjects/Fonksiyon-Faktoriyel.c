//Faktöriyel: 4!=4*3*2*1=24
//Kombinasyon Hesapla:

int faktoriyel(int a){
	int sonuc=1;
	int i;
	for(i=a;i>0;i--){
		sonuc=sonuc*i;
	}
	return sonuc;
}

int kombinasyon(int n,int r){
	int c=faktoriyel(n)/(faktoriyel(r)*faktoriyel(n-r));
	return c;
}

int main(){	
 	int c; 
 	c=kombinasyon(5,2);
 	
 	printf("kombinasyon=%d",c);
 	
 
}


