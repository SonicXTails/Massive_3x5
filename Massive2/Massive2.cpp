#include <iostream>

using namespace std;


int main() {

    setlocale(LC_ALL, "RUS");

    const int rows = 3;
    const int cols = 5;

    double arr[rows][cols];
    double rowSum[rows] = { 0.0 };

    // Ввод элементов массива
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
            rowSum[i] += arr[i][j];  // Суммируем элементы строки
        }
    }

    // Вычисление и вывод среднего арифметического элементов строк
    cout << "Среднее арифметическое элементов строк:" << endl;
    for (int i = 0; i < rows; i++) {
        double average = rowSum[i] / cols;
        cout << "Строка " << i << ": " << average << endl;
    }

    return 0;
}