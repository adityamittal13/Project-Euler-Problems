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

            if (s1.length()-s2.length() == 2){
                val = s1[0] + val;
            }
        } else {
            if (s1.length()-s2.length() == 1){
                val = s1[0] + val;
            }
        }
        return val;
    } else {
        val = to_string(int(s1[0])-48+int(s2[0])-48);
        return val;
    }
}

string reverse(string val){
    if (val.size() == 0){
        return "";
    }

    char valN = val.back();
    val.pop_back();

    return valN + reverse(val);
}
int main(){
    int sum = 0;
    for (int i = 1; i < 10000; i++){
        string num = to_string(i);
        int count = 1;
        while (count <= 50){
            string sum = stringAdd(num, reverse(num));

            cout << num << " + " << reverse(num) << " = " << sum << endl;

            if (sum == reverse(sum)){
                break;
            }

            num = sum;
            count++;
        }

        if (count == 51){
            sum++;
        }
    }

    cout << sum;
}