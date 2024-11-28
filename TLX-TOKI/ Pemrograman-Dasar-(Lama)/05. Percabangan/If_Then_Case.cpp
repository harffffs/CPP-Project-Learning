#include <bits/stdc++.h>
using namespace std;

int main() {
    //Deklarasi Variabel
    int x;

    //Input
    cin >> x;
    
    //Output
    if(x >= 10000) {
        cout << "puluhribuan";
    }
    else if (x >= 1000)
    {
        cout << "ribuan";
    }
    else if (x >= 100) {
        cout << "ratusan";
    }
    else if (x >= 10) {
        cout << "puluhan";
    }
    else {
        cout << "satuan";
    }
    
}