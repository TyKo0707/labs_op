#include <iostream>
#include <string> 
using namespace std;

int main(){

    for (int i = 0; i < 100; i++){

        string len = to_string(i);

        for (int x = 0; x < len.length(); ++x){

            if (i/10 == i%10 || i < 10){

                int powr = i*i;
                string len_powr = to_string(powr);

                for (int z = 0; z < len_powr.length(); ++z){

                    if (powr/10 == powr%10 || powr/100 == powr%10 || len_powr.length() == 1){
                        cout << i << endl;
                        break;
                    }
                }
                break;
            } 

        }
    }
    system("Pause");
}