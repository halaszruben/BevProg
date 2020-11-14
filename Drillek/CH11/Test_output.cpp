#include "std_lib_facilities.h"

int main()
try {

	int birth_year = 2001;

	cout << "In decimal: \t\t" << birth_year << '\n'
		<< hex << "In hexadecimal: \t" << birth_year << '\n'
		<< oct << "In octal: \t\t" << birth_year << "\n\n\n";

	cout << showbase << dec;
	cout << "In decimal: \t\t" << birth_year << '\n';
	cout << noshowbase << dec;

	cout << showbase << hex;
	cout << hex << "In hexadecimal: \t" << birth_year << '\n';
	cout << noshowbase << dec;

	cout << showbase << oct;
	cout << oct << "In octal: \t\t" << birth_year << '\n';
	cout << noshowbase << dec;

	cout << "My age: 19\n\n";

	int a, b, c, d;
	cin >> a >> oct >> b >> hex >> c >> d;
	//kiiratom decimalisban 1234, majd octalban 1234 az 668 decimalban, majd kiiratom hexadecimalban az 1234, ami 4660 decimalban
	cout << '\n' << a << '\t'<< b << '\t'<< c << '\t'<< d << '\n' ;

	cout << "\n\n";
	cout << "In defaultfloat: \t\t" << 1234567.89 << '\n'
		<< fixed << "In fixed: \t\t\t" << 1234567.89 << '\n'
		<< scientific << "In scientific: \t\t\t" << 1234567.89 << "\n\n\n";

	cout << '|' << setw(7) << "Jake" << '|' << setw(7) << "Paul" 
         << '|' << setw(24) << "jkpaul@gmail.com"
         << '|' << setw(12) << "5687283005" << "|\n"
         << '|' << setw(7) << "Chris" << '|' << setw(7) << "Jones" 
         << '|' << setw(24) << "chris1234.com"
         << '|' << setw(12) << "5609001764" << "|\n"
         << '|' << setw(7) << "Josh" << '|' << setw(7) << "Wade" 
         << '|' << setw(24) << "wade_josh.com"
         << '|' << setw(12) << "5615326480" << "|\n"
         << '|' << setw(7) << "Alan" << '|' << setw(7) << "Warer" 
         << '|' << setw(24) << "alan_war12.com"
         << '|' << setw(12) << "5600043722" << "|\n"
         << '|' << setw(7) << "Jinna" << '|' << setw(7) << "Schick" 
         << '|' << setw(24) << "jinna.schick@gmail.com"
         << '|' << setw(12) << "5683256932" << "|\n";


	return 0;
}
catch(exception& e) {
    cerr << "Error: " << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "Something troubling occurred..\n";
    return 2;
}