#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

bool isPrime(int num){
    if (num == 1){
        return false;
    } else if (num == 2){
        return true;
    }

    for (int i = 2; i <= sqrt(num); i++){
        if (fmod(num, i) == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int countV = 7;
    while (true){
        cout << countV << endl;
        double numDiags = 0.0;
        double numPrime = 0.0;

        int diag1 = 1;
        int diag2 = 1;
        int diag3 = 1;
        int diag4 = 1;

        int i1 = 2;
        int i2 = 4;
        int i3 = 6;
        int i4 = 8;

        while (diag4+i4 <= pow(countV, 2)){
            cout << diag4 << " " << pow(countV, 2) << endl;
            diag1 += i1;
            diag2 += i2;
            diag3 += i3;
            diag4 += i4;

            numDiags += 4;

            i1 += 8;
            i2 += 8;
            i3 += 8;
            i4 += 8;
            if (fmod(diag1, 3) != 0 || fmod(diag1, 5) != 0 || fmod(diag1,7) == 0){
                if (isPrime(diag1)){
                    numPrime++;
                }
            }
            if (fmod(diag2, 3) != 0 || fmod(diag2, 5) != 0 || fmod(diag2,7) == 0){
                if (isPrime(diag2)){
                    numPrime++;
                }
            }
            if (fmod(diag3, 3) != 0 || fmod(diag3, 5) != 0 || fmod(diag3,7) == 0){
                if (isPrime(diag3)){
                    numPrime++;
                }
            }
            if (fmod(diag4, 3) != 0 || fmod(diag4, 5) != 0 || fmod(diag4,7) == 0){
                if (isPrime(diag4)){
                    numPrime++;
                }
            }
        }

        if (numPrime/numDiags < 0.1){
            cout << countV << endl;
            break;
        }

        countV += 2;
    }
}