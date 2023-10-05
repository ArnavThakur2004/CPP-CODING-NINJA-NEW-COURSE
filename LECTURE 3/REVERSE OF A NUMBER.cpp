#include <iostream>
using namespace std;

int reverseNumber(int number) {
    int reverse = 0;
    while (number > 0) {
        int remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }
    return reverse;
}

int main() {
    int N;
    
    cin >> N;
    
    int reversedNumber = reverseNumber(N);
    
    cout  << reversedNumber << endl;
    
    return 0;
}
