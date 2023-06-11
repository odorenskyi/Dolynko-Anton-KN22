#include <iostream>
using namespace std

class ClassLab12_Dolynko {
private:
    double attribute1;
    double attribute2;
    double attribute3;

public:
    ClassLab12_Dolynko(double attr1, double attr2, double attr3) {
        attribute1 = attr1;
        attribute2 = attr2;
        attribute3 = attr3;
    }

    double getAttribute1() const {
        return attribute1;
    }

    double getAttribute2() const {
        return attribute2;
    }

    double getAttribute3() const {
        return attribute3;
    }

    double getVolume() const {
        return (attribute1 * attribute2 * attribute3) / 6.0;
    }

    void setAttribute1(double value) {

        if (value > 0) {
            attribute1 = value;
        } else {
            cout << "Помилка: Недопустиме значення для attribute1." << endl;
        }
    }

    void setAttribute2(double value) {

        if (value > 0) {
            attribute2 = value;
        } else {
            cout << "Помилка: Недопустиме значення для attribute2." << endl;
        }
    }

    void setAttribute3(double value) {

        if (value > 0) {
            attribute3 = value;
        } else {
            cout << "Помилка: Недопустиме значення для attribute3." << endl;
        }
    }
};

int main() {
    ClassLab12_Dolynko obj(2.5, 3.0, 4.1);

    cout << "Attribute 1: " << obj.getAttribute1() << endl;
    cout << "Attribute 2: " << obj.getAttribute2() << endl;
    cout << "Attribute 3: " << obj.getAttribute3() << endl;
    cout << "Volume: " << obj.getVolume() << endl;

    obj.setAttribute1(1.5);
    obj.setAttribute2(2.0);
    obj.setAttribute3(2.5);

    cout << "Attribute 1: " << obj.getAttribute1() << std::endl;
    cout << "Attribute 2: " << obj.getAttribute2() << std::endl;
    cout << "Attribute 3: " << obj.getAttribute3() << std::endl;
    cout << "Volume: " << obj.getVolume() << endl;

    return 0;
}
