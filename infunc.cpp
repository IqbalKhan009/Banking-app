#include<iostream>
#include<fstream>
#include "options.cpp"


    using namespace std;

    void infunction()
    {
        string name;
        int accno;
        ifstream database("data.txt");

        cout<<"Enter name\n";


        cout<<"Enter accno\n";


       if (cin>>name>>accno)
       {
           database>>name>>accno;
           option();
       }


    }
