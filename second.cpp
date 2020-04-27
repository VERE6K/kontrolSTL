#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int chislo, numb_coins, a, b;
	cin >> numb_coins >> chislo;
	int* array = new int[numb_coins];
	for (int i = 0; i < numb_coins; ++i) {
		cin >> array[i];
	}
	a = 0;
	sort(array, array + numb_coins);
	for (int i = (numb_coins - 1); i >= 0; --i) {
		b = array[i];
		a += chislo / b;
		chislo = chislo % b;
	}
	if (chislo > 0) {
		a = -1;
	}
	cout << a;
	return 0;
}
