#include<iostream>
#include<cmath>
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
set<int>st;
set<pair<long long, long long> >::iterator it;
map<int, int> mp;
map<pair<long long, long long>, long long> me;
map<pair<long long, long long>, long long> ::iterator itr;
vector<long long> v;
vector<long long> vc;
vector<long long> vr;
using namespace std;
int arr[1000005];
int main() {
	ios_base::sync_with_stdio(0);	cin.tie(NULL), cout.tie(NULL);
	int n, m, k, t,p=1;
	cin >> t;
	while (t--) { 

		cin >> n >> m >> k;
		for (int i = 0; i < n; i++)
			if (i < 3)
				arr[i] = i + 1;
			else arr[i] = 1 + ((arr[i - 1] + arr[i - 2] + arr[i - 3]) % m);

			int p1 = 0, p2 = 0, mni = 1000005;
			while (p1 < n && p2 < n) {
				if ((arr[p1]) > 0 && (arr[p1]) <= k && st.size() < k) {
					st.insert(arr[p1]);
					mp[arr[p1]]++;
					p1++;
				}
				else if (st.size() >= k) {
					if (p1 - p2 < mni)
						mni = p1 - p2;
					if (mp[arr[p2]] > 0)
						mp[arr[p2]]--;
					if (mp[arr[p2]] == 0) {
						st.erase(arr[p2]);
						mp.erase(arr[p2]);
					}
					p2++;
				}
				else p1++;
			}
cout<<"Case "<<p<<": ";
			if (mni != 1000005)
				cout << mni << endl;
			else cout << "sequence nai" << endl;
			st.clear();
			mp.clear();
p++;

	}
}


