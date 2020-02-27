#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <math.h>
using namespace std;

int stringToInt(string s1){
    long long int num = 0;
    for (int i = 0; i < s1.length(); i++){
        num += (int(s1[i])-48)*powl(10, s1.length()-i-1);
    }

    return num;
}

bool isDivisible(string num, long long int d){
    long long int n = stringToInt(num);

    if (fmod(n,d) == 0){
        return true;
    }
    return false;
}

int main(){
    long long int sum = 0;
    int count = 0;
    for (int i = 1; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (i != j){
                for (int k = 0; k < 10; k++){
                    if (j != k && i != k){
                        for (int l = 0; l < 10; l++){
                            if (i != l && j != l && k != l){
                                for (int m = 0; m < 10; m++){
                                    if (i !=m && j !=m && k != m && l !=m){
                                        for (int n = 0; n < 10; n++){
                                            if (i != n && j !=n && k !=n && l != n && m !=n){
                                                for (int o = 0; o < 10; o++){
                                                    if (i != o && j != o && k != o && l != o && m != o && n!=o){
                                                        for (int p = 0; p < 10; p++){
                                                            if (i != p && j != p && k!=p && l !=p && m !=p && n!=p && o!=p){
                                                                for (int q = 0; q < 10; q++){
                                                                    if (i!=q && j!=q && k!=q && l!=q && m!=q && n!=q && o!=q && p!=q){
                                                                        for (int r = 0; r < 10; r++){
                                                                            if (i!=r && j!=r && k!=r && l!=r && m!=r && n!=r && o!=r && p!=r && q!=r){
                                                                                string permVal = to_string(i) + to_string(j) + to_string(k) + to_string(l) + to_string(m) + to_string(n) + to_string(o) + to_string(p) + to_string(q) + to_string(r); 
                                                                                //cout << permVal << endl;

                                                                                if (isDivisible(permVal.substr(1, 3), 2) &&
                                                                                    isDivisible(permVal.substr(2, 3), 3) &&
                                                                                    isDivisible(permVal.substr(3, 3), 5) &&
                                                                                    isDivisible(permVal.substr(4, 3), 7) &&
                                                                                    isDivisible(permVal.substr(5, 3), 11) &&
                                                                                    isDivisible(permVal.substr(6, 3), 13) &&
                                                                                    isDivisible(permVal.substr(7, 3), 17)){
                                                                                        sum += stringToInt(permVal);
                                                                                        cout << permVal << endl;
                                                                                        cout << stringToInt(permVal) << endl;
                                                                                        cout << endl;
                                                                                    }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    cout << sum;
}