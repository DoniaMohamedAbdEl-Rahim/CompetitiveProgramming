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
queue<char> q;
stack<char> stk;
vector<int> v;
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	int b, n, dep, cre, value, ans[100], l;
	while (cin >> b >> n && b && n) {
		for (int i = 0; i < b; i++)
			cin >> ans[i];
		l = b;
		while (n--) {
			cin >> dep >> cre >> value;
			ans[dep - 1] -= value;
			ans[cre - 1] += value;
		}
		bool flag = true;
		for (int i = 0; i < l; i++)
			if (ans[i] < 0)
				flag = false;
		if (flag)
			cout << "S" << endl;
		else cout << "N" << endl;

	}
}
