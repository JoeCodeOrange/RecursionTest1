//TO DO YOUR NAMES

//David Reyes
//Jose Elizondo

#include <iostream>
#include <string>

using namespace std;

// Write a method ‘void lineOfStars(int n)’ that prints a line of n stars.  
// You may not use a loop.
void lineOfStars(int n) {

	if (n == 0)
	{
		return;
	}
	else
	{
		cout << "*";
		lineOfStars(n - 1);
	}
}

// compute the x to the power of n recursively

int power(double x, int n) {

	if (n == 0)
	{
		return 1;
	}
	else
	{
		return x * power(x, n - 1);
	}
}


/*
Write a method ‘void stars(int n)’ that prints the weird shape below.
You may not use a loop.  You may call ‘lineOfStars’ as a subroutine.

stars(4);

should display:

****
***
**
*
*
**
***
****

*/
void stars(int n) {

	//********* TO DO **************
	if (n == 0)
	{
		return;
	}
	else
	{
		lineOfStars(n);
		cout << endl;
		stars(n-1);
		lineOfStars(n);
		cout << endl;
		
	}

}



// ##### CHECKING WHETHER A STRING IS A PALINDROME (the string and its reverse are similar) #####
//
// Hint 1: you can call s.front() to get the first character of string and s.back() to get the last one
// Hint 2: s.substr(i,j) gives you the substring of s. For example if s = Hello, s(1,s.length()-1) gives you ello
bool is_palindrome(string s)
{
	//********* TO DO **************


	if (s.front() == s.back()) {
		if (s.length() > 2)
		{
			return is_palindrome(s.substr(1, s.length() - 2));
		}
		if (s.length() <= 2)
		{
			return true;
		}
		
	}
	else {
		return false;
	}	
}


// ##### REVERSING A STRING #####
//
string reverse(string s)
{
	//********* TO DO **************

	if (s.length() == 1)
		return s;
	if (s.length() == 0)
		return s;


	return s.back() + reverse(s.substr(1, s.length() - 2)) + s.front();
}

int main() {

	lineOfStars(5);  //   should display: *****
	cout << endl;

	//system("pause");
	stars(4);
	
	cout << power(3, 3) << endl; // should be 27
	//system("pause");
	cout << is_palindrome("foobar") << " should be 0" << endl;
	cout << is_palindrome("banana") << " should be 0" << endl;
	cout << is_palindrome("bananab") << " should be 1" << endl;
	cout << is_palindrome("racecar") << " should be 1" << endl;
	// system("pause");

	cout << "reverse of Hello is " << reverse("Hello") << endl;

	system("pause");

}