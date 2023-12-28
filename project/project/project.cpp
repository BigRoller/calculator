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
  setlocale(LC_CTYPE, "Ru");
  //
  while (true) {
    int choice; // Переменная для хранения выбора пользователя
    cout << "Выберите одну из следующих функций:\n";
    cout << "1. Калькулятор\n";
    cout << "2. Посмотреть расписание\n";
    cout << "3. Преобразование двухзначных чисел в слова\n";
    cout << "4. Перевод введенного символа в код Windows-1251\n";
    cout << "5. Перевод чисел из 10 в 2 систему счисления\n";
    cout << "6. Выход\n";
    cout << "Введите номер функции: ";
    cin >> choice; // Считываем выбор пользователя
    switch (choice) { // В зависимости от выбора пользователя, вызываем соответствующую функцию
    case 1: {
      calculate(choice); // Калькулятор
      break;
    }
    case 2: { // Показать расписание
      seeSchedule();
      break;
    }
    case 3: {// Преобразование двухзначных чисел в слова
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
    case 4: {
      convertSymbol(); // Перевод введенного символа в код Windows-1251
      break;
    }
    case 5: { // Перевод чисел из 10 в 2 систему счисления
      int num;
      cout << "\nВведите число в десятичной системе счисления: ";
      cin >> num;
      cout << "\nЧисло в двоичной системе счисления: " << translateDecimalToBinary(num) << "\n\n"; // Выводим число в двоичной системе счисления
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
