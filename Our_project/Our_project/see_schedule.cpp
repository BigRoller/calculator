#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
#include <limits>
#include "see_schedule.h"
#include "write_num_to_words.h"
#include "trancelate_decimal_to_binary.h"
#include "calculate.h"
#include "show_time.h"

using namespace std;


int main() {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  setlocale(LC_CTYPE, "Ru");

  while (true) {
    int choice; 
    cout << "Выберите одну из следующих функций:\n";
    cout << "1. Калькулятор\n";
    cout << "2. Посмотреть расписание\n";
    cout << "3. Преобразование двухзначных чисел в слова\n";
    cout << "4. Текущее время в разных городах\n";
    cout << "5. Перевод чисел из 10 в 2 систему счисления\n";
    cout << "6. Выход\n";
    cout << "Введите номер функции: ";
    cin >> choice; 
    switch (choice) { 
    case 1: { 
      calculate(choice); // Калькулятор
      break;
    }
    case 2: { // Показать расписание
      see_schedule();
      break;
    }
    case 3: {// Преобразование двухзначных чисел в слова
      int num; 
      cout << "Введите двухзначное число: ";
      cin >> num; 
      if (num >= 10 && num <= 99) {
        cout << "\nЧисло в словах: " << write_num_to_words(num) << "\n\n"; // Выводим число в словах
      }
      else {
        cout << "\nНекорректный ввод\n\n";
      }
      break;
    }
    case 4: { 
      show_time(choice); // Текущее время в разных городах
      break;
    }
    case 5: { // Перевод чисел из 10 в 2 систему счисления
      int num;
      cout << "Введите число в десятичной системе счисления: ";
      cin >> num; 
      cout << "\nЧисло в двоичной системе счисления: " << trancelate_decimal_to_binary(num) << "\n\n"; // Выводим число в двоичной системе счисления
      break;
    }
    case 6: {
      return 0;
    }
    default: // Если выбор пользователя не в диапазоне от 1 до 5, выводим сообщение об ошибке
      cout << "\nОшибка: неверный номер функции\n\n";
      break;
    }
    if (cin.fail()) // если предыдущее извлечение оказалось неудачным,
    {
      cin.clear(); // то возвращаем cin в 'обычный' режим работы
      cin.ignore(32767, '\n'); // и удаляем значения предыдущего ввода из входного буфера
    }
  }
}
