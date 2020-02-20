#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main(){
    int maxSolutions = 0;
    int maxNum = 0;

    for (int i = 3; i <= 1000; i++){
        cout << i << "\n";
        int sum = 0;
        for (int a = 1; a < i; a++){
            for (int b = 1; b < i; b++){
                double val = sqrt(pow(a, 2) + pow(b,2));
                int valInt = val;
                if (fmod(val, 1) == 0 && (a+b+valInt == i)){
                    sum++;
                }
            }
        }

        if (sum > maxSolutions){
            maxSolutions = sum;
            maxNum = i;
        }
    }

    cout << maxNum;
}