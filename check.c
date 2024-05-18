#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "header.h"
void stud_check(FILE* fp,char *name)
{
	int flag=0;
	char line[500];
	while(fgets(line,500,fp))
	{
		char* fname=strtok(line,",");
		char* val=strtok(NULL,",");
		int froll=atoi(val);
		val=strtok(NULL,",");
		float ffinal_marks=atof(val);
		if (strcmp(fname,name)==0)
		{
			if (flag==0)
				printf("\n%s \t\t\t %s \t\t\t %s\n","NAME","ROLL NUMBER","FINAL MARKS");
			flag=1;
			printf("\n%s \t\t\t %d \t\t\t\t %.2f\n",fname,froll,ffinal_marks);
		}
	}
	if (flag==0)
		printf("\nStudent data not found.\n");
}

