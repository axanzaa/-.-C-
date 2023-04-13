/**Выведите значение наименьшего нечетного элемента списка, а если в списке нет 
 * нечетных элементов - выведите число 0.

Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу.
Sample Input 1:

5
0 1 2 3 4
Sample Output 1:

1
Sample Input 2:

5
2 4 6 8 10
Sample Output 2:

0**/

#include <iostream>
#include <vector>

using namespace std;

int main() {
  int min = 0;
  int n, vb = 0;
  cin >> n;
  vector <int> a;
  vector <int> b;
  //считывание элементов
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    a.push_back(temp);
  }
  //создание нечетного вектора
  for (int i = 0; i < n; i++) {
    if (a[i] != 0 && a[i] % 2 != 0) {
      vb = a[i];
      b.push_back(vb);
    }}
  //если все четное, то 0
  if (vb == 0) {
    cout << 0;
    return 0;
  }
  //нахождение минимального из нечетного
  min = b[0];
  for (int i = 0; i < b.size(); i++) {
    if (b[i] < min) {
      min = b[i];
    }}
  cout << min;
  return 0;
}