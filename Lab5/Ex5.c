#include<stdio.h>
/*author: Vo Van Viet - ITDSIU18043*/
int  main()
{
	int i;
	int a[100],n,b[100];
	printf("Input the size number: ");scanf("%d",&n);
	printf("Input the value: \n");
	for (i=0;i<n;i++)
	{
		printf("a[%d]",i+1);
		scanf("%d",&a[i]);
		b[i]=1;
	}
	int j=0,x=0;
	for (i=0;i<(n-2);i++)
	{
		if (a[i]<a[i+1])
		{
			if (a[i+1]<a[i+2])
			{
				++b[x];
				++j;	
			}
			else
			{
				++b[x];
				++j;
				x=j;
			}
		}
		else
		{
			if (a[i+1]>a[i+2]) 
			{
			    ++b[x];
			    ++j;
			}
			else
			{
				++b[x];
				++j;
				x=j;
			}
		}
	}
	int k=b[0];
	int l;
	for (i=1;i<n;i++)	
	{
		if (k<b[i]) 
		{
			k=b[i];
			l=i;
		}
	}
	for (i=l;i<(l+k);i++) printf("%d   ",a[i]);
	return 0;
}
