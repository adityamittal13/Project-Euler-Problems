#include <iostream>
using namespace std;

int main(){
    bool isTrue = true;
    int count = 1;
    while (isTrue){
        int count2 = 0;
        for (int i = 1; i < 21; i++){
            if (count % i == 0){
                count2++;
            }
        }
        
        if (count2 == 20)
            isTrue = false;
        count++;
    }

    cout << count-1;
}