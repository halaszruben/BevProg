#include "std_lib_facilities.h"

int main()
{

	// #1, megszolitas
	string first_name;
	cout << "Enter the name of the person you want to write to\n";
	cin >> first_name;
	cout << "Dear " << first_name << ",\n";

	// #2, bevezetes a levelbe
	cout << "How are you? I am fine. I miss you. When will I see you again?\n";

	// #3 new friend name
	string friend_name;
	cout << "Please enter the name of another friend of yours: \n";
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n";

	// #4 male/female
	char friend_sex = 0;
	cout << "If your friend is male, please enter the 'm' letter or the 'f' letter if your friend is female!\n";
	cin >> friend_sex;

	if(friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to call me.\n";

	if(friend_sex == 'f')
		cout << "If you see " << friend_name << " please ask her to call me.\n";

	// #5 age of the person you write to
	int age;
	cout << "Write the age of the person you write to: \n";
	cin >> age;
	cout << "I hear you just had a birthday and you are " << age << " years old.\n";
	if(age <= 0 || age >= 110)
		simple_error("you're kidding!");

	// #6 a lot of if
	if(age < 12)
		cout << "Next year you will be " << age+1 <<".\n";
	if(age == 17)
		cout << "Next year you will be able to vote.\n";
	if(age > 70)
		cout << "I hope you are enjoying retirement.\n";

	// #7 farewell, signature
	cout << "Yours sincerely,\n" << first_name << "\n\n";

	return 0;
}