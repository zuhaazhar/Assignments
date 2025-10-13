#include<stdio.h>
int main(void){
	int i, marks, pass=0, fail=0, consectivefails;
	while(marks!=-1){
		printf("Enter marks (-1 to stop): ");
		scanf("%d", &marks);
		if(marks>100)
		printf("Invalid Marks.\n");
		if(marks<0&&marks!=-1)
		printf("Marks can not be negative.\n");
		if(marks>=50&&marks<=100){
			pass++;
			consectivefails=0;
		}
		else if(marks<50&&marks>=0){
			fail++;
			consectivefails++;
		}
		if(consectivefails>3)
			break;
	}
	printf("Students passed: %d\nStudents failed: %d", pass, fail);
	return 0;
}