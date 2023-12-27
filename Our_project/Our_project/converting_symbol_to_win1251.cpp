#include "converting_symbol_to_win1251.h"
#include<iostream>

using namespace std;

void convertSymbol()
{

  setlocale(LC_CTYPE, "Ru");

  unsigned char symbol;

  cout << "\n\nВведите символ, который хотите перевести в Windows-1251:  ";
  cin >> symbol; // считываем введенный символ

  cout << "\n\nВы ввели символ (" << symbol << "), его код в Windows-1251 = " << (int)symbol; // используя преобразования типов получаем код символа


}
