#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "show_time.h"
#include "time.h"
#include <iostream> 
#include <ctime> 
using namespace std;

void show_time(int choice) {
  time_t now = time(0); // �������� ������� ����� � ��������
  tm* gmtm = gmtime(&now); // ����������� ����� � ��������� tm �� ��������
  tm* lt = localtime(&now); // ����������� ����� � ��������� tm �� �������� �������
  cout << "������� ����� � ������: " << lt->tm_hour << ":" << lt->tm_min << ":" << lt->tm_sec << "\n"; // ������� ����� � ������
  cout << "������� ����� � ���-�����: " << (gmtm->tm_hour - 5 + 24) % 24 << ":" << gmtm->tm_min << ":" << gmtm->tm_sec << "\n"; // ������� ����� � ���-�����
  cout << "������� ����� � �����: " << (gmtm->tm_hour + 9) % 24 << ":" << gmtm->tm_min << ":" << gmtm->tm_sec << "\n\n"; // ������� ����� � �����
}