#include "std_lib_facilities.h"

int ga[10] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(int* af, int n)
{
	int la[10] = {};
	for(int i = 0; i < n; ++i)
		la[i] = af[i];

	cout << "Print in the function: \n";
	for(auto k : la)	//for(int i = 0; i < n; i++)
		cout << k << ' ';
	cout << endl;

	int* p = new int [n];

	for(int i = 0; i < n; ++i)
		p[i] = af[i];

	for(auto h : la)	//for(int i = 0; i < n; i++)
		cout << h << ' ';
	cout << endl;

	delete[] p;

}

int factorial(int n)
{
	if(n > 1)
		return n * factorial(n-1);
	else
		return 1;
}

int main()
{
	f(ga, 10);

	int aa[10] = { };	
	for(int i = 0; i < 10; ++i)
	{
		aa[i] = factorial(i + 1);
	}

	cout << "Factorial array print!\n";
	f(aa, 10);

	return 0;
}