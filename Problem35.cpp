#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
using namespace std;

bool primeCheck(string n){
    int num = 0;
    for (int i = 0; i < n.length(); i++){
        num += (int(n[i])-48)*pow(10, n.length()-i-1);
    }

    for (int i = 2; i <= sqrt(num); i++){
        if (fmod(num, i) == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int sum = 0;
    for (int i = 2; i < 1000000; i++){
        string val = to_string(i);

        bool isPrime = true;
        for (int j = 0; j < val.length(); j++){
            if (!primeCheck(val)){
                isPrime = false;
                break;
            }

            char value = val.back();
            val.pop_back();

            val = value + val;
        }

        if (isPrime){
            sum++;
            cout << i << endl;
        }
    }

    cout << sum;
}