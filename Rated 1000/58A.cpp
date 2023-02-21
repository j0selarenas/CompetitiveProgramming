#include <bits/stdc++.h>
using namespace std;

void solver(){
	string out = "" ;
	string s ;
	cin >> s ;
	int h = 0 ;
	int e = 0 ;
	int l = 0 ;
	int o = 0 ;

	for (int i = s.length()-1; i >= 0; --i){
		if (s[i] == 'o' && o < 1){
			out += 'o' ;
			o ++ ;
		}
		else if (s[i] == 'l' && l < 2 && o == 1){
			out += 'l' ;
			l ++ ;
		}
		else if (s[i] == 'e' && e < 1 && l == 2){
			out += 'e' ;
			e ++ ;
		}
		else if (s[i] == 'h' && h < 1 && e == 1){
			out += 'h' ;
			h ++ ;
		}
	}

	if (out == "olleh")
		cout << "YES" ;
	else
		cout << "NO" ;
}

int main(){
	solver() ;
}