#include <bits/stdc++.h>
using namespace std;

void solver(){
	long long n, m, a, output ;
	cin >> n >> m >> a ;
	output = ceil((double)n / (double)a) * ceil((double)m / (double)a) ;
	cout << output ;
}

int main(){
	solver() ;
}