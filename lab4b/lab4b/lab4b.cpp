#include <iostream>
using namespace std;

int main()
{
	int a[5], b[5];
	int tmpa,tmpb;
	cout << "Ввод матрицы А: \n";
	for (int i; i <= 5; i++)
	{
		cin >> a[i];
	}
	cout << "Ввод матрицы B: \n";
	for (int i; i <= 4; i++)
	{
		cin >> b[i];
	}
	for (int i; i <= 4; i++)
	{
		if (a[i] < 0) 
		{ 
			tmpb = a[i];
			if (b[i] == 0) { b[i] = tmpb; }
			else 
			{
				for (int k; k <= 4; k++)
				{
					if (b[k] == 0) { b[k] = tmpb; };
					if (b[k] > 0) 
					{ 
						tmpa = b[k];
						if (a[k] == 0) { a[k] = tmpa; }
						else 
						{
							for (int j; j <= 4; j++)
							{
								if (a[i]==0) {a[i]=tmpa }
								if (a[i]) 
							}
						}
					}
				}
			}
		};
		if (b[i] >= 0) { tmpa = b[i]; };
	}
}
