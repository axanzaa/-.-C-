/**Выведите все исходные точки в порядке возрастания их расстояний от начала координат. 

Входные данные

Программа получает на вход набор точек на плоскости. Сначала задано количество точек n, затем идет последовательность из n строк, каждая из которых содержит два числа: координаты точки. Величина n не превосходит 100, все исходные координаты – целые числа, не превосходящие 103.

Выходные данные

Необходимо вывести все исходные точки в порядке возрастания их расстояний от начала координат.

Sample Input:

2
1 2
2 3
Sample Output:

1 2
2 3**/

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

struct point {
  int x, y;
  float l;
};

bool cmp(point a, point b) {
  return a.l < b.l;
}

int main() {
  int N, x, y;
  cin >> N;
  vector <point> a(N);
  for (int i = 0; i < N; i++) {
    cin >> x >> y;
    a[i].x = x;
    a[i].y = y;
    a[i].l = sqrt(float(x*x + y*y));
  }
  sort(a.begin(), a.end(), cmp);
  for (int i = 0; i < N; i++) {
    cout << a[i].x << " " << a[i].y << endl;
  }}