
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	cout << "How many lines do you want in the shape?\n";
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < n - i; j++)
			cout << " ";
		for (int j = 0; j < i * 2 - 1; j++)
			cout << "*";
		cout << endl;
	}
	system("pause");
	return 0;
}