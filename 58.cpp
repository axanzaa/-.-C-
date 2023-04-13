/**Выведите значение наименьшего из всех положительных элементов в массиве. Известно, что в массиве есть хотя бы один положительный элемент.
Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

5
5 -4 3 -2 1
Sample Output:

1**/

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	int n, min;
	min = 1000;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 1; i < n; i++) {
		if (min > a[i] and a[i] > 0) {
			min = a[i];
		}}
	cout << min;
}