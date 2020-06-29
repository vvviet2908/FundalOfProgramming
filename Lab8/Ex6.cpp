#include<stdio.h>
#include<math.h>
struct Point{
	float x;
	float y;
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
        printf("\nThis is a Triangle\n");
        return true;
    }
    else
    {
        printf("\n3 points is on a same row, this is not triangle\n");
    	return false;
	}
};


void Centroid(struct Triangle P){

	float xg,yg;

	xg=(P.a.x+P.b.x+P.c.x)/3;
	yg=(P.a.y+P.b.y+P.c.y)/3;
	printf("The centroid is G(%f,%f)", xg,yg);
}

int main(){
	Triangle P;
	
	printf("Enter the point A\n");
	scanf("%f %f", &P.a.x, &P.a.y);
	
	printf("Enter the point B\n");
	scanf("%f %f", &P.b.x, &P.b.y);
	
	printf("Enter the point C\n");
	scanf("%f %f", &P.c.x, &P.c.y);
	
	bool isTriangle(struct Triangle);
	if(isTriangle(P)){
		printf("The points of Triangle are: \n A(%f,%f)\n B(%f,%f)\n C(%f,%f)",P.a.x, P.a.y,P.b.x, P.b.y, P.c.x, P.c.y);
		Centroid(P);
	}
	return 0;
}



