#include <bits/stdc++.h>
using namespace std;

int main() {
    //Deklarasi Variabel
    int x;
    
    //Input
    cin >> x;

    //Output
    for(int i = x; i > 0; i--) {
        for(int j = 1; j <= x; j++) {
            if(j >= i) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    } 
}