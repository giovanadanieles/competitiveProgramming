#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int n, m, a;
	long long int ans;

	cin >> n >> m >> a;

	ans = ceil((float)n/a) * ceil((float)m/a);

	cout << ans << endl;

	return 0;
}