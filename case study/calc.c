#include<stdio.h>
#include "header.h"
void marks_calc(float final_marks[10],float* marks,int n)
{
	for(int i=0;i<n;i++)
	{
		float final=0;
		float avg=0;
		for(int j=0;j<3;j++)
		{
			float s=0;
		
			for(int k=0;k<3;k++)
			{
				s=s+*marks;
				marks++;
			}
			
			avg=s/3;
			
			if (avg >=90 && avg <=100)
 				final=final+10;
			else if (avg>=80 && avg<90)
				final=final+9;
			else if (avg>=70 && avg<80)
				final=final+8;
			else if (avg>=60 && avg<70)
				final=final+7;
			else if (avg>=50 && avg<60)
				final=final+6;
			else if (avg>=40 && avg<50)
				final=final+5;
			else
				final=final+0;
		}
		final_marks[i]=final/3;
	}
}
				


