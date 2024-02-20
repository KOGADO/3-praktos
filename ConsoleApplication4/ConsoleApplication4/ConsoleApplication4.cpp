// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <Windows.h>
#include <iostream>
using namespace std;

int main() {
    SetConsoleCP(1251);
    setlocale(LC_ALL, "");
    float arr[3][5];
    float row_sum, row_avg;

    // Input the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Введите элемент [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Calculate the average of each row
    for (int i = 0; i < 3; i++) {
        row_sum = 0;
        for (int j = 0; j < 5; j++) {
            row_sum += arr[i][j];
        }
        row_avg = row_sum / 5;
        cout << "Среднее значение " << i << " is " << row_avg << endl;
    }

    return 0;
}