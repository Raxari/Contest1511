#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int max, a, b, s;
    s = 0;
    max = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++){
        if (i <= 10 && i >= -10){
            continue;
        }
        if (i > 10 || i < -10){
            int c = i, p = 0;
            while(c > 0){
                c = c/10;
                p++;
            }
            int d = i/pow(10, p-2);
            int f = i%100;
            int vuch = d - f;
            if (d - f!=0 && i%vuch == 0){
                s++;
                if (i > max){
                    max = i;
                }
            }
        }
    }
    if(s == 0 || max ==0){
    cout << "0 0";
    }
    else{
    cout <<  s <<  " " <<  max <<  endl;
    }
    return 0;
}
