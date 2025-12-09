#include <iostream>
using namespace std;

int program17() {
    double num = 15.58971;

    int integralPart = (int)num;             
    double fractionalPart = num - integralPart;   

    cout<<"Integral part = "<< integralPart << endl;
    cout<<"Fractional part = "<< fractionalPart << endl;

    // return 0;
}
