#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto pd = int{ 0 };
	auto pp = int{ 0 };
	while (0 < (n--)) {
		string s;
		cin >> s;

		if ("D" == s) {
			++pd;
		}
		else {
			++pp;
		}

		if (2 == abs(pd - pp)) {
			break;
		}
	}

	cout << pd << ':' << pp;

	return 0;
}