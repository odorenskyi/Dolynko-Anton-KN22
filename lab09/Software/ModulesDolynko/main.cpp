#include <iostream>
#include <cmath>
#include <conio.h>
#include <Windows.h>
#include <iomanip>

using namespace std;

void printAuthorTag()
{
    system("chcp 1251");
    system("cls");
    cout << "Medvedieva Anastasiya. All Rights Reserved" << endl;
}

int main() {

    string sentence;
      SetConsoleCP (1251);
      SetConsoleOutputCP (1251);

    double x, y, z, S;
    cout << "Ââåä³òü çíà÷åííÿ x: ";
    cin >> x;
    cout << "Ââåä³òü çíà÷åííÿ y: ";
    cin >> y;
    cout << "Ââåä³òü çíà÷åííÿ z: ";
    cin >> z;


}

double s_calculation(double x, double z)
{
    double numerator = 3 * sin(sqrt(12 * pow(x, 2)) / pow(log10(x - 3), 2));
    double denominator = 2 * z;
    S = numerator + denominator;

    cout << "Çíà÷åííÿ S: " << std::setprecision(3) << S << endl;

    return S;
}