
#include <iostream>
#include <string>
using namespace std;



void M()
{
//M: Максимум последовательности
//Дана последовательность натуральных чисел(одно число в строке), завершающаяся числом 0. Определите наибольшее значение числа в этой последовательности.
	int max = 0;
	string s;
	getline(cin, s);
	int a = stoi(s);
	while (a != 0) {
		if (a > max)
			max = a;
		getline(cin, s);
		a = stoi(s);
	}
	cout << max << " done" << endl;
	
}

void N() {
//N: Среднее значение последовательности
//Дана последовательность натуральных чисел(одно число в строке), 
//завершающаяся числом 0. Определите среднее значение элементов этой последовательности(без учета последнего нуля).
	double k = 0; 
	double d = 0;
	string s;
	getline(cin, s);
	double a = stod(s);
	while (a != 0) {
		k += 1;
		d += a;
		getline(cin, s);
		a = stod(s);
	}
	cout << d/k << " done" << endl;

}

int main()
{
	M();
	N();
}
