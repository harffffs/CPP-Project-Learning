#include<bits/stdc++.h>
using namespace std;

int main() {
    //Deklarasi Variabel
    string kata;
    int k;

    //Input
    cin >> kata;
    cin >> k;

    //Output
    for(int i  = 0; i < kata.length(); i++) 
        kata[i] = ((kata[i] - 'a' + k) % 26) + 'a';
        cout << kata << endl;
        return 0;
}
