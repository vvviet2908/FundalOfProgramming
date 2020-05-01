#include<stdio.h>
/*author: Vo Van Viet - ITDSIU18043*/

int main()
{
    int n,i,k=0,j,t=0,t1;
    
     printf("enter the size:");
    scanf("%d",&n);
    
	int a[n],b[n/2],c[n/2];
    
	for(i=0;i<n;i++)
    {
    	printf("Enter the number \n");
        scanf("%d",&a[i]);
        if(i%2==0){
		b[k]=a[i];
		++k;
		}
        else{
		c[t]=a[i];
		++t;
		} 
    }
    
    for(i=0;i<t;i++)
     for(j=0;j<t;j++)
          if(c[i]<c[j])
           {
               t1=c[i];
               c[i]=c[j];
               c[j]=t1;
           }
           
     for(i=0;i<k;i++)
      for(j=0;j<k;j++)
         if(b[i]>b[j])
           {
               t=b[i];
               b[i]=b[j];
               b[j]=t;
           }
		      
   k=0;t=0;
   
   	printf("result:\n");
    for(i=0;i<n;i++)
    {
        if(i%2==0)
           {printf("%d ",b[k]);++k;}
       else
            printf("%d ",c[t++]);
    }
    
    return 0;
}
