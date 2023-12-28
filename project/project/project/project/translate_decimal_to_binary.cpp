#include <iostream>
#include <string>
#include "translate_decimal_to_binary.h"
using namespace std;

// ������� ��� �������� ����� �� 10 � 2 ������� ���������
string translateDecimalToBinary(int num) {
  string result;
  while (num > 0) { // ���� ����� �� ����� ����, ����� ��� �� 2 � ��������� ������� � ����������
    result = char('0' + num % 2) + result;
    num /= 2;
  }
  return result;
}