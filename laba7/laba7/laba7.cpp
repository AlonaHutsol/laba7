#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    ifstream inputFile("number.txt");

    if (!inputFile) {
        cerr << "Не вдалося відкрити файл для читання." << endl;
        return 1;
    }

    double number;
    double dob = 1;

    while (inputFile >> number) {
        if ((int)number % 4 == 0) {   
            dob *= number;
        }
    }

    inputFile.close();

    if (dob == 1)
        cout << "В файлі не було чисел, кратних 4." << endl;
    else
        cout << "Добуток чисел, кратних 4 у файлі: " << dob << endl;

    return 0;
}