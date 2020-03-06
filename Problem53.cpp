#include <iostream>
using namespace std;

long long factorial(int val){
    if (val == 0){
        return 1;
    }

    return val * factorial(val-1);
}

long long combinations(int n, int r){
    return factorial(n)/(factorial(r)*factorial(abs(n-r)));
}

int main(){
    int count = 0;
    for (int i = 0 ; i< 100; i++){
        for (int j = 0; j <= i; j++ ){
            if (i <= 21 || (i-j) <= 21){
                if (combinations(i, j) > 1000000){
                    count++;
                }
            } else {
                
            }
        }
    }
}