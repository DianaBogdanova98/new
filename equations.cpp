
#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

//Линейные уравнения 


template <typename T>
T func(T a, T b) {
	return ((-b) / a);

}
float func(int a, float b) {
	return ((-b) / a);
}
int func(float a, int b) {
	return ((-b) / a);
}
int main()
{
	cout << "x = " << func(3.2, 5);




}




//Квадратные уравнения 


template <typename A>
void sqr_f(A a, A b, A c) {
	setlocale(LC_ALL, "rus");
	int D = pow(b, 2) - 4 * a*c;
	float x1 = 0;
	float x2 = 0;
	if (D > 0) {
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
	}
	if (D == 0) {
		x1 = x2 = (-b) / (2 * a);
	}
	if (D < 0) {
		cout << "Cреди действительных чисел корней нет";

	}
	cout << x1 << endl << x2;
}

template <typename A, typename B>
void sqr_f(A a, A b, B c) {
	setlocale(LC_ALL, "rus");
	int D = pow(b, 2) - 4 * a*c;
	float x1 = 0;
	float x2 = 0;
	if (D > 0) {
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
	}
	if (D == 0) {
		x1 = x2 = (-b) / (2 * a);
	}
	if (D < 0) {
		cout << "Cреди действительных чисел корней нет";

	}
	cout << x1 << endl << x2;
}
template <typename A, typename B>
void sqr_f(A a, B b, B c) {
	setlocale(LC_ALL, "rus");
	int D = pow(b, 2) - 4 * a*c;
	float x1 = 0;
	float x2 = 0;
	if (D > 0) {
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
	}
	if (D == 0) {
		x1 = x2 = (-b) / (2 * a);
	}
	if (D < 0) {
		cout << "Cреди действительных чисел корней нет";

	}
	cout << x1 << endl << x2;
}
template <typename A, typename B>
void sqr_f(B a, A b, B c) {
	setlocale(LC_ALL, "rus");
	int D = pow(b, 2) - 4 * a*c;
	float x1 = 0;
	float x2 = 0;
	if (D > 0) {
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
	}
	if (D == 0) {
		x1 = x2 = (-b) / (2 * a);
	}
	if (D < 0) {
		cout << "Cреди действительных чисел корней нет";

	}
	cout << x1 << endl << x2;
}



int main()
{

	sqr_f(3, 8, 1);



}

