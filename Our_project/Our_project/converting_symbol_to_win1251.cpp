#include "converting_symbol_to_win1251.h"
#include<iostream>

using namespace std;

void convertSymbol()
{

  setlocale(LC_CTYPE, "Ru");

  unsigned char symbol;

  cout << "\n\n������� ������, ������� ������ ��������� � Windows-1251:  ";
  cin >> symbol; // ��������� ��������� ������

  cout << "\n\n�� ����� ������ (" << symbol << "), ��� ��� � Windows-1251 = " << (int)symbol; // ��������� �������������� ����� �������� ��� �������


}
