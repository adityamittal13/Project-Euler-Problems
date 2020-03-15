#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int count = 0;
    for (int i = 1; i <= 10; i++){
        for (int j = 1; j <= 19; j++){
            long long val = pow(i, j);
            string str = to_string(val);
            if (str.length() == j){
                count++;
                cout << i << " " << j << " " << (long long) val << endl;
            }
        }
    }
    cout << count;
}