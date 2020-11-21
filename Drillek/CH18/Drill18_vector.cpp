#include "std_lib_facilities.h"

vector<int> gv {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(vector<int> fv)
{
	cout << "Print in the function: \n";
	vector<int> lv(10);
	lv = fv;

	for(auto v : lv)
		cout << v << ' ';
	cout << endl;

	vector<int> lv2 = fv;

	for(auto v : lv2)
		cout << v << ' ';
	cout << endl;

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
	f(gv);

	vector<int> vv(10);
	for(int i = 0; i < vv.size(); ++i)
	{
		vv[i] = factorial(i + 1);
	}

	cout << "Factorial array print!\n";
	f(vv);

	return 0;
}