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
vector<long long> v;
vector<long long> vc;
queue<char> q;
stack<char> stk;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		map<string, string> str1;
		map<string, string> str2;
		map<string, string> added;
		map<string, string> removed;
		map<string, string> changed;
		map<string, string> ::iterator its1;
		map<string, string> ::iterator its2;
		map<string, string> ::iterator itadd;
		map<string, string> ::iterator itremove;
		map<string, string> ::iterator itchange;
		string s1, s2, sty, di;
		cin >> s1 >> s2;
		for (int i = 0; i < s1.size(); i++) {
			if (isalpha(s1[i]))
				sty += s1[i];
			else if (s1[i] == ':') {
				for (int j = i + 1; j < s1.size(); j++)
					if (s1[j] >= '0' && s1[j] <= '9')
						di += s1[j];
					else {
						i = j - 1;
						break;
					}
					str1[sty] = di;
					sty = "", di = "";
			}

		}
		sty = "", di = "";
		for (int i = 0; i < s2.size(); i++) {
			if (isalpha(s2[i]))
				sty += s2[i];
			else if (s2[i] == ':') {
				for (int j = i + 1; j < s2.size(); j++)
					if (s2[j] >= '0' && s2[j] <= '9')
						di += s2[j];
					else {
						i = j - 1;
						break;
					}
					str2[sty] = di;
					sty = "", di = "";
			}

		}
		for (its1 = str1.begin(); its1 != str1.end(); its1++) {
			int l = 0;
			for (its2 = str2.begin(); its2 != str2.end(); its2++) {
				if ((its1->first) == (its2->first)) {
					if ((its1->second) != (its2->second))
						changed[(its1->first)] += (its2->second);
					l++;
					break;
				}
			}
			if (l == 0)
				removed[(its1->first)] = "1";
		}

		for (its2 = str2.begin(); its2 != str2.end(); its2++) {
			int l = 0;
			for (its1 = str1.begin(); its1 != str1.end(); its1++) {
				if ((its1->first) == (its2->first)) {
					l++;
					break;
				}
			}
			if (l == 0)
				added[(its2->first)] = "1";
		}
		if (added.empty() && removed.empty() && changed.empty())
			cout << "No changes" << endl;
		else {
			if (!added.empty()) {
				cout << "+";
				int k = 0;
				for (itadd = added.begin(); itadd != added.end(); itadd++) {
					k++;
					cout << itadd->first;
					if (k != (added.size()))
						cout << ",";
				}
				cout << endl;
			}
			if (!removed.empty()) {
				cout << "-";
				int k = 0;
				for (itremove = removed.begin(); itremove != removed.end(); itremove++) {
					k++;
					cout << itremove->first;
					if (k != (removed.size()))
						cout << ",";
				}
				cout << endl;
			}
			if (!changed.empty()) {
				cout << "*";
				int k = 0;
				for (itchange = changed.begin(); itchange != changed.end(); itchange++) {
					k++;
					cout << itchange->first;
					if (k != (changed.size()))
						cout << ",";
				}
				cout << endl;
			}
		}
		cout << endl;
	}
}
