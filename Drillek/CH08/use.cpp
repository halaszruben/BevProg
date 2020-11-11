#include "std_lib_facilities.h"
#include "my.h"

int foo;

int swap_v(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout << "swap_v-ben: " << a << ' ' << b << '\n';
	return a, b;
}

int swap_r(int& a, int& b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout << "swap_r-ben: " << a << ' ' << b << '\n';
	return a, b;
}

int swap_cr(int& a, int& b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout << "swap_cr-ben: " << a << ' ' << b << '\n';
	return a, b;
}

int main()
{
	foo = 7;
	print_foo();
	print(99);
	int x1=7;
	int y1=9;
	int x2=7;
	int y2=9;
	cout << "mainben: " << x1 << ' ' << y1 << '\n';
	swap_v(x1,y1);
	cout << "swap_v mainben: " << x1 << ' ' << y1 << '\n';
	swap_r(x2,y2);
	cout << "swap_r mainben: " << x2 << ' ' << y2 << '\n';

	cout << "\n\n\n";
	swap_v(7,9);
	cout << "swap_v mainben: " << '7' << ' ' << '9' << '\n';
	//swap_r(7,9); nem fut le
	//cout << "swap_r mainben: " << x << ' ' << y << '\n';
	
	cout << "\n\n\n";
	const int cx1=7;
	const int cy1=9;
	cout << "mainben: " << x1 << ' ' << y1 << '\n';
	swap_v(cx1,cy1);
	cout << "swap_v mainben: " << cx1 << ' ' << cy1 << '\n';
	const int cx2=7;
	const int cy2=9;
	//swap_r(cx2,cy2); nem mukodik egy const erteket nem lehet referencianak atadni
	//cout << "swap_r mainben: " << cx2 << ' ' << cy2 << '\n';

	cout << "\n\n\n";
	swap_v(7.7,9.9); // egeszkent veszi es nem doublekent
	cout << "swap_v mainben: " << "7.7" << ' ' << "9.9" << '\n';

	cout << "\n\n\n";
	double dx1 = 7.7;
	double dy1 = 9.9;
	double dx2 = 7.7;
	double dy2 = 9.9;
	cout << "mainben: " << dx1 << ' ' << dy1 << '\n';
	swap_v(dx1,dy1);
	cout << "swap_v mainben: " << dx1 << ' ' << dy1 << '\n';
	//swap_r(dx2,dy2);
	//cout << "swap_r mainben: " << dx2 << ' ' << dy2 << '\n';

	cout << "\n\n\n";
	swap_v(7.7,9.9);
	cout << "swap_v mainben: " << "7.7" << ' ' << "9.9" << '\n';
	//swap_r(7.7,9.9);
	//cout << "swap_r mainben: " << x << ' ' << y << '\n';

	return 0;
}