
#include <iostream>
using namespace std;

int program23() {
    float radius, area, circumference;
    const float pi = 3.1417;

    cout<<"Enter radius of circle: ";
    cin>>radius;

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    cout<<"Area of Circle = "<< area<< endl;
    cout<<"Circumference of Circle = "<< circumference<< endl;

    // return 0;
}
