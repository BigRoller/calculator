#include <iostream>
#include "calculate.h"

using namespace std;

void calculate() {
  double a, b;
  char op; // ���������� ��� �������� ���������
  cout << "������� ��������� � ������� a op b: ";
  cin >> a >> op >> b;
  switch (op) { // � ����������� �� ���������, ��������� ��������������� ��������
  case '+': {
    cout << "\n���������: " << a + b << "\n\n";
    break;
  }
  case '-': {
    cout << "\n���������: " << a - b << "\n\n";
    break;
  }
  case '*': {
    cout << "\n���������: " << a * b << "\n\n";
    break;
  }
  case '/': {
    if (b == 0) { // ���� �������� ����� ����, ������� ��������� �� ������
      cout << "\n������: ������� �� ����\n";
    }
    else {
      cout << "\n���������: " << a / b << "\n\n";
    }
    break;
  }
  default: { // ���� ���-�� ����� �� ���, ������� ��������� �� ������
    cout << "\n������������ ����\n\n";
    break;
  }
  }
}