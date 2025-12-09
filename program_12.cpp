#include <iostream>

using namespace std;

int program12() {
    const float Pi = 3.1417;    
    float r, h, v;

    cout<<"Enter radius of cylinder: ";
    cin>>r;

    cout<<"Enter height of cylinder: ";
    cin>>h;

    
    v = Pi * r* r*h;

    cout << "Volume of Cylinder = " << v;

//  return 0;
}