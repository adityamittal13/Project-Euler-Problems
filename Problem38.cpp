#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int max = 0;

    for (int i = 0; i < 10000; i++){
        cout << i << endl;

        string val = "";
        int it = 1;
        while (val.length() < 9){
            val += to_string(it*i);
            it++;
        }

        string permVal = val;
        if (val.length() == 9){
            sort(val.begin(), val.end());
            if (val == "123456789"){
                int num = 0;
                for (int i = 0; i < permVal.length(); i++){
                    num += (int(permVal[i])-48)*pow(10, permVal.length()-i-1);
                }
                if (num > max){
                    max = num;
                }
            }
        }
    }

    cout << max;
}