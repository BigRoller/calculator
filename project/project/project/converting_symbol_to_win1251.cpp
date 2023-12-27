#include "converting_symbol_to_win1251.h"
#include<iostream>

using namespace std;

void convertSymbol()
{

  setlocale(LC_CTYPE, "Ru");

  string symbol;
  unsigned char  finalSymbol = 0;

  cout << "\n\n������� ������, ������� ������ ��������� � Windows-1251:  ";
  cin >> symbol;

  if (symbol.size() > 1) { // ��������� ������� �������� ���� ������������
    cout << "\n\n�� ����� ������ ������ �������\n\n";
  }
  else {
    finalSymbol = symbol[0]; // ����������� ������ ������ �� ������ 
    cout << "\n\n�� ����� ������ (" << finalSymbol << "), ��� ��� � Windows-1251 = " << (int)finalSymbol << "\n\n"; // ��������� �������������� ����� �������� ��� �������
  }
}