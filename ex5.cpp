#include <iostream>
#include <cmath>

bool isEven(int num) {
    return num % 2 == 0;
}

bool isOdd(int num) {
    return num % 2 != 0;
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i <= std::sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

void filterArray(int* arr, int size, bool (*filter)(int)) {
    std::cout << "Filtered array: ";
    for (int i = 0; i < size; i++) {
        if (filter(arr[i])) {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    const int size = 10;
    int arr[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    std::cout << "Array of numbers: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Even numbers: ";
    filterArray(arr, size, isEven);

    std::cout << "Odd numbers: ";
    filterArray(arr, size, isOdd);

    std::cout << "Prime numbers: ";
    filterArray(arr, size, isPrime);

    return 0;
}

