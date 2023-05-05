#include <iostream>
#include <bitset>

using namespace std;

void task9_2()
{
    double week[7] = { 20.2, 15.1, 16.4, 19.7, 13.9, 23.1, 17.8 };
    double avg = 0;
    for (int i = 0; i < 7; i++) {
        avg += week[i];
    }
    avg = avg / 7;
    double far = 32 + 9/5  * avg;
    cout << avg, "\n", far,"\n";
}
