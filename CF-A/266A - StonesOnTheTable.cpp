#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	string v; cin >> v;
	int solve = 0;

	int i = 0, j = 1;
	while(j < n){
		while(v[i] == '!') i++;

		if(v[i] == v[j]){
			v[j] = '!';
			solve++;
			j++; 
		}
		else{
			i++; j++;
		}
	}

	cout << solve << endl;

	return 0;
}