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

bool isTriangle(struct Triangle P)
{
    if (((P.a.x / P.b.x) != (P.a.y / P.b.y) ||
        ((P.b.x / P.c.x) != (P.b.y / P.c.y)) ||
        ((P.c.x / P.a.x) != (P.c.y / P.a.y))))
    {
        printf("This is a Triangle");
        return true;
    }
    else
    {
        printf("3 points is on a same row, this is not triangle");
    	return false;
	}
};


int main(){
	Triangle P;
	
	printf("Enter the point A\n");
	scanf("%d %d", &P.a.x, &P.a.y);
	
	printf("Enter the point B\n");
	scanf("%d %d", &P.b.x, &P.b.y);
	
	printf("Enter the point C\n");
	scanf("%d %d", &P.c.x, &P.c.y);
	bool isTriangle(struct Triangle);
	if(isTriangle(P))
	printf("\nThe points of Triangle are: \n A(%d,%d)\n B(%d,%d)\n C(%d,%d)",P.a.x, P.a.y,P.b.x, P.b.y, P.c.x, P.c.y);

	return 0;
	
	
}
