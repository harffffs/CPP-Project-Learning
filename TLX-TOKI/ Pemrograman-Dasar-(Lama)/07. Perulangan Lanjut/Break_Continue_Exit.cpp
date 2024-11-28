#include <bits/stdc++.h>
using namespace std;

int main() {
    //Deklarasi Variabel
    int x;
    int i = 0;

    //Input
    cin >> x;

    //Output
    while(x > i) {
        i++;
        if(i % 10 == 0) {
            continue;
        }
        else if(i == 42) {
            cout << "ERROR";
            break;
        }
        cout << i << endl;
    }
}