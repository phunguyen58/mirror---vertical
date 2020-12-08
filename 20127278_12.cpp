#include<iostream>
using namespace std;

void SwapMatrix(int n, float a[][100]) {
	if (n % 2 != 0) {
		for (int k = 0; k < n; k++) {
			int i = 0;
			int j = n - 1;
			while (i < n / 2 && j > n / 2) {
				int temp = a[k][i];
				a[k][i] = a[k][j];
				a[k][j] = temp;
				i++;
				j--;
			}
		}
	}
	else {
		for (int k = 0; k < n; k++) {
			int i = 0;
			int j = n - 1;
			while (i < n / 2 && j >= n / 2) {
				int temp = a[k][i];
				a[k][i] = a[k][j];
				a[k][j] = temp;
				i++;
				j--;
			}
		}
	}
}

void Input(int& n, float a[][100]) {
	cout << "Input row & column: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	cout << "The input matrix is: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << a[i][j] << "    ";
		cout << endl;
	}
}

void Output(int n, float a[][100]) {
	cout << "The matrix after swap is: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << a[i][j] << "    ";
		cout << endl;
	}
}

int main() {
	int n;
	float a[50][100];
	Input(n, a);
	SwapMatrix(n, a);
	Output(n, a);
}