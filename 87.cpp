/**Переведите символ в верхний регистр.

Входные данные

Вводится единственый символ.

Выходные данные

Если введеный символ является строчной буквой латинского алфавита, то выведите такую же заглавную букву. В противном случае выведите тот же символ, который был введен.

Sample Input:

b
Sample Output:

B**/

#include <iostream>
#include <string>
using namespace std;

int main() {
    char c; cin >> c;
    if(c >= '0' && c <= '9') {
      cout << c;
    }
    else if(c >= 'A' && c <= 'Z') {
    cout << c;
    }
    else if(c >= 'a' && c <= 'z') {
    int m = c - 'a';
    char c2;
    c2 += 'A' + m;
    cout << c2;
    }
    else {
      cout << c;
    }}