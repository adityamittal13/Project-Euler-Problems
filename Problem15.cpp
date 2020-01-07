#include <iostream>
#include <stack>
using namespace std;

/*
struct Tuple{
    int x, y;
};

int main(){
    stack<Tuple> vals;
    Tuple example = Tuple();
    example.x = 1;
    example.y = 1;
    vals.push(example);

    int count = 0;
    while (!vals.empty()){
        Tuple last = vals.top();
        vals.pop();

        if (last.x == 20 && last.y == 20){
            count++;
            cout << count << endl;
        } else {
            if (last.y != 20){
                Tuple example = Tuple();
                example.x = last.x;
                example.y = last.y + 1;

                vals.push(example);
            }
            
            if (last.x != 20){
                Tuple example = Tuple();
                example.x = last.x + 1;
                example.y = last.y;

                vals.push(example);
            }
        }
    } 

    cout << count;
}
*/


int main(){
    long long int arr[21];
    for (int i = 1; i < 21; i++){
        arr[i] = 1;
    }

    for (int i = 1; i < 21; i++){
        arr[0] = 1;
        for (int j = 1; j < 21; j++){
            arr[j] = arr[j-1] + arr[j]; 
        }

        for (int j = 0; j < 21; j++){
            cout << arr[j] << " ";
        }
        cout << endl;
    }

    cout << arr[20];
}