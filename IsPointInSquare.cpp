/**Даны два действительных числа x и y. Проверьте, принадлежит ли точка с 
 * координатами (x, y) заштрихованному квадрату (включая его границу). Если точка 
 * принадлежит квадрату, выведите слово YES, иначе выведите слово NO. 
 * На рисунке сетка проведена с шагом 1.Решение должно содержать функцию IsPointInSquare(x, y), возвращающую true, если точка принадлежит квадрату и false, если не принадлежит. Основная программа должна считать координаты точки, вызвать функцию IsPointInSquare и в зависимости от возвращенного значения вывести на экран необходимое сообщение.

Функция IsPointInSquare не должна содержать инструкцию if.

Формат входных данных
Вводятся два действительных числа.
Формат выходных данных
Выведите ответ на задачу.
Sample Input 1:

0
0
Sample Output 1:

YES
Sample Input 2:

3
-7
Sample Output 2:

NO
**/

#include <iostream>
using namespace std;

bool isPointInSquare(float a, float b) {
	bool flag;
	flag = true;
	if (a <= 1 && b <= 1 && a >= -1 && b >= -1) flag = true;
	else flag = false;
	return flag;
}

int main() {
	float x, y; cin >> x >> y;
	(isPointInSquare(x, y)) ? cout << "YES" : cout << "NO";
}