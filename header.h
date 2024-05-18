struct student 
{
	char name[50];
	int roll;
	char sec;
	float marks[3][3];
	float final_marks;
};	
void det_entry(struct student *stud,int n);
void marks_calc(struct student* stud,int n,FILE* fp);
void stud_check(FILE* fp,char *name);
