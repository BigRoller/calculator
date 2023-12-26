#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
#include <limits>
#include "translate_win1251_to_utf8.h"
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
    int choice; // Переменная для хранения выбора пользователя
    cout << "Выберите одну из следующих функций:\n";
    cout << "1. Калькулятор\n";
    cout << "2. Перевод строки из win1251 в utf-8\n";
    cout << "3. Преобразование двухзначных чисел в слова\n";
    cout << "4. Текущее время в разных городах\n";
    cout << "5. Перевод чисел из 10 в 2 систему счисления\n";
    cout << "6. Выход\n";
    cout << "Введите номер функции: ";
    cin >> choice; // Считываем выбор пользователя
    switch (choice) { // В зависимости от выбора пользователя, вызываем соответствующую функцию
    case 1: { 
      calculate(choice); // Калькулятор
      break;
    }
    case 2: { // Перевод строки из win1251 в utf-8
      string str; // Переменная для хранения строки
      cout << "Введите строку в кодировке win1251: ";
      cin >> str; // Считываем строку
      cout << "\nСтрока в кодировке utf-8: " << translate_win1251_to_utf8(str) << "\n\n"; // Выводим строку в кодировке utf-8
      break;
    }
    case 3: {// Преобразование двухзначных чисел в слова
      int num; // Переменная для хранения числа
      cout << "Введите двухзначное число: ";
      cin >> num; // Считываем число
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
      cin >> num; // Считываем число
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
    if (std::cin.fail()) // если предыдущее извлечение оказалось неудачным,
    {
      std::cin.clear(); // то возвращаем cin в 'обычный' режим работы
      std::cin.ignore(32767, '\n'); // и удаляем значения предыдущего ввода из входного буфера
    }
  }
}