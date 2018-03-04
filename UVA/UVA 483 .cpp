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
map<int, int> mp;
map<int, int> ::iterator itr;
vector<long long> v;
vector<long long> vc;
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	string s;
	while (getline(cin, s)) {
		string str;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] != ' ')
				str += s[i];
			else {
				reverse(str.begin(), str.end());
				cout << str << " ";
				str = "";
			}
		}

		if (str != "") {
			reverse(str.begin(), str.end());
			cout << str;
		}
		cout << endl;
	}

}
