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
bool co(const pair<int, int>&c, const pair<int, int>&d)
{
	if (c.first < d.first)
		return true;

	else if (c.first == d.first)
		return c.second > d.second;

	else
		return false;
}
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	int s, n, x, y;
	cin >> s >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}
	sort(v.begin(), v.end(), co);

	for (int i = 0; i < n; i++) {
		if (s <= v[i].first) {
			cout << "NO" << endl;
			return 0;
		}
		s += v[i].second;
	}
	cout << "YES" << endl;
}
