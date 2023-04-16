#include <iostream>

//Функція для сортування масиву у порядку зростання
void sortAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//Функція для сортування масиву у порядку спадання
void sortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//Функція, яка приймає вказівник на функцію сортування, масив та його розмір
void performSorting(void (*sortFunction)(int[], int), int arr[], int size) {
    sortFunction(arr, size);
}

int main() {
    int arr[] = { 5, 2, 8, 1, 9, 3 };
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    //Виклик функції для сортування масиву у порядку зростання
    performSorting(sortAscending, arr, size);

    std::cout << "\nArray sorted in ascending order: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    //Виклик функції для сортування масиву у порядку спадання
    performSorting(sortDescending, arr, size);

    std::cout << "\nArray sorted in descending order: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
