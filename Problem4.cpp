#include <iostream>
#include <string>
using namespace std;

string recurseHelp (string ans1) {
    if (ans1.length() == 0){
        return "";
    }

    char value = ans1.back();
    ans1.pop_back();

    return value + recurseHelp(ans1);
    
}
int main() {
    int answer2 = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int product = i*j;
            string answer = to_string(product);
            if (answer == recurseHelp(answer)) {
                if (product > answer2)
                    answer2 = product;
            }
        }
    }

    cout << answer2;
}