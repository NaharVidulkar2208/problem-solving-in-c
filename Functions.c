#include<stdio.h>

            //CONTENTS
            
//  Helper Functions
int power(int base,int expo);
int fact(int n);
int check(int num);
int reverse(int num, int rev);
int sum(int num);

//  Other Functions
void palindrome(int num);
void palindrome_array(int num);
void palindrome_recursion(int num);
void armstrong(int n);
void strong(int n);
void sum_of_digits_recursion(int num);

int main(){
	
	return 0;
}


      //Palindrome Number
void palindrome(int num){
	int original = num, reversed = 0,new_num;
	
	while(num != 0){
		new_num = num % 10;
		num /= 10;
		reversed = reversed*10 + new_num;
	}
	if(original == reversed){
		printf("Is palindrome");
	}else{
		printf("Is not palindrome");
	}
}

      //Palindrome Number using Array
void palindrome_array(int num){
    int count = 0;
    counting digits
    int n = num;
    while(n > 0){
    	n /= 10;
    	count++;
	}	
	int arr[count];
	int start = 0, end = count - 1, i;
	Making of array
    for(i = 0; i < count; i++){
        arr[i] = num % 10;
        num /= 10;
    }
    Checking Palindrome
    while(start < end){
        if(arr[start] != arr[end]){
            printf("is not palindrome");
            return;
        }
        start++;
        end--;
    }
    printf("is palindrome");
}

      //Palindrome Number using recursion
int reverse(int num, int rev) {
    if(num == 0){
        return rev;
	}
    return reverse(num / 10, rev * 10 + num % 10);
}

void palindrome_recursion(int num){
	int rev = reverse(num,0);
	if(num == rev){
		printf("is palindrome");
	}else{
		printf("is not palindrome");
	}
}

      //Armstrong Number
int power(int base,int expo){
	int result = 1;
	if(expo == 0){
		return result;
	}
	while(expo > 0){
		result *= base;
		expo--;
	}
	return result;
}
void armstrong(int n){
	int i, num, ans, digit, count;
    for(i = 1; i <= n; i++){
        num = i;
        count = 0;

        while(num > 0){
            num /= 10;
            count++;
        }
        num = i;
        ans = 0;

        while(num > 0){
            digit = num % 10;
            ans += power(digit, count);
            num /= 10;
        }
        if(ans == i){
            printf("\t%d\n", i);
        }
    }
}

//      Strong Number
void fact(int n){
	int i,ans=1;
	if(n < 1){
		return ans;
	}
	for(i=1;i<=n;i++){
		ans *= i;
	}
	return ans;
}
int strong(int n){
	int i, num, ans, digit;
    for(i = 1; i <= n; i++){
        num = i;
        ans = 0;

        while(num > 0){
            digit = num % 10;
            num /= 10;
            
            ans += fact(digit);
        }
        if(ans == i){
            printf("\t%d\n", i);
        }
	
	}
}

         Sum of Digits Recursion
int sum(int num){
	if(num < 1){
		return 0;
	}
	int val = num % 10;
	return val + sum(num/10);
}
void sum_of_digits_recursion(int num){
	int value = sum(num);
	printf("Sum of %d is %d",num,value);
}
