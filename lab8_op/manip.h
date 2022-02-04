#pragma once

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int* create_arr(int* arr, int n);
void output_array(int* arr, int n);
void find_neg(int* arr, int n, int& pos);
void replace_arr(int* arr, int n, int pos);
int** create_matrix(int** matrix, int* arr, int m);
void output_matrix(int** matrix, int m);
void sort_after_max(int* arr, int m, int row);
void find_pos_max(int* arr, int m, int& pos_max);
int* bubble_sort(int* array, int size);