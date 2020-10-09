#include "std_lib_facilities.h"

int main()
try{

	//1
	//	!!Cout << "Success!\n";
	//cout << "Success!\n";

	//2
	//	!!cout << "Success!\n;
	//cout << "Success!\n";

	//3
	//	!!cout << "Success" << !\n"
	//cout << "Success" << "!\n";

	//4
	//	!!cout << success << '\n';
	//cout << "Success" << '\n';

	//5
	/*	!!string res=7;
	int res=7;
	vector <int> v(10);
	//v[5]=res;
	cout << "Success!\n";
	*/

	//6
	/*
	vector <int> v(10);
	//	!!v(5)=7;
	v[5]=7;
	//	!!if(v(5)!=7) cout << "Success!\n";
	if(v[5]==7)
		cout << "Success!\n";
	*/

	//7
	/*
	//	!!hianyzott a bool
	bool cond = true;
	if(cond)
		cout << "Success!\n";
	else
		cout << "Fail!\n";
	*/

	//8
	//	!!bool c = false;
	/*
	bool c = true;
	if(c)
		cout << "Success!\n";
	else
		cout << "Fail!\n";
	*/

	//9
	/*
	string s= "ape";
	//	!!boo c= "fool"<s;
	bool c= "fool"<s;
	//	!!if(c)
	if(!c)
		cout << "Success!\n";
	*/

	//10
	/*
	string s= "ape";
	//	!!if(s == "fool")
	if(s != "fool") // vagy csak if(s=="ape")
		cout << "Success!\n";
	*/

	//11
	/*
	string s = "ape";
	//	!!if(s == "fool")
	if(s != "fool")
	{
		//	!!cout < "Success!\n";
		cout << "Success!\n";
	}
	*/

	//12
	/*
	string s= "ape";
	//	!!if(s+"fool")
	if(s != "fool")
		{
			//	!!cout < "Success!\n";
			cout << "Success!\n";
		}
	*/

	//13
	/*
	vector <char> v(5);
	//	!!for (int i=0; 0<v.size(); ++i);
	for(int i=0; i<v.size(); ++i);
		cout << "Success!\n";
	*/

	//14
	/*
	vector <char> v(5);
	for(int i=0; i<=v.size(); ++i);
		cout << "Success!\n";
	*/

	//15
	/*
	string s = "Success!\n";
	//	!!for(int i=0; i<6; ++i) - ez mivel 1<6 csak az elso 6 elemet iratja ki
	for (int i=0; i<s.size(); ++i)
		cout << s[i];
	*/
	
	//16
	/*
	if(true)
	{
		//then cout << "Success!\n";
		cout << "Success!\n";
	}
	else 
		cout << "Fail!\n";
	*/

	//17
	/*
	int x = 2000;
	//	!!char c = x;
	int c = x;
	if(c == 2000)
		cout << "Success!\n";
	*/

	//18
	/*
	string s = "Success!\n";
	//	!!for(int i=0; i<10; ++i) -erre a peldara mukodik de mi van ha az s tobb karakterlanc 10-nel ezert
	for (int i=0; i<s.size(); ++i)
		cout << s[i];
	*/

	//19
	/*
	//	!!vector v(5);
	vector <int> v(5);
	for (int i=0; i<=v.size(); ++i);
		cout << "Success!\n";
	*/

	//20
	/*
	int i=0;
	int j=9;
	while(i<10)
	{
		//	!!++j;
		++i;
	}
	if(j<i)
		cout << "Success!\n";
	*/

	//21
	/*
	int x = 2;
	//	!!double d = 5/(x-2); - eleve nemjo mert 0-val nem lehet osztani
	double d = 5/x;
	//	!!if(d == 2*x+0.5) - egyik int masik double 
	if(d != 2*x+0.5)
		cout << "Success!\n";
	*/

	//22
	/*
	//	!!string <char> s = "Success!\n";
	string s = "Success!\n";
	//	!!for (int i=0; i<=10; ++i)
	for (int i=0; i<s.size(); ++i)
		cout << s[i];
	*/

	//23
	/*
	int i=0;
	//	!!hianyos j deklaracio
	int j=9;
	while(i<10)
	{
		//	!!++j;
		++i;
	}
	if(j<i)
		cout << "Success!\n";
	*/

	//24
	/*
	int x=4;
	//	!!double d=5/(x–2); - '–' nem kivonas jel
	double d = 5/(x-2);
	//	!!if(d = 2*x+0.5) - igy mukodik de helytelen a struktura
	//if(d == 2*x+0.5) - igy viszont nem mukodik
	if(d != 2*x+0.5)
		cout << "Success!\n";
	*/

	//25
	/*
	//	!!cin << "Success!\n";
	cout << "Success!\n";
	*/

	return 0;

}
catch(exception& e) //out_of_range; run_time_error
{
	cerr << "error: " << e.what() << "\n";
	return 1;
}
catch(...) //minden
{
	cerr << "Oops: unknown exception!\n";
	return 2;
}