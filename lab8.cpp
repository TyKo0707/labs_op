#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>
using namespace std;
const int SIZE = 6;
int arr[SIZE][SIZE];
void input_arr(int a[SIZE][SIZE]);
int lab8(int arr[][SIZE]);

int main() {	
	input_arr(arr);
    system("PAUSE");
}

void input_arr(int a[SIZE][SIZE]) {
	srand(time(NULL));
	int p[SIZE];
	for (int i = 0; i < SIZE; i++) {
		p[i] = rand() % 20 - 10;
	}
	cout << "First matrix:" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "[ ";
		for (int x = 0; x < SIZE; x++) {
			cout << p[x] << " ";
		}
		cout << "]" << endl;
	}
	for (int i = 0; i < SIZE; i++) {
		for (int z = 0; z < SIZE - i; z++) {
			a[i][z] = p[i+z];
		}
		for (int x = SIZE - i; x < SIZE; x++) {
			a[i][x] = p[abs(SIZE-x-i)];
		}
	}
	cout << "Second matrix:" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "[ ";
		for (int x = 0; x < SIZE; x++) {
			cout << a[i][x] << " ";
		}
		cout << "]" << endl;
	}
}