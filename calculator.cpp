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

