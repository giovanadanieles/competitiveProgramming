#include <bits/stdc++.h>
using namespace std;

/*int main(){
	int y, w, solve; 

	cin >> y >> w;

	solve = 6 - max(y, w) + 1;

	if(solve % 6 == 0) cout << "1/1" << endl;
	else if(solve % 3 == 0) cout << solve / 3 << "/2" << endl;
	else if(solve % 2 == 0) cout << solve / 2 << "/3" << endl;
	else cout << solve << "/6" << endl;

	return 0;
}*/

//Version with Greatest Common Denominator (GCD):
int gcd(int a, int b){
	return b == 0 ? a : gcd(b, a % b); 
}

int main(){
	int y, w, solve;

	cin >> y >> w;

	solve = 6 - max(y, w) + 1;

	cout << solve / gcd(solve, 6) << "/" << 6 / gcd(solve, 6) << endl;

	return 0;
}
