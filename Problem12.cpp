#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int divisor(int number){
    int count1 = 0;
    for (int i = 1; i < sqrt(number); i++){
        if (fmod(number, i) == 0)
            count1 += 2;
    }
    return count1;
}

int main(){
    int count = 8805306;
    int num = 4197;

    bool isTrue = true;
    while (isTrue){
        int numDivisors = divisor(count);

        if (sqrt(count)*sqrt(count) == count){
            numDivisors--;
        }

        if (numDivisors > 500){
            cout << "Count is: " << count << " " << numDivisors << endl;
            isTrue = false;
        }

        cout << count << " " << numDivisors << " " << num << endl;
        count += num;
        num++;
    }
}