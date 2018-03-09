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
stack<char> stk;
vector<int> v;
deque<int> dq;
queue<int> q;
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	int a;
	while (cin >> a && a) {
		for (int i = 1; i <= a; i++)
			dq.push_back(i);

		while (dq.size() > 1) {
			q.push(dq.front());
			dq.pop_front();
			int a = dq.front();
			dq.pop_front();
			dq.push_back(a);
		}
		if (q.empty()) {
			cout << "Discarded cards:";
			cout << endl;
			cout << "Remaining card: " << dq.front() << endl;
			dq.pop_front();
			continue;
		}
		cout << "Discarded cards: ";

		while (!q.empty()) {
			cout << q.front();
			q.pop();
			if (q.size() > 0)
				cout << ", ";
		}
		cout << endl;
		cout << "Remaining card: " << dq.front() << endl;
		dq.pop_front();

	}

}

