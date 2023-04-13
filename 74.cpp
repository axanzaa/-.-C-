/**По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “диагоналями”, как показано в примере.
Формат входных данных
Вводятся два числа n и m, не превышающие 100.

Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

Sample Input:
3 5

Sample Output:
   1   2   4   7  10
   3   5   8  11  13
   6   9  12  14  15
**/

#include <iostream>
using namespace std;

int main() {
    int n, m, l = 1;
    cin >> n >> m;
    int a[n][m];
    for(int j = 0; j < n + m; j++) {
        for(int i = 0; i < n; i++) {
            if(j-i>=0 && j-i<m) {
                a[i][j-i] = l;
                l++;
            }}}
   cout << " ";
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
          std::cout.width(4); std::cout << a[i-1][j-1];}
    cout<<endl;
    }}