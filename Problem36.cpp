#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string reverse(string s1){
    if (s1.length() == 0){
        return "";
    }

    char val = s1.back();
    s1.pop_back();
    
    return val + reverse(s1);
}

string toBinary(int num){
    int val = num;
    int n = 0;
    while (pow(2, n) < val){
        n++;
    }

    string str = "";
    for (int i = n; i >= 0; i--){
        if (pow(2, i) <= val){
            val -= pow(2,i);
            str += '1';
        } else {
            str += '0';
        }
    }

    if (str[0] == '0'){
        str = str.substr(1, str.length()-1);
    }
    return str;
}

int main(){
    int sum = 0;
    for (int i = 1; i < 1000000; i++){
        if (reverse(toBinary(i)) == toBinary(i) && reverse(to_string(i)) == to_string(i)){
            sum += i;
            cout << i << endl;
        }
    }

    cout << sum;
}