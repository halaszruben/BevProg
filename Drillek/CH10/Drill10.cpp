#include "std_lib_facilities.h"

struct Point
{
	double x, y;
};

int main()
try {

	double x, y;
	vector<Point> original_points;

	cout << "Give seven(7) 'x' 'y' pairs!\n";
	while( cin >> x >> y)
	{
		original_points.push_back(Point{x,y});
	}

	ofstream ost ("mydata.txt");
	if(!ost) 
		error("Can't open mydata.txt file: ");
	for(const auto& r: original_points)
		{
			ost << r.x << ' ' << r.y << endl;
		}
	ost.close();

	cout << "The values in the 'mydata.txt' after opening and reading from it:\n";
	vector<string> processed_points;
	vector<string> p;
	string line;
	ifstream ist ("mydata.txt");
	if(!ist) 
		error("Can't open mydata.txt file: ");
	else
	{
		while(getline(ist,line))
		{
			cout << line << endl;
			processed_points.push_back(line);
		}
	}

	cout << "The values in the 1st Vector: " << endl;
	for(const auto& r: original_points)
		cout << r.x << ' ' << r.y << endl;
		
	vector<double> v;
	cout << "The values in the 2nd Vector: " << endl;
	for(const auto& r: processed_points)
		cout << r << ' ' << endl;
	p = processed_points;

	if(processed_points != p)
		error("Something's wrong!");

	return 0;
}catch(runtime_error& e)
{
	cerr << "Error: " << e.what() << endl;
	return 1;
}catch(...)
{
	cerr << "Different error\n";
	return 0;
}