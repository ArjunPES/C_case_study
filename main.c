//MAIN CODE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "header.h"

void main()
{
	FILE* fp;
	int op=0;
	long f=0;
	if (fp=fopen("Student_Data.csv","r"))
	{
		fp=fopen("Student_Data.csv","a+");
		op=1;
		f=ftell(fp);
	}
	else
	{
		fp=fopen("Student_Data.csv","w+");
	}
	struct student stud[10];//={{"Suresh",4,'B',{{56,57,68},{76,65,77},{86,76,89}}}};
	int q=0;
	int i=0;
	int marks_calculated=0;
	while (q==0)
	{
		printf("\n*** MENU *** \n\n1. Enter Student data and  marks of student\n\n2. To calculate grade of students and print marks of students\n\n3. To search for student detials and marks\n\n4. To quit\n\nEnter your choice: ");
		int ch;
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:

				{
					if (i>=10)
						printf("\nMore student cannot be entered. \n");
					else
					{
						det_entry(&stud[i],i);
						i++;
					}
					break;
				}
			case 2:
				{
					char line[500];
					if(i!=0)
					{
						fseek(fp,f,SEEK_SET);
						marks_calc(&stud[0],i,fp);
					//	printf("%d",i);

					}
					if ((i!=0)||(op!=0))
					{	
						fseek(fp,0,SEEK_SET);
					printf("\n%s \t\t\t %s \t\t\t %s\n","NAME","ROLL NUMBER","FINAL MARKS");
					while(fgets(line,500,fp))
					{
					//	printf("%s",line);
						char* fname=strtok(line,",");
						char* val=strtok(NULL,",");
						int froll=atoi(val);
						val=strtok(NULL,",");
						float ffinal_marks=atof(val);
						printf("\n%s \t\t\t %d \t\t\t\t %.2f\n",fname,froll,ffinal_marks);
					}
					op=1;
					}
					else
						printf("\nNo Student data has been entered.\n");
					marks_calculated=i;
					
					break;
				}
			case 3:
				{
					if ((marks_calculated==0)&&(op==0))
						printf("\nNo student's marks have been calculated.\n");
					else
					{
						fseek(fp,0,SEEK_SET);
						char name[50];
						printf("\nEnter name of student whose data has to be searched: ");
						scanf("%s",name);
						stud_check(fp,name);
					}
					break;

				}	
			case 4:
				{
					q=1;
					break;
				}
			default:
				{
					printf("Invalid choice.\n");
					break;
				}
		}
	}
fclose(fp);
}
