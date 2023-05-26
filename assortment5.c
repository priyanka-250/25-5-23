#include<stdio.h>
main()
{
	int a[100][100],b[100][100];
	int i,j,r,c;
	printf("enter the number row=");
	scanf("%d",&r);
	printf("enter the number of colum=");
	scanf("%d",&c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d\n",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
		
		printf("\n");
	}
   
   for(i=0;i<r;i++)
   {
   	for(j=0;j<c;j++)
   	{
   		b[j][i]=a[i][j];
	   }
	   
   }
   printf("transpose element array=");
   for(i=0;i<c;i++)
   {
   	for(j=0;j<r;j++)
   	{
   		printf("%d",b[i][j]);
   		
   }
	   printf("\n");

   }
}
