#include <bits/stdc++.h>
using namespace std;

void solver(int n){
	int array[n] ;
	for (int i = 0; i < n; ++i){
		cin >> array[i] ;
	}

	sort((array), array + n) ;
	for (int i = 0; i < n; ++i)
	{
		cout << array[i] << " " ;
	}
}

int main(){
	int n ;
	cin >> n ;
	solver(n) ;
}