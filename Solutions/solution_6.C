#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,rows,k,m=1;
	clrscr();
	printf("Enter Any Number-->");
	scanf("%d",&rows);
	printf("\n");
	for(i=rows;i>=1;i--)
	{
		for(j=1;j<=m;j++)
		{
			printf(" ");
		}
		for(k=1;k<=(2*i-1);k++)
		{
			printf("*");
		}
		m++;
		printf("\n");
	}
	getch();
}