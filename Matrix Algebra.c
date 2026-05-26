#include<stdio.h>

            //CONTENTS
            
  //| Matrix Algebra | 
void display(int n, int a[n][n]);
void input(int n,int arr[n][n],char name);
int size();
void mat_mul(); 
void mat_uppertriangular(); 
void mat_lowertriangular(); 
void mat_trans();

int main(){
	
	return 0;
}

                //| Matrix Algebra |
               
void display(int n, int a[n][n]) {
	int i,j; 
    for(i = 0; i < n; i++){
    	printf("| ");
        for(j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("|\n");
    }
}
int size(){
	int n;
	printf("\nEnter the size of matrix: ");
	scanf("%d",&n);
	printf("\nMatrix is of size(%dx%d): ",n,n);
	return n;
}
void input(int n,int arr[n][n],char name){
	
	int i,j;
	
	printf("\nEnter for matrix %c:\n",name);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Enter the number at index(%d,%d): ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}
          
		       //Transverse
void mat_trans(){
	int i,j,n = size(),k=0;
	int a[n][n],ans[n][n];
	
	input(n,a,'A');
	printf("\nPrinting the Transporse of the Matrix...\n");
	for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            ans[i][j] = a[j][i];
        }
    }
    display(n,ans);
}
        
		       //Lower Triangular
void mat_lowertriangular(){
	int i,j,n = size(),k=0;
	int a[n][n],ans[n][n];
	
	input(n,a,'A');
	printf("\nPrinting the Lowertriangular Matrix...\n");
	for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
        	if(j<=i){
        		ans[i][j] = a[i][j];
			}else{
				ans[i][j] = 0;
			}
        }
    }
    display(n,ans);
}
           
		      // Upper Triangular
void mat_uppertriangular(){
	int i,j,n = size(),k=0;
	int a[n][n],ans[n][n];
	
	input(n,a,'A');
	printf("\nPrinting the Uppertriangular Matrix...\n");
	for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
        	if(j>=i){
        		ans[i][j] = a[i][j];
			}else{
				ans[i][j] = 0;
			}
        }
    }
    display(n,ans);
}
        
		       //Multiplication
void mat_mul(){	
	int i,j,n = size(),k=0;
	int a[n][n],b[n][n],ans[n][n];
	
	input(n,a,'A');
	input(n,b,'B');
	 // Initialize result matrix to 0
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            ans[i][j] = 0;
        }
    }
    //Making of the final matrix
    printf("\nPrinting the Multiplication of the Matrices...\n");
	for(i=0;i< n;i++){
		printf("\t");
		for(j=0;j< n;j++){
			for(k=0;k< n;k++){
				ans[i][j] += a[i][k] * b[k][j];
				
			}
		}
	}
	display(n,ans);
}
