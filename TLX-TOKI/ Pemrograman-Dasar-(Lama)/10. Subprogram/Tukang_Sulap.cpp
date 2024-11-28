#include<bits/stdc++.h>
using namespace std;

//Deklarasi Fungsi
void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    //Deklarasi Variabel
    int n, t;
    int balls[2][1100];

    //Input
    cin >> n;
    for(int i = 0; i < 2; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> balls[i][j];
        }
    }

    cin >> t;
    for(int i = 0; i < t; i++) {
        char sn1[5], sn2[5];
        int x, y;

        cin >> sn1 >> x >> sn2 >> y;
        int Q = sn1[0] - 'A';
        int P = sn2[0] - 'A';
       
        swap(balls[Q][x], balls[P][y]);
        
    }

    //Output
    for(int i = 0; i < 2; i++) {
        for(int j = 1; j <= n; j++) {
            cout << balls[i][j] << " ";
        }
        cout << endl;
    }
}