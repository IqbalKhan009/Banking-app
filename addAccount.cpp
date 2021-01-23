#include <iostream>
#include <fstream>
#include"infunc.cpp"
using namespace std;
void myFun(){
     char select;

    ofstream database("data.txt");
    cout<<"Do you want to create account y/n\n";
        cin>>select;
        if(select=='y' )
        {
             infunction();
        }else if(select =='n')
        {
            cout<<"Okay";
        }


    }
