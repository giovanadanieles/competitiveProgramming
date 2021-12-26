#include <bits/stdc++.h>
using namespace std;

#define MAX 600

int main(int argc, char* const argv[]){
	string n1, n2;
	int ans[MAX];

	while(cin >> n1 && cin >> n2){
		reverse(n1.begin(), n1.end());
		reverse(n2.begin(), n2.end());

		memset(ans, 0, sizeof(ans));

		for(unsigned int i = 0; i < n2.size(); i++){
			for(unsigned int j = 0; j < n1.size(); j++){
				ans[i + j] += (n1[j] - '0') * (n2[i] - '0');
			}
		}

		for(int i = 0; i < MAX - 1; i++){
			ans[i + 1] += ans[i] / 10;
			ans[i] %= 10;
		}

		int i = MAX - 1;
		while(i > 0 && ans[i] == 0) i--;
		for(; i >= 0; i--) cout << ans[i];
		cout << endl;
	}

	return 0;
}