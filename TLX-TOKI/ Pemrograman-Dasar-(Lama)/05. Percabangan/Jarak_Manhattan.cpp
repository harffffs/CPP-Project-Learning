#include<bits/stdc++.h>
using namespace std;

int main() {
    //Deklarasi Variabel
    int garis[2][2];
    int sum;

    //Input
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> garis[i][j];
        }
    }

    //Output
    sum = abs(garis[0][0] - garis[1][0]) + abs(garis[0][1] - garis[1][1]);
    cout << sum;
}