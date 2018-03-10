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
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	string s, str;
	while (getline(cin, s)) {
		str += s;
		str += " ";
	}
	string sty;
	for (int i = 0; i < str.size(); i++) {

		if (str[i] == ' '&& sty != "") {
			st.insert(sty);
			sty = "";
			continue;
		}
		else if (str[i] == '-' && str[i + 1] == ' ') {
			i++;
			continue;
		}
		else if (str[i] == '-' && str[i + 1] != ' ') {
			sty += str[i];
			continue;
		}
		if (isalpha(str[i]))
			sty += tolower(str[i]);
		else if (sty != "") {
			st.insert(sty);
			sty = "";
		}

	}
	if (sty != "")
		st.insert(sty);
	for (it = st.begin(); it != st.end(); it++) {
		string s = *it;
		if (isalpha(s[0]))
			cout << *it << endl;
	}

}
