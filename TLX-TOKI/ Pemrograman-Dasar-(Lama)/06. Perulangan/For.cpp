#include<bits/stdc++.h>
using namespace std;

int main() {
    //Deklarasi Variabel
    int x;
    int sum = 0;

    //Input
    cin >> x;
    for(int i = 0; i < x; i++) {
        int y;
        cin >> y;
        sum += y;
    }

    //Output
    cout << sum;
}