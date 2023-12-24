/*
#include <iostream>
#include <cmath>

using namespace std;

double add(double a, double b) {
  return a + b;
}

double subtract(double a, double b) {
  return a - b;
}

double multiply(double a, double b) {
  return a * b;
}

double divide(double a, double b) {
  return a / b;
}

double power(double a, double b) {
  return pow(a, b);
}

double squareRoot(double a) {
  return sqrt(a);
}

double factorial(double a) {
  double result = 1;
  for (int i = 1; i <= a; i++) {
    result *= i;
  }
  return result;
}

double Sin(double a) {
  return sin(a);
}

int main() {
  setlocale(LC_CTYPE, "Ru");
  while (true) {
    cout << "Приложение калькулятор" << endl;
    cout << "Выберите операцию:" << endl;
    cout << "1. Сложение" << endl;
    cout << "2. Вычитание" << endl;
    cout << "3. Произведение" << endl;
    cout << "4. Деление" << endl;
    cout << "5. Возведение в степень" << endl;
    cout << "6. Квадратный корень" << endl;
    cout << "7. Факториал" << endl;
    cout << "8. Синус" << endl;
    cout << "9. Выход" << endl;

    int choice;
    cin >> choice;

    if (choice == 9) {
      return 0;
    }

    double num1, num2;

    double result;
    switch (choice) {
    case 1:
      cout << "Введите два числа:\n";
      cin >> num1 >> num2;
      result = add(num1, num2);
      cout << "Результат: " << result << endl;
      break;
    case 2:
      cout << "Введите два числа:\n";
      cin >> num1 >> num2;
      result = subtract(num1, num2);
      cout << "Результат: " << result << endl;
      break;
    case 3:
      cout << "Введите два числа:\n";
      cin >> num1 >> num2;
      result = multiply(num1, num2);
      cout << "Результат: " << result << endl;
      break;
    case 4:
      cout << "Введите два числа:\n";
      cin >> num1 >> num2;
      result = divide(num1, num2);
      cout << "Результат: " << result << endl;
      break;
    case 5:
      cout << "Введите два числа:\n";
      cin >> num1 >> num2;
      result = power(num1, num2);
      cout << "Результат: " << result << endl;
      break;
    case 6:
      cout << "Введите одно число:\n";
      cin >> num1;
      result = squareRoot(num1);
      cout << "Результат: " << result << endl;
      break;
    case 7:
      cout << "Введите одно число:\n";
      cin >> num1;
      result = factorial(num1);
      cout << "Результат: " << result << endl;
      break;
    case 8:
      cout << "Введите одно число:\n";
      cin >> num1;
      result = Sin(num1);
      cout << "Результат: " << result << endl;
      break;
    default:
      cout << "Некорректный ввод." << endl;
    }
  }
}
*/
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// Функция для перевода строки из win1251 в utf-8
string win1251_to_utf8(string str) {
  string result;
  for (char c : str) {
    if (c >= 0xC0 && c <= 0xFF) { // Если символ в диапазоне win1251
      result += char(0xD0 + (c > 0xDF)); // Добавляем первый байт utf-8
      result += char(0x90 + (c & 0x3F) - (c > 0xDF) * 0x30); // Добавляем второй байт utf-8
    }
    else {
      result += c; // Иначе оставляем символ без изменений
    }
  }
  return result;
}

