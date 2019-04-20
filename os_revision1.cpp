#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char p[10][5],temp[5];
	int i,j,pt[10],pr[10],temp1,n;
	float avgwt;
	printf("Enter no of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter student %d name:",i+1);
  		scanf("%s",&p[i]);
  		fflush(stdin);
		printf("Enter process time:");
		fflush(stdin);
		scanf("%d",&pt[i]);
		printf("Enter no of gifts:");
		fflush(stdin);
		scanf("%d",&pr[i]);
	}
}
