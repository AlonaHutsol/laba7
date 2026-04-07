#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;

const int rows = 5;
const int cols = 5;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ifstream inFile("2D.txt");

    if (!inFile) {
        cerr << "Не вдалося відкрити файл для читання." << endl;
        return 1;
    }

    int matrix[rows][cols];

    // Зчитування з файлу
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            inFile >> matrix[i][j];
        }
    }

    inFile.close();

    cout << "Матриця:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Пошук мінімального елемента головної діагоналі
    int min = matrix[0][0];

    for (int i = 0; i < rows; i++) {
        if (matrix[i][i] < min) {
            min = matrix[i][i];
        }
    }

    cout << "Мінімальний елемент головної діагоналі: " << min << endl;

    return 0;
}