#include <bits/stdc++.h>
using namespace std;

int main() {
    //Deklarasi Variabel
    float num;

    //Input
    cin >> num;
    while (num > 1) {
        num = num / 2;
    }

    //Output
    if(num == 1) {
        cout << "ya";
    }
    else {
        cout << "bukan";
    }
}