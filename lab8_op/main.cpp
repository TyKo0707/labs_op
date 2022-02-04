//Згенерувати масив цілих чисел F[k], що містить як додатні, так і від’ємні елементи із діапазону [-20, 130].

//Замінити елементи масиву F, що передують першому від’ємному елементу (включно), тими самими елементами,
//але у зворотному порядку. Якщо першим від’ємним елементом є перший елемент масиву, залишити масив незмінним.

//На основі зміненого масиву F побудувати квадратну матрицю V[n x n] (n – вводиться з клавіатури),
//послідовно заповнюючи її рядки,починаючи з першого, елементами масиву F (за необхідності послідовність елементів масиву повторюється).
//Заповнення кожного рядка матриці починати з його початку.

//Упорядкувати елементи рядків матриці V, що слідують за максимальним елементом у рядку (включно)
//за спаданням. Якщо максимальним є останній елемент рядка, залишити рядок незмінним.

#include "manip.h"
#include <iostream>

int main() {
	int n, pos = -1, m;
	cout << "Input size of array: "; cin >> n;

	int* arr = new int[n];
	arr = create_arr(arr, n);
	cout << "\nStart array is: "; output_array(arr, n);

	find_neg(arr, n, pos);
	if (pos != 0 || pos != -1) {
		replace_arr(arr, n, pos);
	}	
	cout << "\nArray after replacing: "; output_array(arr, n);

	cout << "\nInput size of matrix: "; cin >> m;
	if (m * m > n) {
		cout << "\nInput correct size of matrix: "; cin >> m;
	}
	int** matrix = new int* [m];
	matrix = create_matrix(matrix, arr, m);
	cout << "\nCreated matrix: " << endl; output_matrix(matrix, m);


	for (int i = 0; i < m; i++)
	{
		sort_after_max(matrix[i], m, i);
	}
	cout << "\nMatrix after sort: " << endl; output_matrix(matrix, m);
}