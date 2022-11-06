#include <iostream>
using namespace std;
int main() {
	setlocale(0, "rus");
	int N;
	cout << "¬ведите N (N > 2): ";
	cin >> N;
	if (N <= 2)
	{
		while (N <= 2)
		{
			cout << "¬ведите N (N > 2): ";
			cin >> N;
		}
	}
	int l = 1;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N-l; j++)
		{
			cout << " ";
		}
		for (int k = 1; k <=  l; k++)
			cout << "*";
		cout << "\n";
		l++;
	}
	return 0;
}