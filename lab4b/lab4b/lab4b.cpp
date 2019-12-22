#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a[5], b[5];
	int tmpa,tmpb;
	//ввод
	cout << "Ввод матрицы А: \n";
	for (int i = 0; i <= 4; i++)
	{
		cin >> a[i];
	}
	cout << "Ввод матрицы B: \n";
	for (int i = 0; i <= 4; i++)
	{
		cin >> b[i];
	}


	for (int i = 0; i <= 4; i++)
	{
		if (a[i] < 0) 
		{ 
			tmpb = a[i];
			for (int k = 0; k <= 4; k++)
			{
				if (b[k] == 0) { b[k] = tmpb; break; };
				if (b[k] > 0) 
				{ 
					a[i] = b[k]; 
					b[k] = tmpb; 
					break; 
				}
			}
		}
		if (b[i] > 0) { tmpa = b[i]; };
	}


	//вывод

	cout << endl << "Результат: \n";
	for (int i = 0; i <= 4; i++)
	{
		cout << a[i] << endl;
	}
	cout << endl;
	for (int i = 0; i <= 4; i++)
	{
		cout << b[i] << endl;
	}
}
