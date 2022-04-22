#include <iostream>
#include <cmath>

bool isPrime(int number) {
    if (number == 2) return true;
    if (number <= 1 || number % 2 == 0) return false;
    for (int i = 3; i <= floor(sqrt(number)); i += 2) {
        if (number % i == 0) return false;
    }
    return true;
}

int values[] = {};

int main() {
    int startVal, endVal;
    std::cout << "start >";
    std::cin >> startVal;
    std::cout << "end >";
    std::cin >> endVal;
    std::cout << "generating..." << std::endl;
    int index = 0;
    for (int i = startVal; i <= endVal; i++) {
        if (!isPrime(i)) continue;
        values[index++] = i;
    }
    std::string output;
    for (int i = 0; i < index; i++) {
        output += values[index];
    }
    std::cout << output << std::endl;
    system("pause");
    return 0;
}
