#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(int argc, char* const argv[]){
	lli n;

	cin >> n;

	if(n % 2 == 0) cout << n / 2 << endl;
	else cout << -1 * (n + 1) / 2 << endl;

	return 0;
}