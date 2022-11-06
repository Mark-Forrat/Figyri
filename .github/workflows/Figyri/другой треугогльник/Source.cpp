#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "rus");
	int N, k = 0, p = 0, z = 0;
	cout << "¬ведите N (N > 3 и нечетное): ";
	cin >> N;
	if (N <= 3 || N % 2 == 0)
	{
		while (N <= 3 || N % 2 == 0)
		{
			cout << "¬ведите N (N > 3 и нечетное): ";
			cin >> N;
		}
	}
	k = (N + 1) / 2;
	p = (N + 1) / 2 - 1;
	z = 1;
	for (int i = 1; i <= k; i++)
	{
		for (int j = 1; j <= p; j++)
			cout << " ";
		p--;
		for (int h = 1; h <= z; h++)
			cout << "*";
		z += 2;
		cout << "\n";
	}
}