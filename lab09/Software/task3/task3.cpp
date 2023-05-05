#include <iostream>
#include <bitset>

using namespace std;


void task9_3()
{
    int N,bit;
    cin >> N;
    if (N > 0 and N < 17948360)
    {
        if ((N & (1 << 12)) == 0) {
            bit = bitset<32>(N).count() - 1;
        }
        else {
            bit = bitset<32>(N).count();
        }
    }
    cout << bit;
}
