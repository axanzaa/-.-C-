/**По данной строке определите, является ли она палиндромом (то есть, читается одинаково как слева-направо, так и справа-налево).

Входные данные

На вход подается 1 строка без пробелов.

Выходные данные

Необходимо вывести yes, если строка является палиндромом, и no в противном случае.

Sample Input:

kayak
Sample Output:

yes
**/

#include <iostream>
#include <string>
using namespace std;

int main() {
  string c;
    string text = "yes";
    getline(cin, c);
    for(int i = 0; i < c.length()/2; i ++) {
        if(c[i] != c[c.length()-1-i]) text = "no";
    }
    cout << text;
}