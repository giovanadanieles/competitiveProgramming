#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int k, l, m, n, totalDragons, ans = 0;

	cin >> k >> l >> m >> n >> totalDragons;

	for(int i = 1; i <= totalDragons; i++){
		if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) ans++;
	}

	cout << ans << endl;

	return 0;
}