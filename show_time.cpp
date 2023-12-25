#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "show_time.h"
#include "time.h"
#include <iostream> 
#include <ctime> 
using namespace std;

void show_time(int choice) {
  time_t now = time(0); // Получаем текущее время в секундах
  tm* gmtm = gmtime(&now); // Преобразуем время в структуру tm по Гринвичу
  tm* lt = localtime(&now); // Преобразуем время в структуру tm по местному времени
  cout << "Текущее время в Минске: " << lt->tm_hour << ":" << lt->tm_min << ":" << lt->tm_sec << "\n"; // Выводим время в Минске
  cout << "Текущее время в Нью-Йорке: " << (gmtm->tm_hour - 5 + 24) % 24 << ":" << gmtm->tm_min << ":" << gmtm->tm_sec << "\n"; // Выводим время в Нью-Йорке
  cout << "Текущее время в Токио: " << (gmtm->tm_hour + 9) % 24 << ":" << gmtm->tm_min << ":" << gmtm->tm_sec << "\n\n"; // Выводим время в Токио
}