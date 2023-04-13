/**Дано действительное положительное число a и целоe число n.

Вычислите an. Решение оформите в виде рекурсивной функции power(a, n).

Формат входных данных
Вводится действительное положительное число a и целоe число n.
Формат выходных данных
Выведите ответ на задачу.
Sample Input 1:

2
1
Sample Output 1:

2
Sample Input 2:

2
2
Sample Output 2:

4**/

#include <iostream>
using namespace std;

double power(double x, int p){
    if (p == 0) return 1;
    if (p > 0) return x * power(x, p-1);
    else return 1/x * power(x, p+1);
}
int main() {
    double a, n; cin >> a >> n;
    cout << power (a, n);
}