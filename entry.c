#include<stdio.h>
#include "header.h"
void det_entry(struct student *stud, int n)
{
	printf("\nEnter your name : ");
	scanf("%s",stud->name);
	printf("\nEnter your roll number : ");
	scanf("%d",&stud->roll);
	printf("\nEnter your class : ");
	scanf(" %c",&stud->sec);
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
			printf("\nEnter marks of %s in Test %d of %s : ",stud->name,j+1,sub[i]);
			scanf("%f",&stud->marks[i][j]);
	
		}
	}
}


