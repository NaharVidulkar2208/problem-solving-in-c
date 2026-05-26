#include<stdio.h>

            //CONTENTS
            
// | Searching Algorithms |
void linearsearch(int n,int arr[n],int num);
void binarysearch(int n,int arr[n],int num);

int main(){
	
	return 0;
}
               // | Searching Algorithms |

void linearsearch(int n,int arr[n],int num){
	int i;
	for(i = 0;i<n;i++){
		if(arr[i] == num){
			printf("Element is present at index: %d",i);
			return; 
		}
	}
	printf("Element is not present.");
}

void binarysearch(int n,int arr[n],int num){
	int s = 0,e = n - 1;
	int mid;
	while(s<=e){
		mid = s + (e-s)/2;
		if(arr[mid] == num){
			printf("Element is present at index %d",mid);
			return;
		}
		if(num > arr[mid]){
			s = mid + 1;
		}else{
			e = mid -1;
		}
	}
	printf("Element is not present.");
}
