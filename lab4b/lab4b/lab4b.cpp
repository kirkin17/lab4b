#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a[5], b[5];
	int tmp;
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
		if (a[i] == 0)
		{
			for (int k = 0; k <= 4; k++)
			{
				if (b[k] > 0) { a[i] = b[k]; b[k] = 0; break; }
			}
		}
		if (a[i] < 0) 
		{
			tmp = a[i];
			for (int k = 0; k <= 4; k++)
			{
				if (b[k] == 0) { b[k] = tmp; break; };
				if (b[k] > 0) 
				{ 
					a[i] = b[k]; 
					b[k] = tmp; 
					break; 
				}
			}
		}
	}
	for (int i = 0; i <= 4; i++)
	{
		if (a[i] < 0) { a[i] = 0; }
		if (b[i] > 0) { b[i] = 0; }
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
