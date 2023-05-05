#include <iostream>
#include <cmath>
#include <conio.h>
#include <Windows.h>
#include <iomanip>
#include "ModulesDolynko.h"

using namespace std;

int main() {
    char input;

    while (true) {
        cout << "Ââåä³òü ë³òåðè f, d, s àáî a: ";
        cin >> input;

        if (input == 'h') {
            s_calculation();
        } else if (input == 'f') {
        } else if (input == 'd') {
        } else if (input == 's') {
        } else if (input == 'a' || input == 'A' || input == 'p') {
            break;
        } else {
            cout << '\a';
        }
    } ;

    return 0;
}