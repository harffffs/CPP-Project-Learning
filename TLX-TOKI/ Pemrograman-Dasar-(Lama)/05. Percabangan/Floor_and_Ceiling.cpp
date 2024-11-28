#include <bits/stdc++.h>
using namespace std;

int main() {
    //Deklarasi Variabel
    float x;
    int i, floor, ceil;
    
    //Input
    cin >> x;

    //Output
    i = trunc(x);

    if(i != x) {
        if(x > 0) {
            floor = i;
            ceil = i + 1;
        }
        else if(x == 0) {
            floor = 0;
            ceil = 0;
        }
        else {
            floor = i - 1;
            ceil = i;
        }
    }
    else {
        floor = x;
        ceil = x;
    }
    cout << floor << " " << ceil;
}
