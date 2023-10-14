#include <stdio.h>
#include <string.h>  // Include string.h for string comparison

int main() {
    double withdrawamt;
    double depositamt;
    double newtotal;
    double total = 0;
    char greeting[10];  // Changed to char array for storing the user input

    printf("----- 💸 ONLINE BANK 💸 ------\n");
    printf("Total balance: %f\n", total);
    printf("Would you like to [deposit] or [withdraw]? ");

    // Use %s to read a string (character array)
    scanf("%s", greeting);

    // Use strcmp to compare strings
    if (strcmp(greeting, "deposit") == 0) {  // Compare user input with "deposit"
        printf("How much would you like to deposit? ");
        // Use %lf to read a double
        scanf("%lf", &depositamt);

        // Update the total after deposit
        newtotal = total + depositamt;
        printf("New total balance: %f\n", newtotal);
    }
    else if (strcmp(greeting, "withdraw") == 0) {
        printf("How much would you like to withdraw? ");
        scanf("%lf", &withdrawamt);
        newtotal = total - withdrawamt;
        printf("New total balance: %f\n", newtotal);
    }
    else {
        printf("error");
    }
    
printf("Have a nice dayツ");
    return 0;
}