#pragma once
#include <iostream>
#include "see_schedule.h"
using namespace std;

// Ôóíêöèÿ äëÿ ïðîñìîòðà ðàñïèñàíèÿ
void seeSchedule() {
  bool exit = false;
  int week;
  char day;

  cout << "Ââåäèòå íåäåëþ: " << endl;
  cin >> week;
  if (week == 1 || week == 2) {
    cout << "Ââåäèòå íîìåð äíÿ: " << endl;
    cout << "1.Ïîíåäåëüíèê" << endl;
    cout << "2.Âòîðíèê" << endl;
    cout << "3.Ñðåäà" << endl;
    cout << "4.×åòâåðã" << endl;
    cout << "5.Ïÿòíèöà" << endl;
    cout << "6.Ñóááîòà" << endl;
    cin >> day;

    if (week == 1) {

      while (!exit)
      {

        switch (day)
        {
        case '1':
          cout << "ëð Êîìïüþòåðíûå ÿçûêè ðàçìåòêè 14.40 - 16.00" << endl;
          cout << "ëê Êîìïüþòåðíûå ÿçûêè ðàçìåòêè 16.30 - 17.50" << endl << endl;
          exit = true;
          break;
        case '2':
          cout << "ëê Îñíîâû àëãîðèòìèçàöèè è ïðîãðàììèðîâàíèÿ 14.40 - 16.00" << endl;
          cout << "ëê Ìàòåìàòè÷åñêèé àíàëèç 16.30 - 17.50" << endl;
          cout << "ïç Áåëîðóññêèé ÿçûê 18.05 - 19.25" << endl;
          cout << "ïç Àíãëèéñêèé ÿçûê 19.40 - 21.00" << endl << endl;
          exit = true;
          break;
        case '3':
          cout << "Ôèçè÷åñêàÿ êóëüòóðà 13.00 - 14.20" << endl;
          cout << "ëê Àðèôìåòèêî-ëîãè÷åñêèå îñíîâû âû÷èñëèòåëüíûõ ñèñòåì 14.40 - 16.00" << endl;
          cout << "ëð Îñíîâû ïðîãðàììíîé èíæåíåðèè 16.30 - 17.50" << endl;
          cout << "ïç Ëèíåéíàÿ àëãåáðà è àíàëèòè÷åñêàÿ ãåîìåòðèÿ 18.05 - 19.25" << endl << endl;
          exit = true;
          break;
        case '4':
          cout << "ëê Ìàòåìàòè÷åñêèé àíàëèç 14.40 - 16.00" << endl;
          cout << "ïç Àðèôìåòèêî - ëîãè÷åñêèå îñíîâû âû÷èñëèòåëüíûõ ñèñòåì 16.30 - 17.50" << endl;
          cout << "ïç Àíãëèéñêèé ÿçûê 18.05 - 19.25" << endl << endl;
          exit = true;
          break;
        case '5':
          cout << "Ôèçè÷åñêàÿ êóëüòóðà 19.30 - 17.50" << endl;
          cout << "ëê Îñíîâû ïðîãðàììíîé èíæåíåðèè 18.05 - 19.25" << endl;
          cout << " Êîððóïöèÿ è å¸ îáùåñòâåííàÿ îïàñíîñòü 19.40 - 21.00" << endl << endl;
          exit = true;
          break;
        case '6':
          cout << "ëê Ëèíåéíàÿ àëãåáðà è àíàëèòè÷åñêàÿ ãåîìåòðèÿ 11.25 - 12.45" << endl;
          cout << "ïç Ìàòåìàòè÷åñêèé àíàëèç 13.00 - 14.20" << endl;
          cout << "ëð Îñíîâû àëãîðèòìèçàöèè è ïðîãðàììèðîâàíèÿ 14.40 - 16.00" << endl << endl;
          exit = true;
          break;
        default:
          cout << "Îøèáêà: ââåäåí íåâåðíûé âàðèàíò\n" << endl << endl;
          exit = true;
          break;

        }

      }
    }
    if (week == 2) {

      while (!exit)
      {

        switch (day)
        {
        case '1':
          cout << "ëð Êîìïüþòåðíûå ÿçûêè ðàçìåòêè 14.40 - 16.00" << endl;
          cout << "ëê Êîìïüþòåðíûå ÿçûêè ðàçìåòêè 16.30 - 17.50" << endl << endl;
          exit = true;
          break;
        case '2':
          cout << "ëê Îñíîâû àëãîðèòìèçàöèè è ïðîãðàììèðîâàíèÿ 14.40 - 16.00" << endl;
          cout << "ëê Ìàòåìàòè÷åñêèé àíàëèç 16.30 - 17.50" << endl;
          cout << "ïç Áåëîðóññêèé ÿçûê 18.05 - 19.25" << endl;
          cout << "ïç Àíãëèéñêèé ÿçûê 19.40 - 21.00" << endl << endl;
          exit = true;
          break;
        case '3':
          cout << "Ôèçè÷åñêàÿ êóëüòóðà 13.00 - 14.20" << endl;
          cout << "ëê Àðèôìåòèêî-ëîãè÷åñêèå îñíîâû âû÷èñëèòåëüíûõ ñèñòåì 14.40 - 16.00" << endl;
          cout << "ëð Îñíîâû ïðîãðàììíîé èíæåíåðèè 16.30 - 17.50" << endl;
          cout << "ïç Ëèíåéíàÿ àëãåáðà è àíàëèòè÷åñêàÿ ãåîìåòðèÿ 18.05 - 19.25" << endl << endl;
          exit = true;
          break;
        case '4':
          cout << "ëê Ìàòåìàòè÷åñêèé àíàëèç 14.40 - 16.00" << endl;
          cout << "ïç Ìàòåìàòè÷åñêèé àíàëèç 16.30 - 17.50" << endl;
          cout << "ïç Àíãëèéñêèé ÿçûê 18.05 - 19.25" << endl << endl;
          exit = true;
          break;
        case '5':
          cout << "Ôèçè÷åñêàÿ êóëüòóðà 19.30 - 17.50" << endl;
          cout << "ëê Îñíîâû ïðîãðàììíîé èíæåíåðèè 18.05 - 19.25" << endl << endl;
          exit = true;
          break;
        case '6':
          cout << "ëê Ëèíåéíàÿ àëãåáðà è àíàëèòè÷åñêàÿ ãåîìåòðèÿ 11.25 - 12.45" << endl;
          cout << "ïç Ìàòåìàòè÷åñêèé àíàëèç 13.00 - 14.20" << endl;
          cout << "ëð Îñíîâû àëãîðèòìèçàöèè è ïðîãðàììèðîâàíèÿ 14.40 - 16.00" << endl << endl;
          exit = true;
          break;
        default:
          cout << "Îøèáêà: ââåäåí íåâåðíûé âàðèàíò\n" << endl << endl;
          exit = true;
          break;
        }

      }
    }
  }
  else {
    cout << "Îøèáêà: ââåäåí íåâåðíûé âàðèàíò\n" << endl << endl;
  }
}
