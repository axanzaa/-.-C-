/**Найдите в данной строке самое длинное слово и выведите его.

Входные данные

Вводится одна строка. Слова в ней отделены одним пробелом.

Выходные данные

Выведите самое длинное слово. Если таких слов несколько, то выводить нужно, которое встречается раньше.

Sample Input:

Everyone of us has all we need
Sample Output:

Everyone**/

#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
    int l = 0;
    int c = 0;
    string s1, s2;
    getline(cin, s);
    for(int i = 0; i < s.length(); i ++) {
        if(s[i] != ' ') {
            c++;
            s1 += s[i];
        }
        else {
            if(l < c) {
                l = c;
                s2 = s1;           
            }
            s1 = " ";
            c = 0;
        }}
    if(l < c) {
        l = c;
        s2 = s1;
    }
    cout << s2;  
    return 0;
}