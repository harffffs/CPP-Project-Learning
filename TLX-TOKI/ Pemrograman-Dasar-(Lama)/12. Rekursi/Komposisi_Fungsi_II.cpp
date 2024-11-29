#include<bits/stdc++.h>
using namespace std;

//Subprogram
int f(int A, int B, int k, int n) {
    if(k == 0) {
        return n;
    }
    else {
        return abs(A*f(A, B, k -1, n) + B);
    }
}
    
int main() {
    //Deklarasi Variabel
    int A, B, k, n;

    //Input
    cin >> A >> B >> k >> n;

    //Output
    cout << f(A, B, k, n);
}