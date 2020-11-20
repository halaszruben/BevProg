#include "std_lib_facilities.h"

ostream& print_array(ostream& os, int* a, int n)
{
	for(int i = 0; i < n; ++i)
		os << a[i] << endl;
	return os;
}

int main()
{
	int a = 7;
	//elkerjuk az a integer cimet az & jellel
	int *p1 = &a;
	cout << "the value of the p1 pointer: " << p1 << " and p1 pointer points to the element: " << *p1 << endl; 
	cout << endl;

	int *p2 = new int[7] {1, 2, 4, 8, 16, 32, 64};
	cout << "the value of the p2 pointer: " << p2 << endl;
	for(int i=0; i<7; ++i)
		cout << p2[i] << endl;
	cout << endl;

	//mivel p3-ban elmentettuk a p2-t, majd p2-ben elmentjuk p1, de p2-be bementjuk p3, ezert mikor p2= p3 akkor ugyancsak sajat onmagara fog mutatni
	int* p3 = p2;
	p2 = p1;
	p2 = p3;
	cout << "the value of the p1 pointer: " << p1 << " and p1 pointer points to the element: " << *p1 << endl; 
	cout << "the value of the p2 pointer: " << p2 << " and p2 pointer points to the element: " << *p2 << endl; 
	cout << endl;

	delete[] p2;

	cout << "Cout after the copy\n";
	p1 = new int[10] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	p2 = new int[10];
	for(int i = 0; i < 10; ++i)
		p2[i]=p1[i];
	for(int i = 0; i < 10; ++i)
		cout << p2[i] << endl;
	delete[] p2;
	delete[] p1;
	cout << endl;

	cout << "vector cout\n";
	vector<int> v1 {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	vector<int> v2(10);
	v2=v1;
	for(auto v : v2)
		cout << v << endl;
	cout << endl;


	return 0;
}