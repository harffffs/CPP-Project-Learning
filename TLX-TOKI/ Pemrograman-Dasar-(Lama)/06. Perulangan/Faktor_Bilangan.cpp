#include <bits/stdc++.h>
using namespace std;

int main() {
    //Deklarasi Variabel
    int num;

    //Input
    cin >> num;

    //Output
    for(int i = num; num >= 1; num--) {
        if(i % num == 0) {
            cout << num << endl;
        }
    }
}