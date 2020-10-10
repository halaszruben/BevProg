#include "std_lib_facilities.h"

int main()
{
	//double elso;
	//double masodik;
	double szam;
	double min=0, max=0;
	string mertekegyseg;
	double sum=0;
	int k=0;
	vector <double> v;

	// 1-tol 5-ig
	/*while(cin >> elso >> masodik)
	while(cin >> szam)
	{

		cout << elso << " " << masodik << "\n";

		if(elso == masodik)
			cout << "the numbers are equal\n";
		else
		{
			if(elso > masodik)
				cout << "the smaller value is: " << masodik << "\n" << "the larger value is: " << elso << "\n";

			else
				cout << "the smaller value is: " << elso << "\n" << "the larger value is: " << masodik << "\n";
		
			if(abs(elso - masodik) < 0.01)
				cout << "the numbers are almost equal\n";
		}
		

		
		//cin >> kilep;
	}
	*/

	//6-tol
	
	while(cout << "Enter a number!\n" && cin >> szam)
	{
		cout << szam <<" \n";
		//cin >> mertekegyseg;

		//azert irtam ezt mert hogyha 0-nal nem adok kisebb erteket akkor egy olyan szam lesz a legkisebb amit megsem adtam 
		//es ugyan ez forditva a legnagyobra is ervenyes
		if(min == 0 && max == 0)
		{
			min = szam;
			max = szam;
			cout <<"It's the smallest and the largest number so far!\n";
		}

		if(min > szam)
		{
			min = szam;
			cout << "The smallest so far!\n";
		}
		if(max < szam)
		{
			max = szam;
			cout << "The largest so far!\n";
		}

		cout << "Enter a unit such as: m, cm, in, ft!\n";
		cin >> mertekegyseg;

		if(mertekegyseg == "m")
		{
			cout << szam << mertekegyseg << "\n";
			v.push_back(szam);
		}
		else if(mertekegyseg == "cm")
		{
			cout << szam << mertekegyseg << " = " << szam/100 << "m\n";
			szam = szam/100;
			v.push_back(szam);

		}
		else if(mertekegyseg == "in") 
		{
			cout << szam << mertekegyseg << " = " << szam*0.0254 << "m\n";
			szam= szam*0.0254;
			v.push_back(szam);
		}
		else if(mertekegyseg == "ft")
		{
			cout << szam << mertekegyseg << " = " << szam*0.3048 << "m\n";
			szam = szam*0.3048;
			//v.push_back(szam*0.3048);
			v.push_back(szam);
		}
		else
			error("You have given a wrong unit!");

		k++;
		sum += szam;

	}
	cout << "The smallest number: " << min << "\n";
	cout << "The largest number: " << max << "\n";
	cout << "The number of values entered: " << k << "\n";
	//cout << "The number of values entered: " << v.size() << "\n";
	cout << "The sum of the values entered in meter: " << sum << "\n";
	
	sort(v);

	//cout << "A vektorban az ertekek!\n";
	cout << "In the vector the numbers are in order!\n";
	for(int i=0; i<v.size(); i++)
		cout << v[i] << "\t";
	cout << "\n";
	
	return 0;
} 

// abs= pl: int n=-23 cout << n; a kepernyon 23 jelenik meg 