// Функция для преобразования двухзначных чисел в слова
string num_to_word(int num) {
  string result;
  if (num < 10 || num > 99) { // Если число не двухзначное, возвращаем пустую строку
    return result;
  }
  string ones[] = { "", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять" };
  string teens[] = { "десять", "одиннадцать", "двенадцать", "тринадцать", "четырнадцать", "пятнадцать", "шестнадцать", "семнадцать", "восемнадцать", "девятнадцать" };
  string tens[] = { "", "", "двадцать", "тридцать", "сорок", "пятьдесят", "шестьдесят", "семьдесят", "восемьдесят", "девяносто" };
  if (num >= 10 && num <= 19) { // Если число в диапазоне от 10 до 19, используем массив teens
    result = teens[num - 10];
  }
  else { // Иначе используем массивы tens и ones
    result = tens[num / 10] + " " + ones[num % 10];
  }
  return result;
}

// Функция для перевода чисел из 10 в 2 систему счисления
string dec_to_bin(int num) {
  string result;
  while (num > 0) { // Пока число не равно нулю, делим его на 2 и добавляем остаток к результату
    result = char('0' + num % 2) + result;
    num /= 2;
  }
  return result;
}

int main() {
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
    case 1: { // Калькулятор
      double a, b; // Переменные для хранения операндов
      char op; // Переменная для хранения оператора
      cout << "Введите выражение в формате a op b: ";
      cin >> a >> op >> b; // Считываем выражение
      switch (op) { // В зависимости от оператора, выполняем соответствующую операцию
      case '+': {
        cout << "\nРезультат: " << a + b << "\n\n";
        break;
      }
      case '-': {
        cout << "\nРезультат: " << a - b << "\n\n";
        break;
      }
      case '*': {
        cout << "\nРезультат: " << a * b << "\n\n";
        break;
      }
      case '/': {
        if (b == 0) { // Если делитель равен нулю, выводим сообщение об ошибке
          cout << "\nОшибка: деление на ноль\n";
        }
        else {
          cout << "\nРезультат: " << a / b << "\n\n";
        }
        break;
      }
      default: { // Если оператор неизвестен, выводим сообщение об ошибке
        cout << "Ошибка: неверный оператор\n";
        break;
      }
      }
      break;
    }
    case 2: { // Перевод строки из win1251 в utf-8
      string str; // Переменная для хранения строки
      cout << "Введите строку в кодировке win1251: ";
      cin >> str; // Считываем строку
      cout << "\nСтрока в кодировке utf-8: " << win1251_to_utf8(str) << "\n\n"; // Выводим строку в кодировке utf-8
      break;
    }
    case 3: {// Преобразование двухзначных чисел в слова
      int num; // Переменная для хранения числа
      cout << "Введите двухзначное число: ";
      cin >> num; // Считываем число
      if (num >= 10 && num <= 99) {
        cout << "\nЧисло в словах: " << num_to_word(num) << "\n\n"; // Выводим число в словах
      }
      else {
        cout << "\nНекорректный ввод\n\n";
      }
      break;
    }
    case 4: { // Текущее время в разных городах
      time_t now = time(0); // Получаем текущее время в секундах
      tm* gmtm = gmtime(&now); // Преобразуем время в структуру tm по Гринвичу
      tm* lt = localtime(&now); // Преобразуем время в структуру tm по местному времени
      cout << "\nТекущее время по Гринвичу: " << gmtm->tm_hour << ":" << gmtm->tm_min << ":" << gmtm->tm_sec << "\n"; // Выводим время по Гринвичу
      cout << "Текущее время в Минске: " << lt->tm_hour << ":" << lt->tm_min << ":" << lt->tm_sec << "\n"; // Выводим время в Минске
      cout << "Текущее время в Нью-Йорке: " << (gmtm->tm_hour - 5 + 24) % 24 << ":" << gmtm->tm_min << ":" << gmtm->tm_sec << "\n"; // Выводим время в Нью-Йорке
      cout << "Текущее время в Токио: " << (gmtm->tm_hour + 9) % 24 << ":" << gmtm->tm_min << ":" << gmtm->tm_sec << "\n\n"; // Выводим время в Токио
      break;
    }
    case 5: { // Перевод чисел из 10 в 2 систему счисления
      int num;
      cout << "Введите число в десятичной системе счисления: ";
      cin >> num; // Считываем число
      cout << "\nЧисло в двоичной системе счисления: " << dec_to_bin(num) << "\n\n"; // Выводим число в двоичной системе счисления
      break;
    }
    case 6: {
      return 0;
    }
    default: // Если выбор пользователя не в диапазоне от 1 до 5, выводим сообщение об ошибке
      cout << "\nОшибка: неверный номер функции\n\n";
      break;
    }
  }
}
