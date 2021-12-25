#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int k, w;
	long long int n, value = 0;

	cin >> k >> n >> w;

	for(int i = 1; i <= w; i++) value += i;

	value *= k;

	if(n > value) cout << 0 << endl;
	else cout << value - n << endl;

	return 0;
}