#include <bits/stdc++.h> 
using namespace std ;

// Twins
int main()
{
	int n ;
	cin >> n ;
	int array[n] ;
	int ncoins = 0 ;

	int total = 0 ;
	int mymoney = 0 ;

	for (int i = 0; i < n; ++i)
	{
		cin >> array[i] ;
		total += array[i] ;
	}

	sort(array, array + n, greater<int>());

	for (int i = 0; i <= n; ++i)
	{
		if (mymoney > total){
			cout << ncoins ;
			return 0 ;
		}
		else
			ncoins ++ ;
		mymoney += array[i] ;
		total -= array[i] ;
	}
}