/**Последовательность Фибоначчи определяется так:

F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).

По данному числу N определите N-е число Фибоначчи F(N).

Формат входных данных
Вводится натуральное число N.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

6
Sample Output:

8**/

#include <iostream>
using namespace std;

int main () {
    int now, a = 1, b = 0, index = 0;
    cin >> now;
    while (now != b) {
        a = a + b;
        b = a - b;
        ++index;
        if (now < b) {
            index = -1;
            break;
        }}
    cout << index ;
    
    return 0;
}