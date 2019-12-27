#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int sum = 0;
    for (int i = 1; i < 101; i++){
        sum += pow(i, 2);
    }

    int sum2 = 0;
    for (int i = 1; i < 101; i++){
        sum2 += i;
    }

    cout << (int) (sum2*sum2)-sum;
}