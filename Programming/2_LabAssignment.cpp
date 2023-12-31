/*        Лабораторна робота № 2 . Виконала Рацебарська Альона, ст.гр. АКТСІз-23-1
                       ДИРЕКТИВИ ПРЕПРОЦЕСОРА І ФУНКЦІЇ PRINTF() І SCANF()

                                        Варіант 2

    1. Програмування директив препроцесора: За допомогою директив #if, #else, #elif здійснити вибір
       рядків програми для обчислення 2(a + b), або а*b.

    2. Програмування функцій printf() і scanf(): Ввести два цілочисельних значення
       і вивести їх приватно на екран монітора
*/

#include <iostream>
#include <cstdio> // Для використання printf і scanf

#define CALC_MODE 1 // Змініть на 0 або 1 для вибору різних частин коду

int main() {
   int a, b;

   // Введення значень a і b
   printf("Введіть два цілі числа:\n");
   scanf("%d %d", &a, &b);

   // Використання директив препроцесора для вибору операції
   #if CALC_MODE == 1
      int result = 2 * (a + b);
      printf("Результат виразу 2 * (a + b): %d\n", result);
   #else
      int result = a * b;
      printf("Результат виразу a * b: %d\n", result);
   #endif

   return 0;

}