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


float area(int xa, int ya, int xb, int yb, int xc, int yc) 
{ 
   return abs((xa*(yb-yc) + xb*(yc-ya)+ xc*(ya-yb))/2); 
} 
  

bool isInsideTriangle(int xa, int ya, int xb, int yb, int xc, int yc, int x, int y) 
{    

   float A = area (xa, ya, xb, yb, xc, yc); 
  

   float A1 = area (x, y, xb, yb, xc, yc); 
  
	float A2 = area (xa, ya, x, y, xc, yc); 

   float A3 = area (xa, ya, xb, yb, x, y); 
   
   return (A == A1 + A2 + A3); 
} 

int main(){
	Triangle P;
	float x1,y1;
	
	printf("Enter the point A\n");
	scanf("%f %f", &P.a.x, &P.a.y);
	
	printf("Enter the point B\n");
	scanf("%f %f", &P.b.x, &P.b.y);
	
	printf("Enter the point C\n");
	scanf("%f %f", &P.c.x, &P.c.y);
	
	printf("Enter the point to check\n");
	scanf("%f %f", &x1,&y1);
	bool isTriangle(struct Triangle);
	if(isTriangle(P)){
		printf("The points of Triangle are: \n A(%f,%f)\n B(%f,%f)\n C(%f,%f)",P.a.x, P.a.y,P.b.x, P.b.y, P.c.x, P.c.y);
		if (isInsideTriangle(P.a.x, P.a.y, P.b.x, P.b.y, P.c.x, P.c.y, x1, y1)) 
     		printf ("\n The point is Inside"); 
  		else
     		printf ("\n The point is Not Inside"); 
	}
	return 0;
}



