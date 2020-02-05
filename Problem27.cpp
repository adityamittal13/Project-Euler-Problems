#include <iostream>
#include <vector>
#include <cmath>
#include <math.h>
using namespace std;

int main(){
    vector<int> primes;

    for (int i = 2; i < 20000; i++){
        bool isPrime = true;
        for (int j = 2; j <= sqrt(i)+1; j++){
            if (fmod(i, j) == 0){
                isPrime = false;
                break;
            }
        }

        if (isPrime){
            primes.push_back(i);
        }
    }

    int product = 0;
    int max = 0;

    for (int a = -999; a < 1000; a++){
        for (int b = -1000; b < 1001; b++){
            cout << a << " " << b << endl;
            
            int n = 0;
            while (true){
                int sum = pow(n, 2)+(a*n)+b;
                bool isNotPrime = true;
                for (vector<int>::iterator i = primes.begin(); i != primes.end(); i++){
                    if ((*i) == sum){
                        isNotPrime = false;
                        break;
                    }
                }

                if (isNotPrime){
                    break;
                } else {
                    n++;
                }
            }

            if (n > max){
                max = n;
                product = a*b;
            }
        }
    }

    cout << product;
}