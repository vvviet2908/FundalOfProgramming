#include<stdio.h>

struct Point{
	int x;
	int y;
};

struct Triangle{
	Point a;
	Point b;
	Point c;
};

int main(){
	Triangle P;
	
	printf("Enter the point A\n");
	scanf("%d %d", &P.a.x, &P.a.y);
	
	printf("Enter the point B\n");
	scanf("%d %d", &P.b.x, &P.b.y);
	
	printf("Enter the point C\n");
	scanf("%d %d", &P.c.x, &P.c.y);
	
	printf("The points of Triangle are: \n A(%d,%d)\n B(%d,%d)\n C(%d,%d)",P.a.x, P.a.y,P.b.x, P.b.y, P.c.x, P.c.y);
	return 0;
}
