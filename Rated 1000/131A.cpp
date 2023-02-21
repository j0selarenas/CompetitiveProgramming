#include <bits/stdc++.h>
using namespace std;

void solver(){
	string s ;
	cin >> s ;

	string fixed = "" ;

	int length = s.length() ;
	int count = 0 ;

	for (int i = 0; i < length; ++i)
	{
		if (i > 0){
			if (isupper(s[i]))
				count ++ ;
		}
		if (isupper(s[i]))
			fixed += tolower(s[i]) ;
		if (islower(s[i]))
			fixed += toupper(s[i]) ;
	}

	if (count == length - 1)
		cout << fixed ;
	else
		cout << s ;
}

int main(){
	solver() ;
}