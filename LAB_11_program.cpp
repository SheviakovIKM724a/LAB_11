#include <iostream>
using namespace std;

int main() {

    system("chcp 1251 > nul"); //підключення української мови

    int n;
    cout << "Введіть розмір масиву: ";
    cin >> n;

    // Створення динамічного масиву
    int* a = new int[n];

    // Введення елементів масиву
    cout << "Введіть елементи масиву:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Пошук останнього від'ємного елемента
    int lastNegativeIndex = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            lastNegativeIndex = i;
        }
    }

    // Перестановка з першим елементом
    if (lastNegativeIndex != -1) {
        int temp = a[0];
        a[0] = a[lastNegativeIndex];
        a[lastNegativeIndex] = temp;
    }

    // Пошук кількості та суми додатних елементів
    int positiveCount = 0;
    int positiveSum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            positiveCount++;
            positiveSum += a[i];
        }
    }

    // Виведення результатів
    cout << "Масив після перестановки:\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";

    if (lastNegativeIndex != -1) {
        cout << "Номер останнього від’ємного елемента: " << lastNegativeIndex << endl;
    }
    else {
        cout << "В масиві немає від’ємних елементів.\n";
    }

    cout << "Кількість додатних елементів: " << positiveCount << endl;
    cout << "Сума додатних елементів: " << positiveSum << endl;

    // Звільнення пам'яті
    delete[] a;

    return 0;
}
