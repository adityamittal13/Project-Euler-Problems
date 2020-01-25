#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main(){
    vector<int> abundant;
    for (int i = 12; i < 28123; i++){
        int count = 1;
        for (int j = 2; j < i; j++){
            if (fmod(i, j) == 0){
                count += j;
            }
        }

        if (count > i){
            abundant.push_back(i);
        }
    }

    int size = abundant.size();
    int arr[size];

    int it = 0;
    for (vector<int>::iterator i = abundant.begin(); i != abundant.end(); i++){
        arr[it] = *i;
        it++;
    }
    
    long long int sum = 0;
    for (int i = 1; i <= 28123; i++){
        bool isAbundant = false;
        for (int j = 1; j <= size; j++){
            for (int k = 1; k <= j; k++){
                if (arr[j-1]+arr[k-1] == i){
                    isAbundant = true;
                    break;
                }
            }
            if (isAbundant){
                break;
            }
        }

        if (!isAbundant){
            cout << i << endl;
            sum += i;
        }
    }
    
    cout << sum;
}