/*        Лабораторна робота № 1 . Виконала Рацебарська Альона, ст.гр. АКТСІз-23-1
                       ПРОГРАМУВАННЯ АРИФМЕТИЧНИХ ОПЕРАЦІЙ

                                          Варіант 2

   Розрахувати: 1. Площа прямокутника 2. Довжину кола (Тип змінних: дійсний цілочисельний)
*/

#include <iostream>
using namespace std;

int main() {
   // 1
   double length, width;

   cout << "Введіть довжину прямокутника: ";
   cin >> length;
   cout << "Введіть ширину прямокутника: ";
   cin >> width;

   double area = length * width;
   cout << "Площа прямокутника: " << area << endl;

   // 2
   const double PI = 3.14159;
   double radius;

   cout << "Введіть радіус кола: ";
   cin >> radius;

   double circumference = 2 * PI * radius;
   cout << "Довжина кола: " << circumference << endl;

   return 0;
}