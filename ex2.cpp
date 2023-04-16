#include <iostream>

// Функція множення на число
int multiply(int num1, int num2) {
    return num1 * num2;
}

// Функція для виведення таблиці множення на задане число
void printMultiplicationTable(int num, int (*multiplyFunc)(int, int)) {
    std::cout << "Table of multiplication by " << num << ":\n";
    for (int i = 1; i <= 10; i++) {
        std::cout << num << " * " << i << " = " << multiplyFunc(num, i) << std::endl;
    }
}

int main() {
    int num;
    std::cout << "Enter a number to calculate the multiplication table: ";
    std::cin >> num;

    // Виклик функції для виведення таблиці множення з використанням вказівника на функцію
    printMultiplicationTable(num, multiply);

    return 0;
}