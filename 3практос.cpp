#include <iostream>

const int ROWS = 3;
const int COLS = 5;

void massiv(double arr[ROWS][COLS]) {
    std::cout << "Введите элементы массива:\n";
    for (int i = 0; i < ROWS; ++i) {
        std::cout << "Строка " << i + 1 << ":\n";
        for (int j = 0; j < COLS; ++j) {
            std::cout << "Элемент " << j + 1 << ": ";
            std::cin >> arr[i][j];
        }
    }
}

double avg(double row[COLS]) {
    double sum = 0.0;
    for (int i = 0; i < COLS; ++i) {
        sum += row[i];
    }
    return sum / COLS;
}

int main() {
    double arr[ROWS][COLS];

    massiv(arr);

    double averages[ROWS];
    for (int i = 0; i < ROWS; ++i) {
        averages[i] = avg(arr[i]);
    }
    std::cout << "Средние арифметические элементов строк:\n";
    for (int i = 0; i < ROWS; ++i) {
        std::cout << "Строка " << i + 1 << ": " << averages[i] << std::endl;
    }

    return 0;
}
