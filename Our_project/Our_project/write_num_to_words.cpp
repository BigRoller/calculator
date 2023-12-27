﻿#include "write_num_to_words.h"

using namespace std;

// Функция для преобразования двухзначных чисел в слова
string writeNumToWords(int num) {
  string result;

  if (num < 10 || num > 99) { // Если число не двухзначное, возвращаем пустую строку
    return result;
  }

  string ones[] = { "", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять" };
  string teens[] = { "десять", "одиннадцать", "двенадцать", "тринадцать", "четырнадцать", "пятнадцать", "шестнадцать", "семнадцать", "восемнадцать", "девятнадцать" };
  string tens[] = { "", "", "двадцать", "тридцать", "сорок", "пятьдесят", "шестьдесят", "семьдесят", "восемьдесят", "девяносто" };
  
  if (num >= 10 && num <= 19) { // Если число в диапазоне от 10 до 19, используем массив teens
    result = teens[num - 10];
  }
  else { // Иначе используем массивы tens и ones
    result = tens[num / 10] + " " + ones[num % 10];
  }

  return result;
}
