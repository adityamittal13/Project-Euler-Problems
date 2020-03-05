#include <iostream>
#include <string>
using namespace std;

int main(){
    int count = 1;
    while (true){
        cout << count << endl;
        string val = to_string(count);
        string val2 = to_string(count*2);
        string val3 = to_string(count*3);
        string val4 = to_string(count*4);
        string val5 = to_string(count*5);
        string val6 = to_string(count*6);

        sort(val.begin(), val.end());
        sort(val2.begin(), val2.end());
        sort(val3.begin(), val3.end());
        sort(val4.begin(), val4.end());
        sort(val5.begin(), val5.end());
        sort(val6.begin(), val6.end());

        string arr[6] = {val, val2, val3, val4, val5, val6};

        bool notTrue = true;

        for (int i = 0; i < 6; i++){
            for (int j = 0; j < 6; j++){
                if (arr[i] != arr[j]){
                    notTrue = false;
                    break;
                }
            }
        }

        if (notTrue){
            cout << count << endl;
            break;
        }

        count++;
    }
}