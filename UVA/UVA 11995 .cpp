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
set<string> s;
set<string> ::iterator it;
map<string, int> mp;
map<string, int> ::iterator itr;
queue<int> q;
stack<int> st;
priority_queue<int> pq;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	int a, b, c, qu = 0, sta = 0, pr = 0,l;
	while(cin>>a){
	    l=a;
	while (a--) {
		cin >> b >> c;
		if (b == 1) {
			q.push(c);
			st.push(c);
			pq.push(c);
			qu++,pr++,sta++;
		}
		else {
			if (!q.empty()) {
				if (c == q.front()) {
					qu++;
					q.pop();
				}
			}
			if (!st.empty()) {
				if (c == st.top()) {
					sta++;
					st.pop();
				}
				if (!pq.empty()) {
					if (c == pq.top()) {
						pr++;
						pq.pop();
					}
				}
			}
		}

	}
		if((qu==l && pr==l)|| (qu==l&&sta==l) || (pr==l&&sta==l))
			cout << "not sure" << endl;
		else if (qu==l)
			cout << "queue" << endl;
		else if (sta==l)
			cout << "stack" << endl;
		else if (pr==l)
			cout << "priority queue" << endl;
		else cout << "impossible" << endl;
		qu = 0, sta = 0, pr = 0;
		while (!q.empty())
			q.pop();
		while (!pq.empty())
			pq.pop();
		while (!st.empty())
			st.pop();
}
}
