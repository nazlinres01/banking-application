#include <stdio.h>

// Function to display the welcome screen
void welcome() {
    printf("\nWelcome to the Simple Banking Application\n");
    printf("Please choose an option from the menu below:\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
}

// Function to check the balance
void check_balance() {
    float balance = 1000.0;
    printf("\nYour current balance is: %.2f\n", balance);
}

// Function to deposit money
void deposit() {
    float amount;
    printf("\nEnter the amount you want to deposit: ");
    scanf("%f", &amount);

    float balance = 1000.0;
    balance += amount;

    printf("\nYour updated balance is: %.2f\n", balance);
}

// Function to withdraw money
void withdraw() {
    float amount;
    printf("\nEnter the amount you want to withdraw: ");
    scanf("%f", &amount);

    float balance = 1000.0;
    if (amount > balance) {
        printf("\nInsufficient balance. Please try again.\n");
    } else {
        balance -= amount;
        printf("\nYour updated balance is: %.2f\n", balance);
    }
}

// Function to exit the application
void exit_app() {
    printf("\nThank you for using the Simple Banking Application. Goodbye!\n");
}

int main() {
    int choice;
    do {
        welcome();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                check_balance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                exit_app();
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}