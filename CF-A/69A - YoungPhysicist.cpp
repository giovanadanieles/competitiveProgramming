#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const agrv[]){
	int n, x_, y_, z_, x = 0, y = 0, z = 0;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> x_ >> y_ >> z_;

		x += x_;
		y += y_;
		z += z_;
	}

	if(x == y && y == z && z == 0) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}