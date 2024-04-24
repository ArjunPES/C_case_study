//MAIN CODE
#include<stdio.h>
#include "header.h"
void main()
{
	char student_details[10][3][100];//={{"Suresh","24","B"},{"Ramesh","45","C"},{"Surya","54","B"}};
	float student_marks[10][3][3];//={{{60,70,80},{65,76,89},{77,87,90}},{{56,67,66},{54,54,55},{88,96,99}},{{77,76,75},{88,87,86},{83,65,77}}};
	float final_marks[10];
	int q=0;
	int i=0;
	while (q==0)
	{
		printf("\n*** MENU *** \n\n1. Enter Student data and  marks of student\n\n2. To calculate grade of students and print marks of students\n\n3. To quit\n\nEnter your choice: ");
		int ch;
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:

				{
					char c='y';
					if (i>=10)
						printf("\nMore student cannot be entered. \n");
					else
					{
						det_entry(student_details,student_marks[i][0],i);
						i++;
					}
					break;
				}
			case 2:
				{
					marks_calc(final_marks,student_marks[0][0],i);
					printf("\n%s \t\t\t %s \t\t\t %s\n","NAME","ROLL NUMBER","FINAL MARKS");
					for (int j=0;j<i;j++)
					{
						printf("\n%s \t\t\t %s \t\t\t\t %.2f\n",student_details[j][0],student_details[j][1],final_marks[j]);
					}
					break;
				}	
			case 3:
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
