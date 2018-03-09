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
int arr[10000][10000];
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	int a;
	while (cin >> a && a) {
		int s1 = 0, s2 = 0, l, m;
		for (int i = 1; i <= a; i++)
			for (int j = 1; j <= a; j++)
				cin >> arr[i][j];
		int M1[100] = { 0 }, M2[100] = { 0 };
		for (int i = 1; i <= a; i++)
			for (int j = 1; j <= a; j++) {
				M1[i] += arr[i][j];
				M2[i] += arr[j][i];
			}

		for (int i = 1; i <= a; i++) {
			if (M1[i] & 1) s1++, l = i;
			if (M2[i] & 1) s2++, m = i;
		}
		if (s1 == 0 && s2 == 0)
			cout << "OK" << endl;

		else if (s1 == 1 && s2 == 1)
			cout << "Change bit (" << l << "," << m << ")" << endl;

		else  cout << "Corrupt" << endl;
	}

}

