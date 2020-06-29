#include<stdio.h>
#include<math.h>
struct Point{
	int x;
	int y;
};

struct Triangle{
	Point a;
	Point b;
	Point c;
};

void isEqual(struct Triangle P1, struct Triangle P2){
		int a1b1, b1c1, c1a1, a2b2, b2c2,c2a2; 
	
	a1b1=sqrt((P1.a.x-P1.b.x)^2 + (P1.a.y-P1.b.y)^2);
	b1c1=sqrt((P1.b.x-P1.c.x)^2 + (P1.b.y-P1.c.y)^2);
	c1a1=sqrt((P1.c.x-P1.a.x)^2 + (P1.c.y-P1.a.y)^2);
		
	a2b2=sqrt((P2.a.x-P2.b.x)^2 + (P2.a.y-P2.b.y)^2);
	b2c2=sqrt((P2.b.x-P2.c.x)^2 + (P2.b.y-P2.c.y)^2);
	c2a2=sqrt((P2.c.x-P2.a.x)^2 + (P2.c.y-P2.a.y)^2);
	
	if ((a1b1==a2b2 && b1c1==b2c2 && c1a1==c2a2) || 
		(a1b1==b2c2 && b1c1==c2a2 && c1a1==a2b2) || 
		(a1b1==c2a2 && b1c1==a2b2 && c1a1==b2c2) ||
		(a1b1==a2b2 && b1c1==c2a2 && c1a1==b2c2) || 
		(a1b1==b2c2 && b1c1==a2b2 && c1a1==c2a2) ||
		(a1b1==c2a2 && b1c1==b2c2 && c1a1==a2b2)){
	printf("2 triangle are equal");
	}
	else{
		printf("2 triangle are not equal");
	}
}

int main(){
	Triangle P1;
	
	printf("Enter the point A of Triangle1\n");
	scanf("%d %d", &P1.a.x, &P1.a.y);
	
	printf("Enter the point B  of Triangle1\n");
	scanf("%d %d", &P1.b.x, &P1.b.y);
	
	printf("Enter the point C  of Triangle1\n");
	scanf("%d %d", &P1.c.x, &P1.c.y);
	
	Triangle P2;
	
	printf("Enter the point A  of Triangle2\n");
	scanf("%d %d", &P2.a.x, &P2.a.y);
	
	printf("Enter the point B  of Triangle2\n");
	scanf("%d %d", &P2.b.x, &P2.b.y);
	
	printf("Enter the point C  of Triangle2\n");
	scanf("%d %d", &P2.c.x, &P2.c.y);
	
	isEqual(P1,P2);

	return 0;
}
