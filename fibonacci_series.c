#include <stdio.h>
int main(void){
	//Zuha Azhar CT-25055
    int a=0, b=1, next, sum=0;
    printf("Fibonacci series up to 1000:\n");
    
    printf("%d, %d", a, b);
    next = a + b;
    while (next<=1000) {
        printf(", %d", next);
        if(next%3==0&&next%5==0&&next%7==0){
        	sum+=next;
		}
        a=b;
        b = next;
        next = a + b;       
		}
		printf("\nThe sum of numbers divisible by 3, 5 and 7 is %d", sum);
		
	a=0;
	b=1;
	printf("\n\n%d, %d", a, b);	
	for(next=1;next<=1000;next=a+b){
		printf(", %d", next);
		if(next%3==0&&next%5==0&&next%7==0){
        	sum+=next;
		}
		a=b;
		b=next;
	}
	printf("\nThe sum of numbers divisible by 3,5 and 7 is %d", sum);
	//The for loop is more efficient because it is intializing, checking the condition and updating the variable in the same step
    return 0;
}
