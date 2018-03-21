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
set<vector<vector<int>>>::iterator it;
map<string, int> mp;
map<string, int> ::iterator itr;
vector<long long> vc;
queue<char> q;
stack<char> stk;
vector<vector<int>> sol;
set<vector<vector<int>>> st;
vector<int>v1;
vector<int>v2;
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	string s, t;
	while (cin >> s >> t) {
		int l = 0, r = 0;
		while (l < s.size() && r < t.size()) {
			if (s[l] == t[r])
				l++;
			r++;
		}
		if (l == s.size())
			cout << "Yes" << endl;
		else cout << "No" << endl;

	}
}




