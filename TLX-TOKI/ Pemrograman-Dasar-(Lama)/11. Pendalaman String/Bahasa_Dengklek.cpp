#include<bits/stdc++.h>
using namespace std;

int main() {
    string x;

    cin >> x;
    for(int i = 0; i < x.length(); i++) {
        int s = x[i];
        if(isupper(s)) 
        {
            x[i] = tolower(s);
        }
        else {
            x[i] = toupper(s);
        }
    }
    cout << x << endl;
}
