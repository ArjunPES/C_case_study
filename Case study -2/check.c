#include<stdio.h>
#include<string.h>
#include "header.h"
void stud_check(struct student *stud,int n,char *name)
{
	int flag=0;
	for (int i=0;i<n;i++)
	{
		if (strcmp(stud->name,name)==0)
		{
			if (flag==0)
				printf("\n%s \t\t\t %s \t\t\t %s\n","NAME","ROLL NUMBER","FINAL MARKS");
			flag=1;
			printf("\n%s \t\t\t %d \t\t\t\t %.2f\n",stud->name,stud->roll,stud->final_marks);
		}
		stud++;
	}
	if (flag==0)
		printf("\nStudent data not found.\n");
}

