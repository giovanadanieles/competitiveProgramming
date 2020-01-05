#include <bits/stdc++.h>
using namespace std;

int main(){
	long int n; cin >> n;
	string g; cin >> g;
	int a = 0, d = 0;

	for(int i = 0; i < n; i++){
		g[i] == 'A' ? a++ : d++;
	}

	if(a > d) cout << "Anton" << endl;
	else if(d > a) cout << "Danik" << endl;
	else cout << "Friendship" << endl;

	return 0;
}