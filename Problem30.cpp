#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int sum = 0;
    for (int i = 2; i < 440000; i++){
        cout << i << endl;
        string stringVal = to_string(i);
        int count = 0;

        for (int j = 0; j < stringVal.length(); j++){
            count += pow(int(stringVal[j])-48,5);
        }

        if (count == i){
            sum += i;
        }
    }
    cout << sum;
}