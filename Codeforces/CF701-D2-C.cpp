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
set<char> st;
set<char> ::iterator it;
map<char, int> mp;
map<char, int> ::iterator itr;
vector<pair<int, int>> v;
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	string s;
	int a;
	cin >> a >> s;
	for (int i = 0; i < s.size(); i++)
		st.insert(s[i]);
	int l = 0, r = 0, mni = INT_MAX, sum = 0;
	int q = 1;
	while (l < s.size() && r < s.size()) {
		if (mp[s[r]] == 0 && q == 1)
			sum++;
		if (q == 1)
			mp[s[r]]++;
		if (sum < st.size()) {
			r++;
			q = 1;
		}
		else {
			mp[s[l]]--;
			mni = min(mni, r - l + 1);
			q = -1;
			if (mp[s[l]] == 0)
				sum--;
			l++;
		}

	}

	cout << mni << endl;
}
