#include <iostream>
using namespace std;

int main(){
    int years = 1;
    int count = 0;
    int dayOfWeek = 3;
    int day = 1;
    
    while (years <= 100){
        if (years % 4 != 0){
            if (day == 1 || day == 32 || day == 60 ||
                day == 91 || day == 121 || day == 152 || day == 182||
                day == 213 || day == 244 || day == 274 || day == 305 || day == 335) {
                    if (dayOfWeek == 1){
                        count++;
                    }
                }

            if (day % 365 == 0){
                years++;
                day = 1;
            } else {
                day++;
            }
        } else {
            if (day == 1 || day == 32 || day == 61 ||
                day == 92 || day == 122 || day == 153 || day == 183||
                day == 214 || day == 245 || day == 275 || day == 306 || day == 336) {
                    if (dayOfWeek == 1){
                        count++;
                    }
                }

            if (day % 366 == 0) {
                years++;
                day = 1;
            } else {
                day++;
            }
        }

        if (dayOfWeek == 7){
            dayOfWeek = 1;
        } else {
            dayOfWeek++;
        }
    }

    cout << count;
}