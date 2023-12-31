/*      Лабораторна робота № 4 . Виконала Рацебарська Альона, ст.гр. АКТСІз-23-1
                                ОПЕРАТОРИ ЦИКЛІВ МОВИ C

                                        Варіант 2

    1.Знайти за допомогою while f(x) = kx + b, x =1,2,...100 (Оператор while та for)

    2.Написати програму введення довільних символів до тих пір,
    поки не буде введений символ q (Оператор do while)

*/

#include <iostream>
using namespace std;

int main() {
    double k, b;
    cout << "Введіть k: ";
    cin >> k;
    cout << "Введіть b: ";
    cin >> b;

    // 1. Знаходження f(x) = kx + b
    // Використання оператора while
    cout << "1 Part. While Loop" << endl;
    int x = 1;
    while (x <= 100) {
        double f_x = k * x + b;
        // Доп перевірка яка робить перенос на нову строку після 10 ітерацій (для зручності зчитування інформ.
        if (x % 10 == 0) {
            cout << "f(" << x << ") = " << f_x << endl;
            // Доп перевірка задля пропуску рядка при завершенні циклу (зручність зчитування в консолі
            if (x == 100) {
                cout << "\n";
            }
        } else {
            cout << "f(" << x << ") = " << f_x << "; ";
        }
        x++;
    }

    // Альтернативний варіант за допомогою оператора for
    cout << "1 Part. For-Loop" << endl;
    for (int x = 1; x <= 100; x++) {
        double f_x = k * x + b;
        if (x % 10 == 0) {
            cout << "f(" << x << ") = " << f_x << endl;
            if (x == 100) {
                cout << "\n";
            }
        } else {
            cout << "f(" << x << ") = " << f_x << "; ";
        }
    }

    // 2. Введення символів до 'q' (оператор do while)
    cout << "2 Part. Do While Loop" << endl;
    char ch;
    do {
        cout << "Введіть символ (введіть 'q' для виходу): ";
        cin >> ch;
    } while (ch != 'q');

    cout << "Введено символ 'q', програма завершується." << endl;

    return 0;
}
