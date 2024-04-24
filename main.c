//MAIN CODE
#include<stdio.h>
#include "header.h"

void main()
{
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
					if (i==0)
						printf("\nNo student data has been entered.\n");
					else
					{
						marks_calc(&stud[0],i);
						printf("\n%s \t\t\t %s \t\t\t %s\n","NAME","ROLL NUMBER","FINAL MARKS");
						for (int j=0;j<i;j++)
						{
							printf("\n%s \t\t\t %d \t\t\t\t %.2f\n",stud[j].name,stud[j].roll,stud[j].final_marks);
						}
						marks_calculated=i;
					}
					break;
				}
			case 3:
				{
					if (marks_calculated==0)
						printf("\nNo student's marks have been calculated.\n");
					else
					{
						char name[50];
						printf("\nEnter name of student whose data has to be searched: ");
						scanf("%s",name);
						stud_check(&stud[0],i,name);
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
}
