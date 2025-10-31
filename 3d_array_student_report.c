#include<stdio.h>
int main(void){
	int report[5][4][3];
	int numStudents, numSubjects, i, j, k;
	
	printf("Enter number of students (Max 5): ");
	scanf("%d", &numStudents);
	printf("\nEnter number of subjects (Max 4): ");
	scanf("%d", &numSubjects);
	
	for(i=0;i<numStudents;i++){
		printf("\nEnter marks of student %d", i+1);
		for(j=0;j<numSubjects;j++){
			for(k=0;k<3;k++){
				printf("\nSubject %d and term %d: ", j+1, k+1);
				scanf("%d", &report[i][j][k]);
			}
		}
	}
	
	float total, termtotal, avgpterm[5][3]={0}, studentOverallAvg[5]={0};
	for(i=0;i<numStudents;i++){
		total=0;
		for(k=0;k<3;k++){
			termtotal=0;
			for(j=0;j<numSubjects;j++){
				termtotal+=report[i][j][k];
			}
			avgpterm[i][k]=termtotal/numSubjects;
			total+=avgpterm[i][k];
		}
		studentOverallAvg[i]=total/3;
	}
	
	printf("\n\n====Student Averages====");
	for(i=0;i<numStudents;i++){
		printf("\nStudent: %d", i+1);
		for(k=0;k<3;k++){
			printf("\nTerm %d Average: %.2f", k+1, avgpterm[i][k]);
		}
		printf("\nOverall Average: %.2f", studentOverallAvg[i]);
	}
	
	int topstudent=0;
	float highestavg=studentOverallAvg[0];
	for(i=0;i<numStudents;i++){
		if(studentOverallAvg[i]>highestavg){
			highestavg=studentOverallAvg[i];
			topstudent=i;
		}
	}
	
	int best_term=0;
	float best_termscore=avgpterm[topstudent][0];
	for(k=0;k<3;k++){
		if(avgpterm[topstudent][k]>best_termscore){
			best_termscore=avgpterm[topstudent][k];
			best_term=k;
		}
	}
	
	printf("\n\n====Top Performer===");
	printf("\nStudent %d scored highest overall (%.2f) in %d term (%.2f average score).", topstudent+1, highestavg, best_term+1, best_termscore);
	
	return 0;
}