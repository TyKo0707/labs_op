#include "manip.h"

using namespace std;

int* create_arr(int* arr, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%151 - 20;
	}
	return arr;
}

void output_array(int* arr, int n) {
	for (int i = 0; i < n; i++)
	{
		cout << setw(4) << arr[i];
	}
}

void output_matrix(int** matrix, int m) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << setw(4) << matrix[i][j];
		}
		cout << "\n";
	}
}

void find_neg(int* arr, int n, int& pos) {
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0) {
			pos = i;
			break;
		}
	}
}

void find_pos_max(int* arr, int m, int& pos_max) {
	int max = -20;
	for (int i = 0; i < m; i++)
	{
		if (arr[i] > max) {
			pos_max = i;
			max = arr[i];
		}
	}
}

void replace_arr(int* arr, int n, int pos) {
	int* rev_arr = new int[pos + 1];
	for (int i = 0; i < pos + 1; i++)
	{
		rev_arr[i] = arr[pos - i];
	}
	for (int i = 0; i < pos + 1; i++)
	{
		arr[i] = rev_arr[i];
	}
}

int** create_matrix(int** matrix, int* arr, int m) {
	int index = 0;
	for (int i = 0; i < m; i++)
	{
		matrix[i] = new int[m];
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = arr[index];
			index++;
		}
	}
	return matrix;
}

void sort_after_max(int* arr, int m, int row) {
	int pos_max = m - 1;
	int index = 0;
	find_pos_max(arr, m, pos_max);
	int* buff_arr = new int[m - pos_max];
	for (int i = m - 1; i > pos_max - 1; i--)
	{
		buff_arr[index] = arr[i];
		index++;
	}
	if (index != 1) {
		bubble_sort(buff_arr, m - pos_max);
	}
	index = 0;
	for (int i = pos_max; i < m; i++)
	{
		arr[i] = buff_arr[index];
		index++;
	}
}

int* bubble_sort(int* array, int size) {
	int temp;

	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}
		}
	}
	return array;
}
