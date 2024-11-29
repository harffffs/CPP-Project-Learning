#include<bits/stdc++.h>
using namespace std;

//Subprogram
string convert(int n) {
    if(n == 1) {
        return "1";
    }
    else if(n % 2 == 1) {
        return convert(n / 2) + "1";
    }
    else {
        return convert(n / 2) + "0";
    }
}

int main() {
    //Deklarasi Variabel
    int n;

    //Input
    cin >> n;

    //Output
    cout << convert(n);
}