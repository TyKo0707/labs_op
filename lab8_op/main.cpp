//����������� ����� ����� ����� F[k], �� ������ �� ������, ��� � �䒺�� �������� �� �������� [-20, 130].

//������� �������� ������ F, �� ��������� ������� �䒺����� �������� (�������), ���� ������ ����������,
//��� � ���������� �������. ���� ������ �䒺���� ��������� � ������ ������� ������, �������� ����� ��������.

//�� ����� �������� ������ F ���������� ��������� ������� V[n x n] (n � ��������� � ���������),
//��������� ���������� �� �����,��������� � �������, ���������� ������ F (�� ����������� ����������� �������� ������ ������������).
//���������� ������� ����� ������� �������� � ���� �������.

//������������ �������� ����� ������� V, �� ������� �� ������������ ��������� � ����� (�������)
//�� ���������. ���� ������������ � ������� ������� �����, �������� ����� ��������.

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