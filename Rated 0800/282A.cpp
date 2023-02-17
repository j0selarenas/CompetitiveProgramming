#include <iostream>
#include <string>
using namespace std ;

// Bit++
int main()
{
	int n ;
	int output = 0 ;
	cin >> n ;
	for (int i = 0; i < n; i++)
	{
		string input ;
		cin >> input ;
		if (input.find("+") != string::npos)
			output ++ ;
		else
			output -- ;
	}
	cout << output ;
	return 0 ;
}