struct Koordinat{
	int x;
	int y;
};

struct Daire{
	double yaricap;
	struct Koordinat koordinat; //Struct i�inde ba�ka bir struct tan�mlanabilir
};

void ciz(struct Daire d){
	printf("r:%f x:%d y:%d", d.yaricap, d.koordinat.x, d.koordinat.y);
}

main(){
	
	struct Daire d;
	d.yaricap=4.5;
	d.koordinat.x=2;
	d.koordinat.y=3;
	
	ciz(d);
	
	
}
