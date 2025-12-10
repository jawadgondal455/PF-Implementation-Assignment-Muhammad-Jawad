// helo there
#include <iostream>
#include "./program_01.cpp"
#include "./program_02.cpp"
#include "./program_03.cpp"
#include "./program_04.cpp"
#include "./program_05.cpp"
#include "./program_06.cpp"
#include "./program_07.cpp"
#include "./program_08.cpp"
#include "./program_09.cpp"
#include "./program_10.cpp"
#include "./program_11.cpp"
#include "./program_12.cpp"
#include "./program_13.cpp"
#include "./program_14.cpp"
#include "./program_15.cpp"
#include "./program_16.cpp"
#include "./program_17.cpp"
#include "./program_18.cpp"
#include "./program_19.cpp"
#include "./program_20.cpp"
#include "./program_21.cpp"
#include "./program_22.cpp"
#include "./program_23.cpp"
#include "./program_24.cpp"
#include "./program_25.cpp"
#include "./program_26.cpp"
#include "./program_27.cpp"
#include "./program_28.cpp"
#include "./program_29.cpp"
#include "./program_30.cpp"


using namespace std;
int main(){

    int choice ;

    while(choice != 0){
        cout << "\nEnter a number to run that program: ";
        cin >> choice;
        if (choice == 1){
            program1();
        }
       else if(choice==2) {program2();}
        else if(choice==3) {program3(); }
        else if(choice==4) {program4();}
        else if(choice==5) {program5();}
        else if(choice==6) {program6();}
        else if(choice==7) {program7();}
       else if(choice==8) { program8();}
       else if(choice==9) { program9();}
        else if(choice==10) {program10();}
        else if(choice==11) {program11();}
        else if(choice==12) {program12();}
        else if(choice==13) {program13();}
        else if(choice==14) {program14();}
       else if(choice==15) { program15();}
       else if(choice==16) { program16();}
       else if(choice==17) { program17();}
       else if(choice==18) { program18();}
       else if(choice==19) { program19();}
       else if(choice==20) { program20();}
       else if(choice==21) { program21();}
       else if(choice==22) { program22();}
       else if(choice==23) { program23();}
       else if(choice==24) { program24();}
       else if(choice==25) { program25();}
       else if(choice==26) { program26();}
       else if(choice==27) { program27();}
       else if(choice==28) { program28();}
       else if(choice==29) { program29();}
       else if(choice==30) { program30();}
       else {
     cout<<"that program not exits";}
    } 
    return 0;
}