#include<stdio.h>
int main(){
	int mat[10][10],trans[10][10];
	int m,n,i,j;
	printf("Enter the rows and columns:");
	scanf("%d%d",&m,&n);
	printf("Enter elements:");
	for(i=0; i<m; i++){
	
	for(j=0; j<n; j++){
			scanf("%d",&mat[i][j]);
	}
}
printf("Elements of matrix\n");
for(i=0; i<m; i++){
	
	for(j=0; j<n; j++){
	printf("%d\t", mat[i][j]);
}
printf("\n");
	}
	
	for(i=0; i<m; i++){
	
	for(j=0; j<n; j++){
		trans[j][i] = mat[i][j];
	}}
	printf("Transpose of matrix:\n");
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("%d\t",trans[i][j]);
		}
		printf("\n");
	}
	return 0;
}
