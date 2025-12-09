
#include <iostream>
#include <cmath>
using namespace std;
int program25(){

float a,b,c,area;

cout<<" enter the value of a = ";
cin>>a;

cout<<" enter the value of b = ";
cin>>b;

cout<<" enter the value of c = ";
cin>>c;

  float s = (a+b+c)/2;
 area = sqrt(s*(s-a)*(s-b)*(s-c));

cout<<"area of triangle is = "<<area<<endl;

// return 0;

}