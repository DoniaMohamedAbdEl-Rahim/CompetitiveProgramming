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
int arr[2000];
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int a, b, l = -1;
		cin >> a >> b;
		for (int i = 0; i < a; i++)
			cin >> arr[i];
		for (int i = 0; i < (1 << a); i++) {
			int sum = 0, p = i, m = 0;
			while (p) {
				if (p & 1) sum += arr[m];
				p = (p >> 1);
				m++;
			}
			if (sum == b) {
				l = 1;
				break;
			}

		}
		if (l == 1)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;

	}

}

