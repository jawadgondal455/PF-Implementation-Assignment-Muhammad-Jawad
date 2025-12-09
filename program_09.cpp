#include <iostream>

using namespace std;

int program9 (){
 
 int a, b ,c ,d;
 cout<<" Enter the first number = ";
 cin>>a;
 cout<<" Enter the second number = ";
 cin>>b;
 cout<<" Enter the third number = ";
 cin>>c;
 cout<<" Enter the fourth number = ";
 cin>>d;
 
 if((a>b)&&(a>c)&&(a>d)){
   cout<<"the maxim number is "<<a;
 }else if((b>a)&&(b>c)&&(b>d)){
   cout<<"the maxim number is "<<b;
 }else if((c>a)&&(c>b)&&(c>d)){
   cout<<"the maxim number is "<<c;
 }else{
   cout<<"the maxim number is "<<d; 
 }

  // return 0;
}