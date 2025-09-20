#include <stdio.h>

int main() {
    int amount, max_limit = 500;

    printf("Enter the amount to withdraw: ");
    scanf("%d", &amount);

    if (amount <= max_limit && amount % 20 == 0 && amount > 0) {
        printf("Withdrawal approved.\n");
    } else {
        printf("Withdrawal denied.\n");
        if (amount > max_limit) {
            printf("Reason: Exceeds the maximum withdrawal limit of $%d.\n", max_limit);
        } else if (amount % 20 != 0) {
            printf("Reason: Amount must be a multiple of $20.\n");
        } else {
            printf("Reason: Invalid amount.\n");
        }
    }

    return 0;
}

