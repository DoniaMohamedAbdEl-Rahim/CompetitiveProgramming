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
map<string, int> mp;
map<string, int> ::iterator itr;
queue<int> q;
stack<int> stk;
priority_queue<int> pq;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	int a, b, c;
	while (cin >> a >> b && a&& b) {
	    int l=a,m=b;
		while (a--) {
			cin >> c;
			st.insert(c);
		}
		while (b--) {
			cin >> c;
			st.insert(c);
		}
		cout << (l + m) - (st.size()) << endl;
		st.clear();
	}
}
