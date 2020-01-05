#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c, sz, solve = 0;

	cin >> sz;

	for(int i = 0; i < sz; i++){
		cin >> a >> b >> c;

		if(a + b + c >= 2) solve++;
	}

	cout << solve << endl;

	return 0;
}