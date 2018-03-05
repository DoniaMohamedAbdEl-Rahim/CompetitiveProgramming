#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<sstream>
#include<iomanip>
#include <utility>
#include<map>
#include<set>
#include<iterator>
#include<stack>
#include<bitset>
#include<queue>
#include<deque>
#define all(v) ((v).begin()) , ((v).end())
#define sz(v) ((int)((v).size()))
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
set<string> st;
set<string> ::iterator it;
map<string, int> mp;
map<string, int> ::iterator itr;
vector<long long> v;
vector<long long> vc;
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	int t;
	string s;
	cin >> t;
	while (t--) {
		cin >> s;
	
		if (s.size() > 3) {
			cout << 3 << endl;
			continue;
		}
		if ((s[0] == 'o' && s[1] == 'n') || (s[1] == 'n' && s[2] == 'e') || (s[0] == 'o'&& s[2] == 'e')) {
			cout << 1 << endl;
			continue;
		}
		if ((s[0] == 't' && s[1] == 'w') || (s[1] == 'w' && s[2] == 'o') || (s[0] == 't'&& s[2] == 'o')) {
			cout << 2 << endl;
			continue;
		}

	}

}
