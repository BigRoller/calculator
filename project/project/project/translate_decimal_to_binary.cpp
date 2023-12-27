#include <iostream>
#include <string>
#include "translate_decimal_to_binary.h"
using namespace std;

// Функция для перевода чисел из 10 в 2 систему счисления
string translateDecimalToBinary(int num) {
  string result;
  while (num > 0) { // Пока число не равно нулю, делим его на 2 и добавляем остаток к результату
    result = char('0' + num % 2) + result;
    num /= 2;
  }
  return result;
}