#include<stdio.h>

            //CONTENTS
            
// | Sorting Algorithms |
void bubble_sort(int n,int arr[n]);
void swap(int n, int arr[n],int first,int second);
int getmax(int n,int arr[n],int end); 
void selection_sort(int n,int arr[n]);
void quicksort(int arr[],int low,int high);
void merge(int arr[], int s, int mid, int e);
void mergesort(int n, int arr[], int s, int e);
void insertion_sort(int n, int arr[n]);

int main(){
	
	return 0;
}
               // | Sorting Algorithms |

               //Bubble_sort
void bubble_sort(int n,int arr[n]){
	int i,j,temp,swap;
	for(i=0;i < n;i++){
		swap = 0; 
		for(j=1;j < n-i;j++){
			if(arr[j] < arr[j-1]){
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
				swap = 1;
			}
		}
		if(!swap){
			break;
		}
	}
}

void swap(int n, int arr[n],int first,int second){
	int i,j,temp;
	temp = arr[first];
	arr[first] = arr[second];
	arr[second] = temp;
}

               //Selection_sort
int getmax(int n,int arr[n],int end){
	int i,max = 0;
	for(i=0;i <= end;i++){
		if(arr[i] > arr[max]){
			max = i;
		}
	}
	return max;
}
void selection_sort(int n,int arr[n]){
	int i,j,temp;
	int max , end;
	for(i=0;i < n;i++){
		end = (n - 1) - i;
		max = getmax(n,arr,end);
		swap(n,arr,max,end);
		
	}
}

               //Quick_sort
void quicksort(int arr[],int low,int high){
	int temp;
	if(low >= high){
		return;
	}
	int s = low;
	int e = high;
	int m = s + (e-s)/2;
	int pivot = arr[m];
	
	while(s <= e){
		while(arr[s] < pivot){
			s++;
		}
		while(arr[e] > pivot){
			e--;
		}
		if(s <= e){
			temp = arr[s];
			arr[s] = arr[e];
			arr[e] = temp;
			s++;
			e--;
		}
		quicksort(arr,low,e);
		quicksort(arr,s,high);
	}
}
               
               //Merge_sort
void merge(int arr[], int s, int mid, int e){
    int mix[e - s];
    int i = s;
    int j = mid;
    int k = 0;

    while(i < mid && j < e){
        if(arr[i] < arr[j]){
            mix[k] = arr[i];
            i++;
        } else {
            mix[k] = arr[j];
            j++;
        }
        k++;
    }
    while(i < mid){
        mix[k] = arr[i];
        i++;
        k++;
    }
    while(j < e){
        mix[k] = arr[j];
        j++;
        k++;
    }

    for(i = 0; i < (e - s); i++){
        arr[s + i] = mix[i];
    }
}
void mergesort(int n, int arr[], int s, int e){
    if(e - s <= 1){
        return;
    }
    int mid = s + (e - s) / 2;

    mergesort(n, arr, s, mid);
    mergesort(n, arr, mid, e);

    merge(arr, s, mid, e);
}            

               //Insertion_sort
void insertion_sort(int n, int arr[n]){
	int i,j;
	for( i= 0;i < n-1;i++){
		for( j= i+1; j > 0;j--){
			if(arr[j] < arr[j-1]){
				swap(n,arr,j,j-1);//Function to swap the elements
			}else{
				break;
			}
		}
	}
}
