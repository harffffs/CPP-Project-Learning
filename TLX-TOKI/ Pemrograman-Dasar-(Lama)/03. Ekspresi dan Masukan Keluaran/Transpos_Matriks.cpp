#include<bits/stdc++.h>
using namespace std;

int main() {
	//Deklarasi Variabel
	int matrix[3][3];

	//Input
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cin >> matrix[i][j];
		}
	}

	//Output
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout << matrix[j][i] << " ";
		}
		cout << endl;
	}
}