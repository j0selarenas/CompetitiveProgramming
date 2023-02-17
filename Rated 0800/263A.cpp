#include <bits/stdc++.h> 
using namespace std ;

// Beautiful Matrix
int main()
{
	string input ;
	cin >> input ;
	int size = input.length()-count(input.begin(), input.end(), '+') ;
	int array[size] ;
	int idx = 0;

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == '+')
			idx ++ ;
		else
			array[i - idx] = int(input[i]-'0') ;
	}

	sort((array), array + size) ;

	for (int i = 0; i < size; i++)
	{
		if (i != size-1)
			cout << array[i] << "+" ;
		else
			cout << array[i] ;
	}

	return 0 ;
}