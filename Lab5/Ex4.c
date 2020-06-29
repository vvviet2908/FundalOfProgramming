#include<stdio.h>
int check(int n, int z)
{
	if (n==1) return 0;
	if (z==1) return 1;
	else if ((n%z)==0) return 0;
		else return check(n,z-1);
}
void swap(int &a,int &b)
{
	int i=a;a=b;b=i;
}
int  main()
{
	int n,a[100],b[100];
	printf("Input size: ");
	scanf("%d",&n);
	printf("Input the elements: \n");
	for (int i=0;i<n;i++)
	{
		printf("a[%d]",i+1);
		scanf("%d",&a[i]);
	}
	for (int i=0;i<(n-1);i++)
	{
		if (check(a[i],a[i]-1)==1)
			for(int j=i+1;j<n;j++)
			{
				if (check(a[j],a[j]-1)==1)
					if (a[i]>a[j]) swap(a[i],a[j]); 
			} 
	}
	for (int i=0;i<n;i++) printf("%d  ",a[i]);
	return 0;
}
