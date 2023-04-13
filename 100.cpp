/**Выведите фамилии и имена учащихся в порядке убывания их среднего балла.

Входные данные

Заданы сначала количество учащихся n, затем n строк, каждая из которых содержит фамилию, имя и три числа (оценки по трем предметам: математике, физике, информатике). Данные в строке разделены одним пробелом. Оценки принимают значение от 1 до 5.

Выходные данные

Необходимо вывести пары фамилия-имя по одной на строке, разделяя фамилию и имя одним пробелом. Выводить оценки не нужно. Если несколько учащихся имеют одинаковые средние баллы, то их нужно выводить в порядке, заданном во входных данных.

Sample Input:

3
Markov Valeriy 5 5 5
Sergey Petrov 1 1 1
Petrov Petr 3 3 3
Sample Output:

Markov Valeriy
Petrov Petr
Sergey Petrov**/

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

struct student {
	string name;
	int subj_1, subj_2, subj_3;
	int subj_mean;
};

bool cmp(student a, student b) {
	return a.subj_mean > b.subj_mean;
}

int main() {
	int N, subj_1, subj_2, subj_3;
	string first_name, last_name;
	cin >> N;
	vector <student> a(N);
	for (int i = 0; i < N; i++) {
		cin >> first_name >> last_name >> subj_1 >> subj_2 >> subj_3;
		a[i].name = first_name + ' ' + last_name;
		a[i].subj_1 = subj_1;
		a[i].subj_2 = subj_2;
		a[i].subj_3 = subj_3;
		a[i].subj_mean = subj_1 + subj_2 + subj_3;
	}
	stable_sort(a.begin(), a.end(), cmp);
	for (int i = 0; i < N; i++) {
		cout << a[i].name << endl;
	}}