#include <stdio.h>
//declaration
void evenodd();
void prime();
void palindrome();
void positive_negative_zero();
void rev_no();
void sum_digit();
void main()
 {
 	evenodd();
 	prime();
 	
	 palindrome();
	 positive_negative_zero();
	 rev_no();
	 sum_digit();//call
 }//main end
void evenodd()//defi
{
	int num;
	printf("\nEnter a number to check Even or Odd: ");
    scanf("%d", &num);
    if(num%2==0)
		printf("Even number\n");
		else
		printf("Odd number\n");
		
	
}
void prime()
{
	int num,flag=0,i;
	printf("\nEnter a number to check prime or not: ");
    scanf("%d", &num);
		 
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
void palindrome()
{
	int num, original_no,rev_no,remainder;
			
	printf("\nEnter a number to check Palindrome: ");
    scanf("%d", &num);
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
void positive_negative_zero()
{
	int num;
	printf("\nEnter a number to check Positive/Negative/Zero: ");
    scanf("%d", &num);
		 
			if (num > 0)
				printf("%d is a Positive number\n",num);
			else if (num < 0)
				printf("%d is a negative number\n",num);
			else
				printf("%d is a zero number\n",num);
		
}
void rev_no()
{
	int num,rev = 0, rem, r1,temp;
	printf("\nEnter a number to Reverse: ");
    scanf("%d", &num);
		 
			 temp = num; 

			for (temp; temp >= 1; temp = temp / 10) {
				rem = temp % 10;
				rev = rev * 10 + rem;
			}

			printf("Reversed number: %d\n", rev);
		
}
void sum_digit()
{
	int num, sum = 0, digit;
    printf("\nEnter a number to find Sum of Digits: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }

    printf("Result: Sum of digits is %d\n", sum);
	
}//defination end





