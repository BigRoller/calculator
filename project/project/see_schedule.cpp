#include <iostream>
#include "see_schedule.h"
using namespace std;

// ������� ��� ��������� ����������
void seeSchedule() {
  int week;
  string stringDay;

  cout << "������� ������ (1-� ��� 2-�): " << endl;
  cin >> week;
  if (week == 1 || week == 2) {
    cout << "������� ����� ���: " << endl;
    cout << "1.�����������" << endl;
    cout << "2.�������" << endl;
    cout << "3.�����" << endl;
    cout << "4.�������" << endl;
    cout << "5.�������" << endl;
    cout << "6.�������" << endl;
    cin >> stringDay;

    if (stringDay.size() > 1) {
      cout << "������: ������� ������ ������ ������� " << endl << endl;
      return;
    }
    else {
      char day = stringDay[0];
      if (isdigit(day)) {
        if (week == 1) {
          switch (day) {
          case '1':
            cout << "�� ������������ ����� �������� 14.40 - 16.00" << endl;
            cout << "�� ������������ ����� �������� 16.30 - 17.50" << endl << endl;
            return;
          case '2':
            cout << "�� ������ �������������� � ���������������� 14.40 - 16.00" << endl;
            cout << "�� �������������� ������ 16.30 - 17.50" << endl;
            cout << "�� ����������� ���� 18.05 - 19.25" << endl;
            cout << "�� ���������� ���� 19.40 - 21.00" << endl << endl;
            return;
          case '3':
            cout << "���������� �������� 13.00 - 14.20" << endl;
            cout << "�� ����������-���������� ������ �������������� ������ 14.40 - 16.00" << endl;
            cout << "�� ������ ����������� ��������� 16.30 - 17.50" << endl;
            cout << "�� �������� ������� � ������������� ��������� 18.05 - 19.25" << endl << endl;
            return;
          case '4':
            cout << "�� �������������� ������ 14.40 - 16.00" << endl;
            cout << "�� ���������� - ���������� ������ �������������� ������ 16.30 - 17.50" << endl;
            cout << "�� ���������� ���� 18.05 - 19.25" << endl << endl;
            return;
          case '5':
            cout << "���������� �������� 19.30 - 17.50" << endl;
            cout << "�� ������ ����������� ��������� 18.05 - 19.25" << endl;
            cout << " ��������� � � ������������ ��������� 19.40 - 21.00" << endl << endl;
            return;
          case '6':
            cout << "�� �������� ������� � ������������� ��������� 11.25 - 12.45" << endl;
            cout << "�� �������������� ������ 13.00 - 14.20" << endl;
            cout << "�� ������ �������������� � ���������������� 14.40 - 16.00" << endl << endl;
            return;
          default:
            cout << "������: ������ �������� �������" << endl << endl;
            return;

          }
        }
        if (week == 2) {
          switch (day) {
          case '1':
            cout << "�� ������������ ����� �������� 14.40 - 16.00" << endl;
            cout << "�� ������������ ����� �������� 16.30 - 17.50" << endl << endl;
            return;
          case '2':
            cout << "�� ������ �������������� � ���������������� 14.40 - 16.00" << endl;
            cout << "�� �������������� ������ 16.30 - 17.50" << endl;
            cout << "�� ����������� ���� 18.05 - 19.25" << endl;
            cout << "�� ���������� ���� 19.40 - 21.00" << endl << endl;
            return;
          case '3':
            cout << "���������� �������� 13.00 - 14.20" << endl;
            cout << "�� ����������-���������� ������ �������������� ������ 14.40 - 16.00" << endl;
            cout << "�� ������ ����������� ��������� 16.30 - 17.50" << endl;
            cout << "�� �������� ������� � ������������� ��������� 18.05 - 19.25" << endl << endl;
            return;
          case '4':
            cout << "�� �������������� ������ 14.40 - 16.00" << endl;
            cout << "�� �������������� ������ 16.30 - 17.50" << endl;
            cout << "�� ���������� ���� 18.05 - 19.25" << endl << endl;
            return;
          case '5':
            cout << "���������� �������� 19.30 - 17.50" << endl;
            cout << "�� ������ ����������� ��������� 18.05 - 19.25" << endl << endl;
            return;
          case '6':
            cout << "�� �������� ������� � ������������� ��������� 11.25 - 12.45" << endl;
            cout << "�� �������������� ������ 13.00 - 14.20" << endl;
            cout << "�� ������ �������������� � ���������������� 14.40 - 16.00" << endl << endl;
            return;;
          default:
            cout << "������: ������ �������� �������" << endl << endl;
            return;
          }
        }
      }
      else {
        cout << "������: ������ �������� �������" << endl << endl;
      }
    }
  }
  else {
    cout << "������: ������ �������� �������" << endl << endl;
  }
}