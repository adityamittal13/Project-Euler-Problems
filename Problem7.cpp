#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;


bool isPrime(int count1){
    for (int i = 2; i < (int) sqrt(count1)+1; i++){
        if (fmod(count1, i) == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int count = 2;
    int count2 = 0;
    
    while (count2 < 10001){
        if (isPrime(count)){
            count2++;
        }
        count++;
    }

    cout << count-1;
}

