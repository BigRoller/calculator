#include <iostream>
#include "calculate.h"

using namespace std;

void calculate() {
  double a, b;
  char op; // Переменная для хранения оператора
  cout << "Введите выражение в формате a op b: ";
  cin >> a >> op >> b;
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
  default: { // Если что-то пошло не так, выводим сообщение об ошибке
    cout << "\nНекорректный ввод\n\n";
    break;
  }
  }
}