#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll a, b;
	cin >> a >> b;

	if (b <= 3) {
		cout << 0;
		return 0;
	}

	ll l, r;
	if (0 == a % 2) {
		l = (a - 2) / 2;
	}
	else {
		l = (a - 1) / 2;
	}

	r = b / 2;

	auto s1 = r * (r + 1);
	auto s2 = l * (l + 1);

	auto ans = s1 - s2;
	if (a <= 2) {
		ans -= 2;
	}
	cout << ans;

	return 0;
}