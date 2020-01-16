#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int arr[10000];

    int sum = 0;
    for (int i = 2; i < 10001; i++){
        int count = 1;
        //cout << i << " ";
        for (int j = 2; j <= i-1; j++){
            if (fmod(i, j) == 0){
                count += j;
                //cout << j << " ";
            }
        }

       //cout << count << endl;
        
        arr[i-1] = count;

        for (int j = 1; j < i; j++){
            if ((arr[i-1] == j) && (arr[j-1] == i)){
                sum += arr[i-1]+arr[j-1];

                cout << i << " " << j << endl;
            }
        }
    }

    cout << sum;
}