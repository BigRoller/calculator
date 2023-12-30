#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
#include <limits>
#include "see_schedule.h"
#include "write_num_to_words.h"
#include "translate_decimal_to_binary.h"
#include "calculate.h"
#include"converting_symbol_to_win1251.h"

using namespace std;

int main() {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  while (true) {
    char choice; // Переменная для хранения выбора пользователя
    cout << "Выберите одну из следующих функций:\n1. Калькулятор\n2. Посмотреть расписание\n3. Преобразование двухзначных чисел в слова\n4. Перевод введенного символа в код Windows-1251\n5. Перевод чисел из 10 в 2 систему счисления\n6. Выход\n";
    cout << "Введите номер функции: ";
    cin >> choice; // Считываем выбор пользователя
    switch (choice) { // В зависимости от выбора пользователя, вызываем соответствующую функцию
    case '1': {
      calculate(); // Калькулятор
      break;
    }
    case '2': { // Показать расписание
      seeSchedule();
      break;
    }
    case '3': {// Преобразование двухзначных чисел в слова
      int num;
      cout << "\nВведите двухзначное число: ";
      cin >> num;
      if (num >= 10 && num <= 99) {
        cout << "Число в словах: " << writeNumToWords(num) << "\n\n"; // Выводим число в словах
      }
      else {
        cout << "\nНекорректный ввод\n\n";
      }
      break;
    }
    case '4': {
      convertSymbol(); // Перевод введенного символа в код Windows-1251
      break;
    }
    case '5': { // Перевод чисел из 10 в 2 систему счисления
      int num;
      cout << "\nВведите число в десятичной системе счисления: ";
      cin >> num;
      cout << "\nЧисло в двоичной системе счисления: " << translateDecimalToBinary(num) << "\n\n"; // Выводим число в двоичной системе счисления
      break;
    }
    case '6': {
      return 0;
    }
    default: // Если выбор пользователя не в диапазоне от 1 до 5, выводим сообщение об ошибке
      cout << "\nОшибка: неверный номер функции\n\n";
      break;
    }
    if (cin.fail())
    {
      cin.clear();
      cin.ignore(32767, '\n'); // Отчистка буфера ввода cin при неправильном вводе
    }
  }
}
