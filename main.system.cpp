#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdio.h>
using namespace std;
int main(void)
{
	cout << "Welcome to LightBone (psOs)!\n";
	bad_l: cout << "Please select language:\n";
	cout << "a - English.\n";
	cout << "b - Polski.\n";
	char lang;
	cin >> lang;
	if (lang == a)
		cout << "Language: English\n";
	else if (lang == b)
		cout << "Ustawiony język: Polski.\n";
	else
	{
		cout << "You selected bad letter.";
		goto bad_l; // One time goto can be used...
	}
}
