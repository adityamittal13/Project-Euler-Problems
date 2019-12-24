#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;


bool isPrime(int n){
    for (int i = 2; i < sqrt(n); i++){
        if (fmod(n, i) == 0){
            return false;
        }
    }
    return true;
}

int main(){
    long long max = 1;
    for (int i = 1; i < 775147; i++) {
        if (fmod(600851475143, i) == 0){
            if (isPrime(i))
                max = i;
        }
    }

    cout << max << endl;
}