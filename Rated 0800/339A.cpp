#include <iostream>
#include <cmath>
using namespace std ;

// Helpful Maths
int main()
{
	int matrix[5][5] ;
	int x, y ;
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cin >> matrix[i][j] ;
			if (matrix[i][j] == 1)
			{
				x = j ;
				y = i ;
			}
		}
	}

	cout << abs(2-x)+abs(2-y) ;

	return 0 ;
}