//Завдання 2, друга умова
#include <iostream>
#include <Windows.h>
#define USE_MATH_DEFINES
#include <cmath>
using namespace std;
/*
int main()
{
	double PI = 3.14159265358979323846;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int b, x, Z;
	printf("Input x: ");
	scanf_s("%i", &x);
	printf("Input Z: ");
	scanf_s("%i", &Z);
	b = ((10 * x + cos(135)) / pow(x, 4) / 2 + ((sin(pow(Z, 3))) * (sin(pow(Z, 3)))))-tan(3 * PI / 2);
	printf("Result: %i", b);
}
*/


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a, x, y;
	printf("Input x: ");
	scanf_s("%i", &x);
	printf("Input y: ");
	scanf_s("%i", &y);
	a = (exp(3) + pow(x, 2) + 4 / y) / (cbrt(x)+1/(pow(x,2)+4));
	printf("Result: %i", a);
}
/*27. Для пошиття одного костюма потрібно  s м  тканини.
Скільки метрів тканини було в рулоні, якщо пошили  t  костюмів і залишилось  g м  тканини ? 
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int s, t, g, x;
	cout << "Скільки потребується метрів тканини для пошиття одного костюму: ";
	cin >> s;
	cout << "Скільки було пошито костюмів: ";
	cin >> t;
	cout << "Скільки метрів тканини залишилось: ";
	cin >> g;
	x = (t * s) + g;
	cout << "Всього метрів тканини в рулоні було: " << x;
}*/