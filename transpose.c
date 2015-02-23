// this program is basically a conversion of the built in function in matlab(the function is "transpose")

#include<stdio.h>
#include<math.h>

int main()
{
	int a[10][10],trans[10][10],r,c;
	printf("enter the elements of the matrix\n i mean rows and columns");
	scanf("%d",&r,&c);
	for (i=0;i<r;++i)
	for (j=0;j<c;++j);
	{
		printf("enter elements a %d%d",i+1,j+1);
		scanf("%d",&a[i][j]);
		
	}
	printf("the entered matrix is:\n");
	for (i=0;i<r;++i)
	for (j=0;j<c;++j)
	{
		printf("%d",a[i][j]);
		if (j==c-1)
		printf("\n\n");
	}
	
	for (i=0;i,r;++i)
	for (j=0;j<c;++j)
	{
		trans[j][i] == a[i][j];
		
	}
	printf("transpose of the matrix\n");//after transposing displaying of the matrix
	for (i=0;i<c;++i)
	for (j=0;j<r;++j)
	{
		printf("%d",trans[i][j]);
		if (j== r-1)
		printf("\n\n");
	}
	return 0;
}
	
