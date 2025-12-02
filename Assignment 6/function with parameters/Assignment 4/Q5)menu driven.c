#include <stdio.h>
//declaration
void evenodd(int);
void prime(int);
void palindrome(int);
void positive_negative_zero(int);
void rev_no(int);
void sum_digit(int);
void main()
 {
 	int num;
	printf("\nEnter a number ::\n ");
    scanf("%d", &num);
 	evenodd(num);
 	prime(num);
 	
	 palindrome(num);
	 positive_negative_zero(num);
	 rev_no(num);
	 sum_digit(num);//call
 }//main end
void evenodd(int num)//defi
{
    if(num%2==0)
		printf("Even number\n");
		else
		printf("Odd number\n");
		
	
}
void prime(int num)
{
	int flag=0,i;		 
		for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Result: %d is a Prime number\n", num);
    else
        printf("Result: %d is not a Prime number\n", num);
		
}
void palindrome(int num)
{
	int original_no,rev_no,remainder;
		 original_no = num;
			while (num != 0) {
				remainder = num % 10;
				rev_no = rev_no * 10 + remainder;
				num /= 10;
			}

			if (original_no == rev_no) {
				printf("%d is a palindrome.\n", original_no);
			} else {
				printf("%d is not a palindrome.\n", original_no);
			}

		
}
void positive_negative_zero(int num)
{
		 
			if (num > 0)
				printf("%d is a Positive number\n",num);
			else if (num < 0)
				printf("%d is a negative number\n",num);
			else
				printf("%d is a zero number\n",num);
		
}
void rev_no(int num)
{
	int rev = 0, rem, r1,temp;
			 temp = num; 

			for (temp; temp >= 1; temp = temp / 10) {
				rem = temp % 10;
				rev = rev * 10 + rem;
			}

			printf("Reversed number: %d\n", rev);
		
}
void sum_digit(int num)
{
	int sum = 0, digit;
    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }

    printf("Result: Sum of digits is %d\n", sum);
	
}//defination end





