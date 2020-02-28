#include <iostream>
#include <cmath>
using namespace std;

int main(){
    const int size = 60000;

    unsigned long int pent[size];
    unsigned long int hex[size];

    for (int i = 1; i<size; i++){
        pent[i] = (i*((3*i)-1))/2;
        hex[i] = i*((2*i)-1);
    }

    int count = 1;
    int val = 0;
    while (count < size){
        int newV = 0;
        bool isThere = false;
        int index = 0;

        if (count > 46340){
            newV = 1073720970 + 1073720970 - abs((count*(count+1))/2);
        } else {
            newV = abs((count*(count+1))/2);
        }

        cout << newV << " " << count <<endl;

        for (int i = 0; i < size; i++){
            if (pent[i] == newV){
                isThere = true;
                index = i;
                break;
            }
        }

        bool isThere2 = false;
        int index2 = 0;
        for (int j = 0; j < size; j++){
            if (hex[j] == newV){
                isThere2 = true;
                index2 = j;
                break;
            }
        }

        if (isThere && isThere2){
            if (val == 0 || val == 1){
                val++;
            } else {
                cout << newV << " " << pent[index] << " " << hex[index2] << endl;
                cout << count << " " << index << " " << index2  << endl;
                break;
            }
        }
        count++;
    }
}