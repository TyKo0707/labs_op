//
// Created by 38097 on 11/29/2021.
//

#include <iostream>
#include <string>
using namespace std;

int main(){

    for (int i = 0; i < 100; i++){
        if (i/10 == i % 10 || i < 10){
            cout << i << endl;
        }
    }
}