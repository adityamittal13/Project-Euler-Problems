#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
using namespace std;

bool isPrime(string n){
    int num = 0;
    for (int i = 0; i < n.length(); i++){
        num += (int(n[i])-48)*pow(10, n.length()-i-1);
    }

    if (num == 1){
        return false;
    }

    for (int i = 2; i <= sqrt(num); i++){
        if (fmod(num, i) == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int count = 0;
    int sum = 0;
    int i = 8;

    while (count < 11){
        string valF = to_string(i);
        string valL = to_string(i);

        bool notTruc = false;

        if (!isPrime(valF)){
            notTruc = true;
        }
        for (int j = 0; j < to_string(i).length(); j++){
            if (!isPrime(valF) || !isPrime(valL)){
                notTruc = true;
                break;
            }

            valL.pop_back();
            valF = valF.substr(1, valF.length() - 1);
            //cout << "HI " << valL << " " << valF << endl;
        }

        if (!notTruc){
            count++;
            sum += i;
            cout << i << endl;
        }
        i++;
    }

    cout << endl;
    cout << sum << endl;
}