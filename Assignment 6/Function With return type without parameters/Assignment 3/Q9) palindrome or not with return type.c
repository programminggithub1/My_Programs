#include <stdio.h>
int palindrome();//ddeclaration
void main() 
{
	 if(palindrome())//call
	 printf("palindrome");
	 else
	 printf("not palindrome");
}//main end
int palindrome()//defi
{

    int n;
	printf("Enter a number\n");
	scanf("%d",&n); 
    int original_no = n; 
    int rev_no = 0;
    int remainder;

    
    while (n != 0) {
        remainder = n % 10; 
        rev_no = rev_no * 10 + remainder; 
        n /= 10; 
    }

    return original_no == rev_no;
        
   
}//defination end