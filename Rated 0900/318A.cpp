#include <bits/stdc++.h>
using namespace std;

void solver(){
	long long n, k, odd ;
	cin >> n >> k ;

	if (n % 2 == 0)
		odd = ( n / 2 ) ;
	else
		odd = round( n / 2.0 ) ;

	if (k <= odd)
		cout << 2 * k - 1 ;
	else
		cout << 2 * ( k - odd ) ;
}

int main()
{
	solver() ;
}