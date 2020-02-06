#include <iostream>
using namespace std;

int main(){
    int arr[1001][1001];
    
    for (int i = 0; i< 1001; i++){
        for (int j = 0; j <1001; j++){
            arr[i][j] = 0;
        }
    }

    arr[500][500] = 1;

    int count = 1;
    int dir = 0;
    int x = 500;
    int y = 500;

    for (int i = 1; i < 1001; i++){
        if (dir == 0){
            dir = 1;
            for (int j= 0; j < i; j++){
                count++;
                x += 1;
                
                arr[y][x] = count;
            }

            for (int j = 0; j < i; j++){
                count++;
                y += 1;

                arr[y][x] = count;
            }
        } else {
            dir = 0;

            for (int j = 0; j < i; j++){
                count++;
                x -= 1;

                arr[y][x] = count;
            }

            for (int j = 0; j < i; j++){
                count++;
                y -= 1;

                arr[y][x] = count;
            }
        }
    }

    for (int i = 0; i < 1000; i++){
        count++;

        x++;
        arr[y][x] = count;
    }

    for (int i = 0; i< 1001; i++){
        for (int j = 0; j < 1001; j++){
            //cout << arr[i][j] << " ";
        }
        //cout << endl;
    }

    int sum = 0;
    for (int i = 0; i < 1001; i++){
        sum += arr[i][i];
        sum += arr[i][1000-i];
    }

    cout << sum - arr[500][500];
}