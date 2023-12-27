#include "converting_symbol_to_win1251.h"
#include<iostream>

using namespace std;

void convertSymbol()
{

  setlocale(LC_CTYPE, "Ru");

  string symbol;
  unsigned char  finalSymbol = 0;

  cout << "\n\nВведите символ, который хотите перевести в Windows-1251:  ";
  cin >> symbol; 

  if (symbol.size() > 1) { // проверяем сколько символов ввел пользователь
	  cout << "\n\nВы ввели больше одного символа\n\n";
  }
  else
  {
	  finalSymbol = symbol[0]; // присваиваем первый символ из строки 
  }

  cout << "\n\nВы ввели символ (" << finalSymbol << "), его код в Windows-1251 = " << (int)finalSymbol << "\n\n"; // используя преобразования типов получаем код символа


}
