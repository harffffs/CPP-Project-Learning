#include<bits/stdc++.h>
using namespace std;

int main() {
    string x;
    cin >> x;

    for(int i = 0; i < x.length(); i++) {
        if(x[i] == '_') {
            x.erase(i, 1);
            x[i] = toupper(x[i]);
        }
        else if(isupper(x[i])) {
            x[i] = tolower(x[i]);
            x.insert(i, "_");
        }
    }
    cout << x;
}