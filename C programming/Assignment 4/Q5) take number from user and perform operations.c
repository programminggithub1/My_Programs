#include <stdio.h>

void main() {
	int num, choice, i;

	while (1) {
		printf("Enter a number: ");
		scanf("%d", &num);

		printf("\nMENU:\n");
		printf("1. Check Even or Odd\n");
		printf("2. Check Prime or Not\n");
		printf("3. Check Palindrome or Not\n");
		printf("4. Check Positive, Negative or Zero\n");
		printf("5. Reverse the Number\n");
		printf("6. Sum of Digits\n");
		printf("0. Exit\n");

		int choice;
		printf("Enter your choice: ");
		scanf("%d", &choice);

		if (choice == 1) {
			if (num % 2 == 0)
				printf("Even number\n");
			else
				printf("Odd number\n");
		}

		else if (choice == 2) {
			int flag,i;
			while (i<num/2) {
				if(num%i==0) {
					flag=1;
					break;
				}
				i++;
			}
			if(flag == 0) {
				printf("%d is prime",num);
			} else {
				printf("%d is not prime",num);

			}
		}

		else if (choice == 3) {
			int original_no = num;
			int rev_no = 0;
			int remainder;


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

		else if (choice == 4) {
			if (num > 0)
				printf("Positive number\n");
			else if (num < 0)
				printf("Negative number\n");
			else
				printf("Zero\n");
		}

		else if (choice == 5) {
			int temp = num, rev = 0, rem, r1;

			for (temp; temp >= 1; temp = temp / 10) {
				rem = temp % 10;
				rev = rev * 10 + rem;
			}

			printf("Reversed number: %d\n", rev);
		}
	

	else if (choice == 6) {
		int r1,sum=0;
		int temp=num;
		for( temp; temp>0; sum=sum+r1) {
			r1=temp%10;

			temp=temp/10;
		}
		printf("sum is:: %d",sum);
	}

	else if (choice == 0) {
		printf("Exiting...\n");
		break;
	}

	else {
		printf("Invalid choice. Try again.\n");
	}

	printf("\n-------------------------\n");
}


}
