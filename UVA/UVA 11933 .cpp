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
	int a, p;
	while (cin >> a && a) {
		p = a;
		while (a) {
			int y = a % 2;
			v.push_back(y);
			a /= 2;
		}
 
	//	reverse(v.begin(), v.end());
		int l = 1;
		int vis[100] = { 0 };
		for (int i = 0; i < v.size(); i++) {
			if (v[i] == 1) {
				vis[i] += l;
				l++;
			}
		}
 
		for (int i = 0; i < v.size(); i++) {
			if (vis[i] > 0 && vis[i] % 2 == 1)
				v1.push_back(v[i]);
			else v1.push_back(0);
		}
 
	//	reverse(v1.begin(), v1.end());
		int t = 1, y = 0;
		for (int i = 0; i < v1.size(); i++) {
			y += t*v1[i];
			t *= 2;
		}
		cout <<y << " " << p - y << endl;
		v.clear();
		v1.clear();
	}
 
}
