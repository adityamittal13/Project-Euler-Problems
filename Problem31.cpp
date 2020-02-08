#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

bool hasAll(int x, int y, int z){
    string val = to_string(x) + to_string(y) + to_string(z);
    sort(val.begin(), val.end());
    
    if (val == "123456789"){
        return true;
    }
    return false;
}

int main(){
    vector<int> products;
    int sum = 0;
    for (int a = 1; a < 9876; a++){
        for (int b = 1; b < a; b++){
            int product = b*a;
            int l = to_string(b).length();
            int l2 = to_string(a).length();
            int l3 = to_string(product).length();
            if (l + l2 + l3==9){
                //cout << a << " " << b << " " << product << endl;
                bool isNotThere = true;

                for (vector<int>::iterator i = products.begin(); i != products.end(); i++){
                    if ((*i) == product){
                        isNotThere = false;
                        break;
                    }
                }

                if (isNotThere && hasAll(product, b, a)){
                    sum += product;
                    products.push_back(product);
                    cout << a << " " << b << " " << product << endl;
                }
            }
        }
    }

    cout << sum;
}