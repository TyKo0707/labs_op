#include <iostream>
#include <math.h>

using namespace std;

float newton_form(float k, double x, int n){
    double x1 = x;
    for (int i = 0; i < n; i++){
        x1 = (double)(1/k)*((x / (double)pow(x1, (k-1))) + (double)(x1 * (k-1)));
    }
    return x1;
}

int main(){

    double a;
    cout << "Input a: "; cin >> a; 

    double func_t = newton_form(3, a, 14) - newton_form(6, (pow(a, 2) + 1), 14);
    double func_d = (1 + (newton_form(7, (3 + a), 14)));

    cout << (func_t / func_d) << endl;

    system("pause");
    
}