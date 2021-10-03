#include <iostream>
#include <cstdio>
#include <stdlib.h>
using namespace std;
int main()
{
	float a, d;
	int n;
	cout << "A" << endl; 
	cin >> a;
	cout << "D" << endl;
	cin >> d;
	cout << "N" << endl;
	cin >> n;
	cout << "Element: " << a + (d * (n - 1)) << endl;
	system("PAUSE");
}