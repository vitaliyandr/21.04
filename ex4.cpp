#include <iostream>
#include <Windows.h>

// Функція для додавання елементів двох масивів
void addArrays(int* arr1, int* arr2, int size) {
    for (int i = 0; i < size; i++) {
        arr1[i] += arr2[i];
    }
}

// Функція для віднімання елементів другого масиву від елементів першого масиву
void subtractArrays(int* arr1, int* arr2, int size) {
    for (int i = 0; i < size; i++) {
        arr1[i] -= arr2[i];
    }
}

// Функція для множення елементів двох масивів
void multiplyArrays(int* arr1, int* arr2, int size) {
    for (int i = 0; i < size; i++) {
        arr1[i] *= arr2[i];
    }
}

// Функція для виведення масиву на екран
void printArray(int* arr, int size) {
    std::cout << "Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int size;
    std::cout << "Enter the size of the arrays: ";
    std::cin >> size;

    int* arr1 = new int[size];
    int* arr2 = new int[size];

    std::cout << "Enter the elements of the first array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr1[i];
    }

    std::cout << "Enter the elements of the second array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr2[i];
    }

    char choice;
    std::cout << "Select the operation:\n";
    std::cout << "1. Adding arrays";
    std::cout << "2. Subtracting arrays";
    std::cout << "3. Multiplication of arrays";
    std::cout << "Your choice: ";
    std::cin >> choice;

    // Вибір функції-операції залежно від вибору користувача
    switch (choice) {
    case '1':
        addArrays(arr1, arr2, size);
        printArray(arr1, size);
        break;
    case '2':
        subtractArrays(arr1, arr2, size);
        printArray(arr1, size);
        break;
    case '3':
        multiplyArrays(arr1, arr2, size);
        printArray(arr1, size);
        break;
    default:
        std::cout << "Wrong choice of operation!" << std::endl;
        break;
    }
    // Звільнення пам'яті, виділеної під масиви
    delete[] arr1;
    delete[] arr2;

    return 0;
}
