#include <stdio.h>
#include <string.h>

int main() {
    char num[100];
    int oddSum = 0, evenSum = 0;

    printf("Enter a number: ");
    scanf("%s", num);

    for (int i = 0; i < strlen(num); i++) {
        int digit = num[i] - '0';

        if (i % 2 == 0)
            oddSum += digit;
        else
            evenSum += digit;
    }

    if (abs(oddSum - evenSum) % 11 == 0)
        printf("%s is divisible by 11", num);
    else
        printf("%s is not divisible by 11", num);

    return 0;
}
