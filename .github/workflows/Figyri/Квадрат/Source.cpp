#include <iostream>
using namespace std;
int main() {
	setlocale(0, "rus");
	int N = 2;
	int a = 0;
	while (N < 3 && a != 3)
	{
		cout << "¬ведите N (N > 2): ";
		cin >> N;
		a++;
	}
	for (int i = 1; i <= N; i++)
		cout << "*";
	for (int i = 1; i <= N - 2; i++)
	{
		cout << "\n";
		cout << "*";
		for (int j = 1; j <= N - 2; j++)
			cout << " ";
		cout << "*";
	}
	cout << "\n";
	for (int i = 1; i <= N; i++)
		cout << "*";
	return 0;
}