#include<stdio.h>
#include<math.h>
/*author: Vo Van Viet - ITDSIU18043*/

int main()
{
  float d;
  int f;
  
  printf("Enter the distance in km\n");
  scanf("%f", &d);
  
  if (d < 2){
  	f=15000;
  }
  if (d<=30){
  	f=15000 + ceil((d-2)/0.25)*2000;
  }
  if (d>30){
  	f=15000 + ((30-2)/0.25)*2000 + ceil(d-30)*5000;
  }
  
  printf("The taxi fare is %d VND",f);
  return 0;
}
