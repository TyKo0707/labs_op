#include <iostream>
using namespace std;

void fill_chars(char[], char[], int);
void display_chars(char[], int);
void fill_last_chars(char[], char[], char[], int);
int find_max_code(char[], int);
int find_min_code(char[], int);

int main() {
    const int n = 10;
    char arr1[n], arr2[n], arr3[n];
    int sum, min_code, max_code;
    fill_chars(arr1, arr2, n);
    cout << "Array 1:\n";
    display_chars(arr1, n);
    cout << "Array 2:\n";
    display_chars(arr2, n);
    fill_last_chars(arr1, arr2, arr3, n);
    cout << "Array 3:\n";
    display_chars(arr3, 4);
    min_code = find_min_code(arr3, n);
    max_code = find_max_code(arr3, n);
    cout << "Min code is " << min_code << '\n';
    cout << "Max code is " << max_code << '\n';
    sum = min_code + max_code;
    cout << "Sum of code of minimal and maximum elements is " << sum << endl;
    return 0;
}

void fill_chars(char arr1[], char arr2[], int length) {
    for (int i = 0; i < length; i++) {
        arr1[i] = (char)(62 + 3 * i);
        arr2[i] = (char)(74 - i);
    }
}

void display_chars(char arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << '\n';
}

void fill_last_chars(char arr1[], char arr2[], char arr3[], int length) {
    int k = 0;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if (arr1[i] == arr2[j]) {
                arr3[k] = arr1[i];
                k++;
            }
        }
    }
}

int find_min_code(char arr[], int length) {
    int i = 1;
    int a = (int)arr[i];
    int temp_code = (int)arr[0];
    while ((int)arr[i] > 0 && i < length) {
        if ((int)arr[i] < temp_code && 0 < (int)arr[i] < 127) {
            temp_code = (int)arr[i];
        }
        i++;
    }
    return temp_code;
}

int find_max_code(char arr[], int length) {
    int i = 1;
    int temp_code = (int)arr[0];
    while ((int)arr[i] != 0 && i < length) {
        if ((int)arr[i] > temp_code) {
            temp_code = (int)arr[i];
        }
        i++;
    }
    return temp_code;
}