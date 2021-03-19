/*Рациональная (несократимая) дробь представляется парой целых чисел (a,b), где a - числитель, b - знаменатель. Создать класс Rational для работы с рациональными дробями. Обязательно должны быть реализованы операции:
-сложения add, (a, b) + (c, d) = (ad + bc, bd);
-вычитания sub, (a, b) - (c, d) = (ad - bc, bd);
-умножения mul, (a, b)* (c, d) = (ac, bc);
-деления div, (a, b) / (c, d) = (ad, bc);
-сравнение equal, greate, less.
Должна быть реализована приватная функция сокращения дроби reduce, которая обязательно вызывается при выполнении арифметических операций.*/


#include <iostream>
using namespace std;

class Rational {

private:
	int a;
	int b;
public:
	
	Rational() {
		setlocale(LC_ALL, "Russian");
		cout << "Введите a: ";
		cin >> a;
		cout << "Введите b: ";
		cin >> b;
	}
	void add(){
		setlocale(LC_ALL, "Russian");
		int c;
		int d;
		cout << "Производим операцию сложения" << endl;
		cout << "Введите c: ";
		cin >> c;
		cout << "Введите d: ";
		cin >> d;
		cout << "Подставляем введенные данные в следующую формулу :(a, b) + (c, d) = (ad + bc, bd)" << endl;
		cout << "("<< a <<", " <<b << ")+("<< c <<", " << d <<")=("<< a*d + b * c <<", "<< b * d << ")" << endl;
	}
	void sub() {
		setlocale(LC_ALL, "Russian");
		int c;
		int d;
		cout << "Производим операцию вычитания" << endl;
		cout << "Введите c: ";
		cin >> c;
		cout << "Введите d: ";
		cin >> d;
		cout << "Подставляем введенные данные в следующую формулу :(a, b) - (c, d) = (ad - bc, bd)" << endl;
		cout << "(" << a << ", " << b << ")-(" << c << ", " << d << ")=(" << a*d - b * c << ", " << b * d << ")" << endl;
	}
	void mul() {
		setlocale(LC_ALL, "Russian");
		int c;
		int d;
		cout << "Производим операцию умножения" << endl;
		cout << "Введите c: ";
		cin >> c;
		cout << "Введите d: ";
		cin >> d;
		cout << "Подставляем введенные данные в следующую формулу :(a, b)* (c, d) = (ac, bc)" << endl;
		cout << "(" << a << ", " << b << ")*(" << c << ", " << d << ")=(" << a * c << ", " << b * c << ")" << endl;
	}
	void div() {
		setlocale(LC_ALL, "Russian");
		int c;
		int d;
		cout << "Производим операцию умножения" << endl;
		cout << "Введите c: ";
		cin >> c;
		cout << "Введите d: ";
		cin >> d;
		cout << "Подставляем введенные данные в следующую формулу :(a, b) / (c, d) = (ad, bc);" << endl;
		cout << "(" << a << ", " << b << ")/(" << c << ", " << d << ")=(" << a * d << ", " << b * c << ")" << endl;
	}



};
 int main() {
	Rational test;
	test.add();
	Rational test1;
	test1.sub(); 
	Rational test2;
	test2.mul();
	Rational test3;
	test3.div();
	
	return 0;
}