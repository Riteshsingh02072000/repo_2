#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<=i;j++)
			{
				printf("*");
			}
			for(int k=n-1;k>i;k--)
			{
				printf("##");
			}
			for(int l=0;l<=i;l++)
			{
				printf("*");
			}
			printf("\n");
		} 
		printf("\n");
	}
	return 0;
}
