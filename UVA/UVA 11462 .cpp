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
set<int> st;
set<int> ::iterator it;
map<int, int> mp;
map<int, int> ::iterator itr;
queue<int> q;
stack<int> stk;
priority_queue<int> pq;
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	int a;
	while (cin >> a && a) {
		for (int i = 0; i < a; i++) {
			int l;
			cin >> l;
			mp[l]++;
		}
		int y = 0;
		for (itr = mp.begin(); itr != mp.end(); itr++) {
			y++;
			int m = itr->second;
			while (m--) {
				cout << itr->first;
				if (y == (mp.size()) && m == 0)
					break;
				else cout << " ";
			}
		} cout << endl;
		mp.clear();
	}
}
