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
	int a, b;
	while (cin >> a && a) {
		for (int i = 0; i < a; i++) {
			cin >> b;
			pq.push((-b));
		}
		/*	while(!pq.empty()){
		cout<<pq.top()<<" ";
		pq.pop();} */

		int t = 0;
		while (pq.size() > 1) {
			int x, y;
			x = (-1)*pq.top();
			pq.pop();
			y = (-1)*pq.top();
			pq.pop();
			t += (x + y);
			pq.push((-(x + y)));
		}
		cout << t << endl;
		pq.pop();
	}
}
