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
set<pair<int, int>> st;
set<pair<int, int>> ::iterator it;
map<int, int> mp;
map<int, int> ::iterator itr;
int arr[1000];
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	int a, l, S_cri = 0;
	cin >> a >> l;
	l--;
	for (int i = 0; i < a; i++)
		cin >> arr[i];
	S_cri += arr[l];
	for (int i = 1; i <= a; i++) {
		if ((l + i) < a && (l - i) >= 0) {
			if (arr[l - i] + arr[l + i] == 2)
				S_cri += 2;
		}
		else if ((l + i) < a)
			S_cri += arr[l + i];
		else if ((l - i) >= 0)
			S_cri += arr[l - i];
	}
	cout << S_cri << endl;
}
