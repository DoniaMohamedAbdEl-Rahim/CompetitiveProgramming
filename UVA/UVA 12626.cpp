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
set<char> st;
set<char> ::iterator it;
map<int, int> mp;
map<int, int> ::iterator itr;
vector<long long> v;
vector<long long> vc;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	int a, b = 100000;
	string str = "AGIMRT";
	cin >> a;
	for (int i = 0; i < a; i++) {
		string s;
		cin >> s;
		map<char, int> mm;
		map<char, int> ::iterator itt;
		for (int j = 0; j < s.size(); j++)
			mm[(s[j])]++;
		int c = 0, A, R;
		A = mm['A'];
		R = mm['R'];
		b = min((R / 2), (A / 3));
		for (itt = mm.begin(); itt != mm.end(); itt++) {
			if ((itt->first) == str[c]) {
				c++;
				if ((itt->second) < b)
					b = (itt->second);

			}
		}
		if (c == str.size())
			cout << b << endl;
		else cout << 0 << endl;

	}

}
