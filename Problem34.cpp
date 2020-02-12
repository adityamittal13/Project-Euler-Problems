#include <iostream>
#include <string>
using namespace std;

int main(){
    int fact[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

    int sum = 0;
    for (int i = 3; i < 6000000; i++){
        string val = to_string(i);
        int count = 0;
        for (int j = 0; j < val.length(); j++){
            count += fact[int(val[j])-48];
        }

        if (count == i){
            sum += count;
            cout << i << endl;
        }
    }

    cout << sum;
}