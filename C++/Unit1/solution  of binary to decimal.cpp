#include <iostream>

int main() {
    long long binary;
    int decimal = 0, base = 1, remainder;
    std::cin >> binary;

    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }

    std::cout << "Decimal: " << decimal << std::endl;

    return 0;
}