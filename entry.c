#include<stdio.h>
#include "header.h"
void det_entry(char details[10][3][100], float* marks, int n)
{
	printf("\nEnter your name : ");
	scanf("%s",details[n][0]);
	printf("\nEnter your roll number : ");
	scanf("%s",details[n][1]);
	printf("\nEnter your class : ");
	scanf("%s",details[n][2]);
	char sub[3][100];
	for (int i=0;i<3;i++)
	{
		printf("\nEnter subject %d : ",i+1);
	        scanf("%s",sub[i]);
	}	
	printf("\nMARKS MUST BE ENTERED OUT OF 100.\n");
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			printf("\nEnter marks of %s in Test %d of %s : ",details[n][0],j+1,sub[i]);
			scanf("%f",marks);
			marks++;
		}
	}
}


