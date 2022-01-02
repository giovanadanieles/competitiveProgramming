#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	unsigned int nDigits, div;
	string strDiv, ans = "";

	cin >> nDigits >> div;

	strDiv = to_string(div);

	if(nDigits < strDiv.size()){
		cout << -1 << endl;
	}
	else{
		ans += strDiv;

		while(ans.size() < nDigits){
			ans += "0";
		}

		cout << ans << endl;
	}

	return 0;
}