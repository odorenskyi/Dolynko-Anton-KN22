#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <iomanip>


using namespace std;



void task9_1()
{
    int num;
    cin >> num;
    if (num > 0 and num <= 34) { cout << "FX. with the obligatory repeated course"; }
    else if (num > 34 and num <= 59) { cout << "F. with possibility of re-assembly"; }
    else if (num > 59 and num <= 66) { cout << "E. satisfies minimum criteria"; }
    else if (num > 66 and num <= 74) { cout << "D. not bad but with significant number of defects"; }
    else if (num > 74 and num <= 81) { cout << "C. overall correct"; }
    else if (num > 81 and num <= 89) { cout << "B. above avarage some mistakes"; }
    else if (num > 89 and num <= 100) { cout << "A. exelent perfomance with small numbers of error"; }
    else { cout << "incorrect number\n";}


}