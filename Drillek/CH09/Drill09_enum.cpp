#include "std_lib_facilities.h"

const vector<string> months = 
{
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
};

enum class Month {
	jan, feb, mar, apr, may, june, july, aug, sept, oct, nov, dec
};

Month operator++(Month& m)
{
	//month egyenlo dec  ha igen ez fut  ellenben ez
	m = (m==Month::dec) ? Month::jan : Month(int(m)+1);
	return m;
}


//ezzl mukodtetjuk a monthra '<<'
ostream& operator<<(ostream& os, Month m)
{
	return os << months[int(m)];
}

int main(){

	Month m = Month::jan;
	cout << m << endl;
	++m;
	cout << m << endl;
	
	Month m2 = Month::dec;
	cout << m2 << endl;
	++m2;
	cout << m2 << endl;

	return 0;
}