#include <iostream>
using namespace std;

int main(){
    int max = 0;
    int startNum = 0;
    long long int num;
    int count;
    for (int i = 1; i < 1000000; i++){
        num = i;
        count = 0;
        while (num != 1){
            if (num % 2 == 0){
                num /= 2;
            } else {
                num *= 3;
                num++;
            }
            count++;
        }

        if (count > max){
            max = count;
            startNum = i;
        }

        cout << i << endl;;
    }

    cout << startNum;
}