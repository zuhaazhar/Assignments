#include<stdio.h>
int main(void){
	//Zuha Azhar CT-25055
	int m, n, T=0;
	printf("Enter number of rows and columns respectively: ");
	scanf("%d %d", &m, &n);
	
	int matrix[m][n];
	printf("\nEnter the matrix:\n");
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &matrix[i][j]);
			if(matrix[i][j]==0){
				T++;
			}
		}
	}
	
	if(T>=((m * n)/2)){
		printf("\nEntered matrix is a sparse matrix");
	}
	else
	printf("\nEntered matrix is not a sparse matrix");
	
	return 0;
}