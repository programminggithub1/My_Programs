#include <stdio.h>
void palindrome();//ddeclaration
void main() 
{
	 palindrome();//call
}//main end
void palindrome()//defi
{

    int n = 121; 
    int original_no = n; 
    int rev_no = 0;
    int remainder;

    
    while (n != 0) {
        remainder = n % 10; 
        rev_no = rev_no * 10 + remainder; 
        n /= 10; 
    }

    if (original_no == rev_no) {
        printf("%d is a palindrome.\n", original_no);
    } else {
        printf("%d is not a palindrome.\n", original_no);
    }

   
}//defination end