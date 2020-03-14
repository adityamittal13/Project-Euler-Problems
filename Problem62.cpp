    #include <iostream>
    #include <string>
    #include <cmath>
    using namespace std;

    int main(){
        const int size = 10000;
        string arr_cubes[size];

        for (int i = 0; i < size; i++){
            long long power = pow(i, 3);
            string str = to_string(power);
            sort(str.begin(), str.end());
            arr_cubes[i] = str;
        }
        
        for (int i = 0; i < size; i++){
            int count = 0;
            cout << i << endl;
            for (int j = 0; j < size; j++){
                if (arr_cubes[i] == arr_cubes[j]){
                    count++; 
                } else if (count == 5){
                    break;
                }
            }

            if (count == 5){
                cout << (long long) pow(i, 3) << endl;
                break;
            }
        }
    }