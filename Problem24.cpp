#include <iostream>
using namespace std;

int main(){
    int count = 0;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (i != j){
                for (int k = 0; k < 10; k++){
                    if (j != k && i != k){
                        for (int l = 0; l < 10; l++){
                            if (i != l && j != l && k != l){
                                for (int m = 0; m < 10; m++){
                                    if (i !=m && j !=m && k != m && l !=m){
                                        for (int n = 0; n < 10; n++){
                                            if (i != n && j !=n && k !=n && l != n && m !=n){
                                                for (int o = 0; o < 10; o++){
                                                    if (i != o && j != o && k != o && l != o && m != o && n!=o){
                                                        for (int p = 0; p < 10; p++){
                                                            if (i != p && j != p && k!=p && l !=p && m !=p && n!=p && o!=p){
                                                                for (int q = 0; q < 10; q++){
                                                                    if (i!=q && j!=q && k!=q && l!=q && m!=q && n!=q && o!=q && p!=q){
                                                                        for (int r = 0; r < 10; r++){
                                                                            if (i!=r && j!=r && k!=r && l!=r && m!=r && n!=r && o!=r && p!=r && q!=r){
                                                                                count++;
                                                                                if (count == 1000000){
                                                                                    cout << i << j << k << l << m << n << o << p << q << r << endl;
                                                                                    break;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    if (count == 1000000){
                                                                        break;
                                                                    }
                                                                }
                                                            }
                                                            if (count == 1000000){
                                                                break;
                                                            }
                                                        }
                                                    }
                                                    if (count == 1000000){
                                                        break;
                                                    }
                                                }
                                            }
                                            if (count == 1000000){
                                                break;
                                            }
                                        }
                                    }
                                    if (count == 1000000){
                                        break;
                                    }
                                }
                            }
                            if (count == 1000000){
                                break;
                            }
                        }
                    }
                    if (count == 1000000){
                        break;
                    }
                }
            }
            if (count == 1000000){
                break;
            }
        }
        if (count == 1000000){
            break;
        }
    }
}