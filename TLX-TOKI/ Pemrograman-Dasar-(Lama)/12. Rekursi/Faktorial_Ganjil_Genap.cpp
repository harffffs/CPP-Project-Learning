#include<bits/stdc++.h>
using namespace std;

//Subprogram
int faktorial(int n){
    if(n == 1) {
        return n;
    }
    else if(n % 2 == 0){
        return n / 2 * faktorial(n - 1);
    }
    else{
        return n * faktorial(n - 1);
    }
}

int main() {
    //Deklarasi Variabel
    int n;
    
    //Input
    cin >> n;

    //Output
    cout<<  faktorial(n);
}