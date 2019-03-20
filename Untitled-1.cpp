#include <bits/stdc++.h>
#include <cstdlib>
#include <string.h>
#include "tsepas.h"
using namespace std; 

int main(void){
    FILE *fp;
    char pass; 
    string s; 

    cout << "Please enter your password:" << endl; 
    cin >> pass; 
    if(pass=='a'){
        start: 
        system("clear");
        cout << "1.Cryptography\n2.Restart PC\n3.Power off PC" << endl;
        cin >> ep;
        if(ep==1){
            cout << "Please enter the name file(.txt)" <<endl; 
            if( fp = fopen(s,"r") ){

            }
            else {
                cout << "Error!";
            }
        }
        if(ep==2){
            system();
        }
        if(ep == 3){
            cout << "Are you sure ? [y/n]"
            cin >> ep2;
            if(ep2 == y){
            system("shutdown -P now");
            }
            else{
                goto start; 
            }
        }
    }
    else{
        cout << "Incorect password!" << endl; 
        exit(1);
    }


    return 0;
}