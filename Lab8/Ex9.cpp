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

void Check(struct Triangle P){
	
	float a1b1, b1c1, c1a1; 
	a1b1=sqrt(pow((P.a.x-P.b.x),2) + pow((P.a.y-P.b.y),2));
	b1c1=sqrt(pow((P.b.x-P.c.x),2) + pow((P.b.y-P.c.y),2));
	c1a1=sqrt(pow((P.c.x-P.a.x),2) + pow((P.c.y-P.a.y),2));
	
	if(a1b1 == b1c1 && b1c1 == c1a1)
  	{
  		printf("\n This is an Equilateral Triangle");
 	}
 	else if(a1b1 == b1c1 || b1c1 == c1a1 || a1b1 == c1a1)
 	{
 		printf("\n This is an Isosceles Triangle");
	}
	else if((a1b1*a1b1==b1c1*b1c1+c1a1*c1a1) || (c1a1*c1a1==b1c1*b1c1+a1b1*a1b1) || (b1c1*b1c1==a1b1*a1b1+c1a1*c1a1))
	{
		printf("\n This is a Right Triangle");
	}
	else if(((a1b1*a1b1==b1c1*b1c1+c1a1*c1a1) || (c1a1*c1a1==b1c1*b1c1+a1b1*a1b1) || (b1c1*b1c1==a1b1*a1b1+c1a1*c1a1))
				 && (a1b1 == b1c1 || b1c1 == c1a1 || a1b1 == c1a1) )
	{
		printf("\n This is a Isosceles Right Triangle");
	}
	else
	{
		printf("\n This is a Scalene Triangle");
	}  
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
	
	bool isTriangle(struct Triangle);
	if(isTriangle(P)){
		printf("The points of Triangle are: \n A(%f,%f)\n B(%f,%f)\n C(%f,%f)",P.a.x, P.a.y,P.b.x, P.b.y, P.c.x, P.c.y);
		Check(P);
	}
	return 0;
}



