#include<bits/stdc++.h>
using namespace std;

//Subprogram
string pal(string s) {
    string y = "YA";
    string n = "BUKAN";

    if(s[0] == s[s.length() - 1] && s.length() > 1) {
        s.erase(0, 1);
        s.erase(s.length() - 1, 1);
        return pal(s);
    }
    else if(s.length() == 1 || s.length() == 0) {
        return y;
    }
    else {
        return n;
    }
}

int main() {
    //Deklarasi Variabel
    string s;

    //Input
    cin >> s;

    //Output
    cout << pal(s);
}