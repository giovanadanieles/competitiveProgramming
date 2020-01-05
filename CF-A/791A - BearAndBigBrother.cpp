#include <bits/stdc++.h>
using namespace std;

int main(){
	int l, b; cin >> l >> b;
	int solve = 0;

	while(l <= b){
		solve++;
		l *= 3;
		b *= 2;
	}

	cout << solve << endl;

	return 0;
}