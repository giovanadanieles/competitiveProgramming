#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	char opt;
	string s1 = "qwertyuiop", s2 = "asdfghjkl;", s3 = "zxcvbnm,./", in, ans;
	map<char, pair<char, char>> m;

	for(unsigned int i = 0; i < s1.size(); i++){
		if(i == 0){
			m[s1[i]] = make_pair(' ', s1[i + 1]);
			m[s2[i]] = make_pair(' ', s2[i + 1]);
			m[s3[i]] = make_pair(' ', s3[i + 1]);
		}
		else if(i == s1.size() - 1){
			m[s1[i]] = make_pair(s1[i - 1], ' ');
			m[s2[i]] = make_pair(s2[i - 1], ' ');
			m[s3[i]] = make_pair(s3[i - 1], ' ');
		}
		else{
			m[s1[i]] = make_pair(s1[i - 1], s1[i + 1]);
			m[s2[i]] = make_pair(s2[i - 1], s2[i + 1]);
			m[s3[i]] = make_pair(s3[i - 1], s3[i + 1]);
		}
	}

	cin >> opt >> in;

	for(unsigned int i = 0; i < in.size(); i++){
		opt == 'R' ? ans += m[in[i]].first : ans += m[in[i]].second;
	}

	cout << ans << endl;

	return 0;
}