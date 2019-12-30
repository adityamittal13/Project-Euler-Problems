#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int product = 0; 
    for (int a = 1; a < 1001; a++){
        for (int b = 1; b < 1001; b++){
            if (a + b < 1000){
                for (int c = 1; c < 1001; c++){
                    if (pow(a,2) + pow(b,2) == pow(c,2) && (a+b+c == 1000)){
                        product = a*b*c;
                        break;
                    }
                }
            }
            if (product != 0)
                break;
        }
        if (product != 0)
            break;
    }

    cout << product;
}