#include <bits/stdc++.h>
using namespace std;

int main(){
	int k, r, flag = 0, solve = 0, val = 0;
	cin >> k >> r;

	while(flag == 0){	
		solve++;
		val += k;

		if(val % 10 == r || val % 10 == 0) flag = 1;	
	}

	cout << solve << endl;

	return 0;
}