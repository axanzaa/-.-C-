/*Элемент последовательности называется локальным максимумом,
если он строго больше предыдущего и последующего элемента последовательности.
Первый и последний элемент последовательности не являются локальными максимумами.
Дана последовательность натуральных чисел, завершающаяся числом 0.
Определите количество строгих локальных максимумов в этой последовательности.
Формат входных данных
Вводится последовательность целых чисел,
оканчивающаяся числом 0 (само число 0 в последовательность не входит,
а служит как признак ее окончания).
Формат выходных данных
Выведите ответ на задачу.
Sample Input:
1
2
1
2
1
0
Sample Output:
2
*/

#include <iostream>
using namespace std;

int main() {
    int prev = -1;
    int cur = -1;

    bool prev_gr = false;
    int cnt = 0;

    // Option 1
    while (cin >> cur && cur != 0) {
        if (prev != -1) {
            if (prev < cur && !prev_gr) {
                prev_gr = true;
            }
            else if (prev_gr) {
                if (cur < prev) {
                    ++cnt;
                    prev_gr = false;
                }
                else if (cur == prev) {
                    prev_gr = false;
                }}
            else {
                prev_gr = false;
            }}
        prev = cur;
    }

    // Option 2

    if (cin >> prev && prev != 0) {
        if (cin >> cur && cur != 0) {
            int next;
            if (cin >> next) {
                while (next != 0) {
                    if (prev < cur && cur > next) {
                        ++cnt;
                    }
                    prev = cur;
                    cur = next;
                    cin >> next;
                }}}}
    cout << cnt;

    return 0;
}