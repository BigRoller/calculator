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
    cout << "���������� �����������" << endl;
    cout << "�������� ��������:" << endl;
    cout << "1. ��������" << endl;
    cout << "2. ���������" << endl;
    cout << "3. ������������" << endl;
    cout << "4. �������" << endl;
    cout << "5. ���������� � �������" << endl;
    cout << "6. ���������� ������" << endl;
    cout << "7. ���������" << endl;
    cout << "8. �����" << endl;
    cout << "9. �����" << endl;

    int choice;
    cin >> choice;

    if (choice == 9) {
      return 0;
    }

    double num1, num2;

    double result;
    switch (choice) {
    case 1:
      cout << "������� ��� �����:\n";
      cin >> num1 >> num2;
      result = add(num1, num2);
      cout << "���������: " << result << endl;
      break;
    case 2:
      cout << "������� ��� �����:\n";
      cin >> num1 >> num2;
      result = subtract(num1, num2);
      cout << "���������: " << result << endl;
      break;
    case 3:
      cout << "������� ��� �����:\n";
      cin >> num1 >> num2;
      result = multiply(num1, num2);
      cout << "���������: " << result << endl;
      break;
    case 4:
      cout << "������� ��� �����:\n";
      cin >> num1 >> num2;
      result = divide(num1, num2);
      cout << "���������: " << result << endl;
      break;
    case 5:
      cout << "������� ��� �����:\n";
      cin >> num1 >> num2;
      result = power(num1, num2);
      cout << "���������: " << result << endl;
      break;
    case 6:
      cout << "������� ���� �����:\n";
      cin >> num1;
      result = squareRoot(num1);
      cout << "���������: " << result << endl;
      break;
    case 7:
      cout << "������� ���� �����:\n";
      cin >> num1;
      result = factorial(num1);
      cout << "���������: " << result << endl;
      break;
    case 8:
      cout << "������� ���� �����:\n";
      cin >> num1;
      result = Sin(num1);
      cout << "���������: " << result << endl;
      break;
    default:
      cout << "������������ ����." << endl;
    }
  }
}
