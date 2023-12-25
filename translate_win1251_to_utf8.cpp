#pragma once
#include <iostream>
#include <string>
#include "translate_win1251_to_utf8.h"
using namespace std;

// ������� ��� �������� ������ �� win1251 � utf-8
string translate_win1251_to_utf8(string str) {
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