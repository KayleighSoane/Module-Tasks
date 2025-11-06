#include<stdio.h> 
#include <windows.h> //this library is needed for pause() function

#define N 2

struct student //this is how a struct is declared. Structure members cannot be initialized here (when a datatype is declared, no memory is allocated for it. Memory is allocated only when variables are created.). 
{
	char student_name[50];
	int module_code;
	float mark;
};

int main()
{
	int i;
	struct student arr_student[N];

	printf("Student Record System\n");
	printf("---------------------\n\n");
	printf("Student name: ");
	scanf_s("%s", arr_student[i].student_name);
	printf("Module code: ");
	scanf_s("%d", &arr_student[i].module_code);
	printf("Mark: ");
	scanf_s("%f", &arr_student[i].mark);
}
