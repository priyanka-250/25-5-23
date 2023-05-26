#include<stdio.h>
main()
{
	int a[100][100],b[100][100];
	int i,j,r,c,sum[100][100];
	printf("enter number of row=");
	scanf("%d",&r);
	printf("enter number of colum=");
	scanf("%d",&c);
	printf("array of elements a\n=");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
	{
		scanf("%d",&a[i][j]);
   }
	printf("\n");
   }
   printf("array of elements b=\n");
   for(i=0;i<r;i++)
   {
        for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
	    }
	    printf("\n");
   }
   for(i=0;i<r;i++)
   {
   	    for(j=0;j<c;j++)
   	    {
   	    	sum[i][j]=a[i][j]+b[i][j];
   	    	
		   }
   }
   printf("sum of array=");
   for(i=0;i<r;i++)
   {
   	for(j=0;j<c;j++)
   	printf("%d\n",sum[i][j]);
   }
   
}
