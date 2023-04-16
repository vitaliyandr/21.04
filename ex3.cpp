#include <iostream>
#include <Windows.h>

// Функція для конвертації температури з Цельсія в Фаренгейти
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

// Функція для конвертації температури з Фаренгейтів в Цельсії
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Функція для виведення результату конвертації
void printConvertedTemperature(double temperature, double (*conversionFunc)(double)) {
    std::cout << "Converted temperature: " << conversionFunc(temperature) << std::endl;
}

int main() {
    double temperature;
    char choice;
    std::cout << "Enter the temperature: ";
    std::cin >> temperature;
    std::cout << "Select the conversion type:\n";
    std::cout << "1. From Celsius to Fahrenheit\n";
    std::cout << "2. From Fahrenheit to Celsius\n";
    std::cout << "Your choice: ";
    std::cin >> choice;

    // Вибір функції конвертації залежно від вибору користувача
    switch (choice) {
    case '1':
        printConvertedTemperature(temperature, celsiusToFahrenheit);
        break;
    case '2':
        printConvertedTemperature(temperature, fahrenheitToCelsius);
        break;
    default:
        std::cout << "Incorrect selection. Enter 1 or 2." << std::endl;
    }

    return 0;
}
