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
	string s;
	int l = 0;

	while (getline(cin, s) && s != "DONE") {

		string str = "";
		for (int i = 0; i < s.size(); i++) {
			if (isalpha(s[i])) {
				s[i] = (tolower(s[i]));
				str += s[i];
			}
		}
		string y = str;
		reverse(y.begin(), y.end());

		if (y != str)
			cout <<"Uh oh.." << endl;
		else cout << "You won't be eaten!" << endl;


	}

}
