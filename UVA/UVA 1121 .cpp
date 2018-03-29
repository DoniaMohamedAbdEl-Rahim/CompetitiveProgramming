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
map<char, int> mp;
map<char, int> ::iterator itr;
vector<pair<int, int>> v;
using namespace std;
int arr[100000];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	int n, s;
	while (cin >> n >> s) {
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		int l = 0, r = 0, sum = 0, m = 0, mni = 1000000; 
		while (l < n) {
			while (sum < s && l<n && r<n) {
				sum += arr[l++]; 
				m++;
			} 
			if (m <= mni && sum>=s)
				mni = m;
			l = r + 1;
			r = l;
			m = 0, sum = 0;
		}
		if(mni==1000000)
		cout<<0<<endl;
		else
		cout << mni << endl;
	}

}
