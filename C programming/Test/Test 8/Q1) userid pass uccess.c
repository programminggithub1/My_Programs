#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userid, password;
    int correct_userid = 101;
    int correct_password = 1234;

    printf("Enter User ID: ");
    scanf("%d", &userid);

    printf("Enter Password: ");
    scanf("%d", &password);

    if (userid == correct_userid && password == correct_password) {
        srand(time(0)); 
        int otp = (rand() % 9000) + 1000;  
        int entered;

        printf("\nYour number is: %d\n", otp);

        printf("Enter the number: ");
        scanf("%d", &entered);

        if (entered == otp) {
            printf("\nSuccess ✅\n");
        } else {
            printf("\nFailed ❌\n");
        }
    } else {
        printf("\nInvalid User ID or Password ❌\n");
    }

}
