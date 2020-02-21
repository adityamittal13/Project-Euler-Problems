#include <iostream>
#include <string>
using namespace std;

int main(){
    string val = "";
    for (int i = 1; i < 200000; i++){
        val += to_string(i);
    }
    cout << val.length() << endl;
    cout << (int(val[0])-48)*(int(val[9])-48)*(int(val[99])-48)*(int(val[999])-48)*(int(val[9999])-48)
        *(int(val[99999])-48)*(int(val[999999])-48);
}