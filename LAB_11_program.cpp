#include <iostream>
using namespace std;

int main() {

    system("chcp 1251 > nul"); //підключення української мови

    // 1. Оголошення трьох покажчиків на цілий тип
    int* ptr1;
    int* ptr2;
    int* ptr3;

    // 2. Виділення динамічної пам'яті
    ptr1 = new int;
    ptr2 = new int;
    ptr3 = new int;

    // 3. Присвоєння довільних значень
    *ptr1 = 10;
    *ptr2 = 20;
    *ptr3 = 30;

    cout << "До обміну:" << endl;
    cout << "ptr1 = " << *ptr1 << endl;
    cout << "ptr2 = " << *ptr2 << endl;

    // 4. Обмін значеннями перших двох змінних
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    cout << "\nПісля обміну:" << endl;
    cout << "ptr1 = " << *ptr1 << endl;
    cout << "ptr2 = " << *ptr2 << endl;

    // Звільнення пам'яті
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}
