#include <iostream>
using namespace std;

int main() {
    string num;
    int oddSum = 0, evenSum = 0;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 0; i < num.length(); i++) {
        int digit = num[i] - '0';

        if (i % 2 == 0)
            oddSum += digit;
        else
            evenSum += digit;
    }

    if (abs(oddSum - evenSum) % 11 == 0)
        cout << num << " is divisible by 11";
    else
        cout << num << " is not divisible by 11";

    return 0;
}
