#pragma once
#include <iostream>
#include <string>
#include "translate_win1251_to_utf8.h"
using namespace std;

// Функция для перевода строки из win1251 в utf-8
string translate_win1251_to_utf8(string str) {
  string result;
  for (char c : str) {
    if (c >= 0xC0 && c <= 0xFF) { // Если символ в диапазоне win1251
      result += char(0xD0 + (c > 0xDF)); // Добавляем первый байт utf-8
      result += char(0x90 + (c & 0x3F) - (c > 0xDF) * 0x30); // Добавляем второй байт utf-8
    }
    else {
      result += c; // Иначе оставляем символ без изменений
    }
  }
  return result;
}