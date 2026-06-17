#include <iostream>
using namespace std;

int main(){
	char ch;

	cout << "Enter an Alphabet: ";
	cin >> ch;

	if(ch >= 97 && ch <= 122 )
		cout << "Lowercase";
	else if(ch >= 65 && ch <= 90)
		cout << "Uppercase";
	else
		cout << "Not a valid Alphabet";

	return 0;
}