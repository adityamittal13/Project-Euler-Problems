#include <iostream>
#include <cmath>
#include <vector>
#include <math.h>
using namespace std;

bool isPrime(int num){
    if (num == 2){
        return true;
    } else if (num == 1){
        return false;
    }

    for (int i = 2; i <= sqrt(num); i++){
        if (fmod(num, i) == 0){
            return false;
        }
    }
    return true;
}

vector<int> factors(int n){
    vector<int> vals;
    int val = n;
    for (int i = 2; i <= n; i++){
        //cout << i << endl;
        if (val == 1){
            break;
        }
        //cout << val << endl;
        if (isPrime(i)){
            if (fmod(val, i) == 0){
                //cout << "HI: " << i << " " << val << endl;
                while (true){
                    if (val == 1){
                        break;
                    }

                    if (fmod(val, i) == 0){
                        val /= i;

                        bool isTrue = true;
                        for (vector<int>::iterator it = vals.begin(); it != vals.end(); it++){
                            if ((*it) == i){
                                isTrue = false;
                            }
                        }

                        if (isTrue){
                            vals.push_back(i);
                        }
                    } else {
                        break;
                    }
                }
            }
            
        }
    }

    return vals;
}

int main(){
    int count = 1;
    int val1 = 0;
    int val2 = 0;
    int val3 = 0;
    int val4 = 0;
    while (true){
        vector<int> vals = factors(count);

        cout << count << endl;

        val4 = val3;
        val3 = val2;
        val2 = val1;
        val1 = vals.size();

        if (val4 == 4 && val3 == 4 && val2 == 4 & val1 == 4){
            cout << count-3 << endl;
            break;
        }
        count++;
    }
}