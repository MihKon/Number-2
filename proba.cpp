// proba.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include <stack>

using namespace std;
//int i = 1;
//const int n = 10;
//int a[n];

void F(int d)
{
	if (d % 9 == 0)
	{
		d -= (d / 9 - 1) * 9;
		d -= 8;
	}
	else
	{
		if (d % 2 == 0)
			d -= 9;
		else
			d -= 8;
	}
	if (d < 0)
		cout << "NO";
	else
	{
		if (d == 1)
			cout << "YES";
		else
			F(d);
	}
}


int main()
{
	/*int n, m, k;
	cin >> n >> m;
	
	cout << k;*/
	/*int m;
	for (i = 1; i <= n; i++)
	{
		a[i] = i;
	}
	perestanovka(1, n);*/
	/*setlocale(LC_ALL, "RUS");
	char p[2000], r;
	cin >> r;
	int k = 0;
	ifstream file;
	file.open("ab.txt");
	if (file.is_open())
	{
		for (int i = 0; !file.eof(); i++)
		{
			file >> p[i];
			k++;
			cout << p[i];
		}
	}
	file.close();
	cout << k;
	for (int i = 0; i < k; i++)
	{
		if (p[i] == ' ')
			p[i] = r;
		//cout << p[i];
	}
	ofstream file1;
	file1.open("ab.txt", ios_base::trunc);
	if (file1.is_open())
	{
		for (int i = 0; i < k; i++)
		{
			file1 << p[i];
		}
	}
	file1.close();*/
	/*stack <int> s;
	int n, i=0, a[1000];
	cin >> n;
	for (i = 0; i < n; i++) 
	{
		cin >> a[i];
	}
	int stack[500][500], j=0, k=0, p=0;
	stack[0][0] = a[0];
	for (i = 1; i < n; i++)
	{
		if (a[i] < a[i - 1])
		{
			j++;
			stack[k][j] = a[i];
		}
		else
		{
			k++;
			stack[k][0] = a[i];
		}
	}
	for (i = 0; i < k; i++)
	{
		for (i = 0; i < p; i++)
		{
			cout << stack[i][j]<<" ";
		}
		cout << endl;
	}*/
	/*int x;
	cin >> x;
	F(x);*/
	/*int a, b, c, n=0;
	cin >> a >> b >> c;
	int x = a + b * n;
	while (x <= c)
	{
		n++;
		x = a + b * n;
	}
	cout << n-1;*/
	int m, k = 0, j = 0;
	cin >> m;
	int x=0;
	if (m < 7)
		cout << k << endl << j;
	else
	{
		while (x < m)
		{
			j++;
			x = 4 * j;
		}
		while (x != m)
		{
			k++;
			j--;
			x = 3 * k + 4 * j;
		}
		cout << k << endl << j;
	}

}

//void perestanovka(int m, int n)
//{
//	int c = rand() % n + m;
//	int i = 1;
//	for (i; i <= n; i++)
//	{
//		if (i == m)
//		{
//			cout << c;
//		}
//		else
//		{
//			int t = a[i];
//			a[i] = a[m];
//			a[m] = t;
//			perestanovka(i+1, n);
//		}
//	}
//}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
