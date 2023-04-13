/**Вводится один символ, измените его регистр. То есть, если была введена строчная буква - сделайте ее заглавной и наоборот. Символы, не являющиеся латинской буквой, нужно выводить без изменений.

Входные данные

Вводится единственый символ.

Выходные данные

Выведите ответ на задачу.

Sample Input:

b
Sample Output:

B
**/

#include <iostream>
using namespace std;

int main() {
    char c; cin >> c;
  if((int) c>=97 && (int) c<=122){
      cout << (char) toupper(c);
  }
  else if((int) c>=65 && (int) c<=90){
      cout << (char) tolower(c);
  }
   else{cout<<(char)c;
  }}