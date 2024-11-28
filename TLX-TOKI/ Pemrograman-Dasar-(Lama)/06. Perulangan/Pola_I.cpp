#include <bits/stdc++.h>
using namespace std;

int main() {
    //Deklarasi Variabel
    int x, y;
    int i = 0;

    //Input
    cin >> x >> y;

    //Output
    while(x > i) {
        i++;
        if(i % y == 0) {
            cout << "*" << " ";
        }
        else{
            cout << i << " ";
        }
    }
}