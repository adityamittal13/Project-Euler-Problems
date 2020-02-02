#include <iostream>
#include <string>
using namespace std;

string stringAdd(string s1, string s2){
    string val = "";
    if (s1.length() > 1){
        int valNum;
        bool isLarge = false;
        for (int i = 0; i < s2.length(); i++){
            if (isLarge){
                valNum = int(s1[s1.length()-i-1])+ int(s2[s2.length()-i-1])-95;
            } else {
                valNum = int(s1[s1.length()-i-1])+ int(s2[s2.length()-i-1])-96;
            }

            isLarge = false;
            if (valNum < 10){
                val = to_string(valNum) + val;
            } else {
                val = to_string(valNum-10) + val;
                isLarge = true;
            }
        }

        if (isLarge){
            if (s1.length() != s2.length()){
                valNum = int(s1[s1.length()-s2.length()-1])-47;
            } else {
                valNum = 1;
            }
            val = to_string(valNum) + val;
        } else {
            if (s1.length()-s2.length() != 0){
                val = s1[0] + val;
            }
        }
        return val;
    } else {
        val = to_string(int(s1[0])-48+int(s2[0])-48);
        return val;
    }
}

int main(){
    string fibNum;
    int i = 3;
    string lastFib = "1";
    string secFib = "1";
    while (true){
        fibNum = stringAdd(lastFib, secFib);
        cout << fibNum << endl;

        secFib = lastFib;
        lastFib = fibNum;
        if (fibNum.length() >= 1000){
            cout << i;
            break;
        }
        i++;
    }
}