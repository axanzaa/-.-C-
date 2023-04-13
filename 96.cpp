/**Вам дан словарь, состоящий из пар слов. Каждое слово является синонимом к парному ему слову. Все слова в словаре различны. Для одного данного слова определите его синоним.

Входные данные

Программа получает на вход количество пар синонимов N. Далее следует N строк, каждая строка содержит ровно два слова-синонима. После этого следует одно слово.

Выходные данные

Программа должна вывести синоним к данному слову.

Sample Input:

3
Hello Hi
Bye Goodbye
List Array
Goodbye
Sample Output:

Bye
**/

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	int n, i;
	map <string, string> slovar;
	string str1, str2;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> str1 >> str2;
		slovar[str1] = str2;
	}
	cin >> str1;

	for (auto now : slovar) {
		if (str1 == now.first) {
			cout << now.second;
		}
		else if (str1 == now.second) {
			cout << now.first;
		}}}