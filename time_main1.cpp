#include <iostream>
#include "time1.h"
using namespace std;

int main()
{
    /*
        Neste primeiro objeto, passamos todos os parâmetros. Em outras palavras, nenhum valor padrão foi usado.
    */

    Time t1(23, 59, 59);

    t1.print();
    // 23:59:59

    t1.setHour(12);
    t1.setMinute(30);
    t1.setSecond(15);

    t1.print();
    // 12:30:15

    cout << "Hour: " << t1.getHour() << endl;
    cout << "Minute: " << t1.getMinute() << endl;
    cout << "Second: " << t1.getSecond() << endl;

    cout << "\n";

    Time t2(23, 59, 58);

    t2.print();
    // 23:59:58

    t2.nextSecond();
    t2.print();
    // 23:59:59
    t2.nextSecond();
    t2.print();
    // 00:00:00
}

/*
    OBS:
    Para compilar via terminal:
    g++ time1.cpp time_main1.cpp -o time
    Para executar via terminal:
    ./time.exe
*/