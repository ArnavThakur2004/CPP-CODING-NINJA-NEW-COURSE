#include <iostream>
using namespace std;
int main() {
    int N;
   // cout << "Enter an integer: ";
    cin >> N;

    int evenSum = 0;
    int oddSum = 0;

    // Iterate through each digit of N
    while (N != 0) {
        int digit = N % 10;

        if (digit % 2 == 0) {
            evenSum += digit;
        } else {
            oddSum += digit;
        }

        N /= 10;
    }

   cout<<evenSum<<" "<<oddSum;

    return 0;
}
