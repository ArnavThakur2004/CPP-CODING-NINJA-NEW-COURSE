#include <iostream>

void printFactors(int number) {
   
    int count = 0;
    
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            std::cout << i << " ";
            count++;
        }
    }
    
    std::cout << std::endl;
    
    if (count == 0) {
        std::cout << "-1" << std::endl;
    }
}

int main() {
    int N;
  
    std::cin >> N;
    
    printFactors(N);
    
    return 0;
}
