/**ДДаны вещественные числа a, b, c, d, e, f. Известно, что система линейных уравнений
 * имеет ровно одно решение. Выведите два числа x и y, являющиеся решением этой системы.**/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a,b,c,d,e,f,x,y;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	cin >> f;
	x = (d*e - b * f) / (a*d - b * c);
	y = (a*f - c * e) / (a*d - b * c);
	cout << x << " " << y;
}