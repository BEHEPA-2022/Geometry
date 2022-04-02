#include<iostream>
using namespace std;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define ROMB
#define SQUARE_1

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите число: "; cin >> n;

#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif SQUARE

#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif TRIANGLE_1

#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif TRIANGLE_2

#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "  ";
		}
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif TRIANGLE_3

#ifdef TRIANGLE_4
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n - 1; j++)
		{
			cout << "  ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif TRIANGLE_4

#ifdef ROMB
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " ";cout << "/";
		for (int j = 0; j < i; j++)cout << "  ";cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " ";cout << "\\";
		for (int j = i; j < n-1; j++)cout << "  ";cout << "/";
		cout << endl;
	}
#endif ROMB

#ifdef SQUARE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//cout << "* ";
			//if (i % 2 == j % 2 )cout << "+ ";else cout << "- ";
			//(i % 2 == j % 2) ? cout << "+ " : cout << "- ";
			//	condition ? value1 : value2; - value должны быть одного типа
			cout << (i % 2 == j % 2 ?  "+ " : "- ");
		}
		cout << endl;
	}
#endif SQUARE_1
}