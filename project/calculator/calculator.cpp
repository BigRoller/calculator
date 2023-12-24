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
*/
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// ������� ��� �������� ������ �� win1251 � utf-8
string win1251_to_utf8(string str) {
  string result;
  for (char c : str) {
    if (c >= 0xC0 && c <= 0xFF) { // ���� ������ � ��������� win1251
      result += char(0xD0 + (c > 0xDF)); // ��������� ������ ���� utf-8
      result += char(0x90 + (c & 0x3F) - (c > 0xDF) * 0x30); // ��������� ������ ���� utf-8
    }
    else {
      result += c; // ����� ��������� ������ ��� ���������
    }
  }
  return result;
}

// ������� ��� �������������� ����������� ����� � �����
string num_to_word(int num) {
  string result;
  if (num < 10 || num > 99) { // ���� ����� �� �����������, ���������� ������ ������
    return result;
  }
  string ones[] = { "", "����", "���", "���", "������", "����", "�����", "����", "������", "������" };
  string teens[] = { "������", "�����������", "����������", "����������", "������������", "����������", "�����������", "����������", "������������", "������������" };
  string tens[] = { "", "", "��������", "��������", "�����", "���������", "����������", "���������", "�����������", "���������" };
  if (num >= 10 && num <= 19) { // ���� ����� � ��������� �� 10 �� 19, ���������� ������ teens
    result = teens[num - 10];
  }
  else { // ����� ���������� ������� tens � ones
    result = tens[num / 10] + " " + ones[num % 10];
  }
  return result;
}

// ������� ��� �������� ����� �� 10 � 2 ������� ���������
string dec_to_bin(int num) {
  string result;
  while (num > 0) { // ���� ����� �� ����� ����, ����� ��� �� 2 � ��������� ������� � ����������
    result = char('0' + num % 2) + result;
    num /= 2;
  }
  return result;
}

int main() {
  setlocale(LC_CTYPE, "Ru");
  while (true) {
    int choice; // ���������� ��� �������� ������ ������������
    cout << "�������� ���� �� ��������� �������:\n";
    cout << "1. �����������\n";
    cout << "2. ������� ������ �� win1251 � utf-8\n";
    cout << "3. �������������� ����������� ����� � �����\n";
    cout << "4. ������� ����� � ������ �������\n";
    cout << "5. ������� ����� �� 10 � 2 ������� ���������\n";
    cout << "6. �����\n";
    cout << "������� ����� �������: ";
    cin >> choice; // ��������� ����� ������������
    switch (choice) { // � ����������� �� ������ ������������, �������� ��������������� �������
    case 1: { // �����������
      double a, b; // ���������� ��� �������� ���������
      char op; // ���������� ��� �������� ���������
      cout << "������� ��������� � ������� a op b: ";
      cin >> a >> op >> b; // ��������� ���������
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
      default: { // ���� �������� ����������, ������� ��������� �� ������
        cout << "������: �������� ��������\n";
        break;
      }
      }
      break;
    }
    case 2: { // ������� ������ �� win1251 � utf-8
      string str; // ���������� ��� �������� ������
      cout << "������� ������ � ��������� win1251: ";
      cin >> str; // ��������� ������
      cout << "\n������ � ��������� utf-8: " << win1251_to_utf8(str) << "\n\n"; // ������� ������ � ��������� utf-8
      break;
    }
    case 3: {// �������������� ����������� ����� � �����
      int num; // ���������� ��� �������� �����
      cout << "������� ����������� �����: ";
      cin >> num; // ��������� �����
      if (num >= 10 && num <= 99) {
        cout << "\n����� � ������: " << num_to_word(num) << "\n\n"; // ������� ����� � ������
      }
      else {
        cout << "\n������������ ����\n\n";
      }
      break;
    }
    case 4: { // ������� ����� � ������ �������
      time_t now = time(0); // �������� ������� ����� � ��������
      tm* gmtm = gmtime(&now); // ����������� ����� � ��������� tm �� ��������
      tm* lt = localtime(&now); // ����������� ����� � ��������� tm �� �������� �������
      cout << "\n������� ����� �� ��������: " << gmtm->tm_hour << ":" << gmtm->tm_min << ":" << gmtm->tm_sec << "\n"; // ������� ����� �� ��������
      cout << "������� ����� � ������: " << lt->tm_hour << ":" << lt->tm_min << ":" << lt->tm_sec << "\n"; // ������� ����� � ������
      cout << "������� ����� � ���-�����: " << (gmtm->tm_hour - 5 + 24) % 24 << ":" << gmtm->tm_min << ":" << gmtm->tm_sec << "\n"; // ������� ����� � ���-�����
      cout << "������� ����� � �����: " << (gmtm->tm_hour + 9) % 24 << ":" << gmtm->tm_min << ":" << gmtm->tm_sec << "\n\n"; // ������� ����� � �����
      break;
    }
    case 5: { // ������� ����� �� 10 � 2 ������� ���������
      int num;
      cout << "������� ����� � ���������� ������� ���������: ";
      cin >> num; // ��������� �����
      cout << "\n����� � �������� ������� ���������: " << dec_to_bin(num) << "\n\n"; // ������� ����� � �������� ������� ���������
      break;
    }
    case 6: {
      return 0;
    }
    default: // ���� ����� ������������ �� � ��������� �� 1 �� 5, ������� ��������� �� ������
      cout << "\n������: �������� ����� �������\n\n";
      break;
    }
  }
}
