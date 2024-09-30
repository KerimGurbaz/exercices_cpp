//
// Created by Krm on 30/09/2024.
//
#include <iostream>
using namespace std;

/*
 * int main(){
int i, n , som;
    som =0;

    for(i = 0; i<4; i++) {

        cout<<"Donnez un entier ";
        cin>>n;
        som +=n;
    }
    cout<< "Somme : "<< som;
return 0;
}
 */

int main() {

    int n, som(0), i(0);

    do{
        cout<<"Donnez un entier : \n";
        cin>>n;
        som +=n;
        i++;
    }while(i<4);
    cout<<som;
}


