#include <iostream>
#include <string>
#include <map>
using namespace std;

map<char, int> vals;
map<char, int> vals2;
map<char,int> teens;

int numbers(string i1){
    if (i1.length() == 1){
        return vals[i1[0]];
    }
    else if (i1.length() == 2){
        if (i1[0] == '1'){
            return teens[i1[1]];
        } else {
            return vals[i1[1]] + vals2[i1[0]];
        }
    } else if (i1.length() == 3){
        if (i1[1] == '1'){
            if (i1[2] == '0'){
                return 7 + vals[i1[0]] + teens[i1[2]];
            }
            return 10 + vals[i1[0]] + teens[i1[2]];
        } else if (i1[2] == '0') {
            return 7 + vals[i1[0]] + vals2[i1[1]];
        } else {
            return 10 + vals[i1[0]] + vals[i1[2]] + vals2[i1[1]];
        }
    } else {
        return 11;
    }
}

int main(){
    vals['1'] = 3;
    vals['2'] = 3;
    vals['3'] = 5;
    vals['4'] = 4;
    vals['5'] = 4;
    vals['6'] = 3;
    vals['7'] = 5;
    vals['8'] = 5;
    vals['9'] = 4;
    vals['0'] = 0;

    vals2['2'] = 6;
    vals2['3'] = 6;
    vals2['4'] = 5;
    vals2['5'] = 5;
    vals2['6'] = 5;
    vals2['7'] = 7;
    vals2['8'] = 6;
    vals2['9'] = 6;
    vals2['0'] = 0;

    teens['1'] = 6;
    teens['2'] = 6;
    teens['3'] = 8;
    teens['4'] = 8;
    teens['5'] = 7;
    teens['6'] = 7;
    teens['7'] = 9;
    teens['8'] = 8;
    teens['9'] = 8;
    teens['0'] = 3;

    int count = 0;

    for (int i = 1; i < 1001; i++){
        string val = to_string(i);
        int count1 = numbers(val);

        cout << val << " " << count1 << endl;
        count += count1;
    }

    cout << count;
}