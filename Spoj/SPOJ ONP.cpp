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
queue<char> q;
stack<char> stk;
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			if (isalpha(s[i]))
				q.push(s[i]);
			else if (s[i] != ')' && s[i] != '(')
				stk.push(s[i]);
			else if (s[i] == ')') {
				while (!q.empty()) {
					cout << q.front();
					q.pop();
				}
				cout << stk.top();
				stk.pop();
			}
		}
		while (!q.empty()) {
			cout << q.front();
			q.pop();
		}
		while (!stk.empty()) {
			cout << stk.top();
			stk.pop();
		}
		cout << endl;
	}

}
