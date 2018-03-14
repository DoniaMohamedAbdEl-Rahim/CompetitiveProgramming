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
vector<int> v;
vector<int> v1;
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	int a;
	cin >> a;
	while (a--) {
		int l;
		cin >> l;
		for (int i = 0; i < l; i++) {
			int p;
			cin >> p;
			v.push_back(p);
		}
		int sum = 0;
		for (int i = 0; i < v.size(); i++)
			for (int j = i + 1; j < v.size(); j++)
				if (v[j] < v[i]) {
					swap(v[j], v[i]);
					sum++;
				}
		cout << "Optimal train swapping takes " << sum << " swaps." << endl;
		v.clear();

	}
}
