#include <bits/stdc++.h>
using namespace std;

int main() {
    //Deklarasi Variabel
    string x[101];
    int i = 0;

    //Input
    while(getline(cin, x[i])) {
        i += 1;
        continue;
    }

    //Output
    for(i = i - 1; i >= 0; i--) {
        cout << x[i] << endl;
    }
    
    
}