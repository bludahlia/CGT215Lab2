#include <iostream>
using namespace std;
int main()
{
	float A;
	float B;
	float C;
	cout << "How many letters are in your first name? ";
	cin >> A;
	cout << "How many letters are in your last name? ";
	cin >> B;
	C = (B - A);
	cout << "The difference in your names is: " << C << endl;
}