#include<iostream>
#include "addAccount.cpp"
#include "login.cpp"

   using namespace std;

    int main()
    {


        int choose;
        cout<<"Welcome to my app\n";
        cout<<"Chose one of these \n";
        cout<<"         1)Create account\n";
        cout<<"         2)Login\n ";
        cin>>choose;

        if (choose ==1){
       myFun();

    }else if(choose ==2)

        login();


    }

