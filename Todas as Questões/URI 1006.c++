#include <bits/stdc++.h>

using namespace std;

int main() {
	double a, b, c, m;

    cin >> a;
    cin >> b;
    cin >> c;

    m = (((a * 2) + (b * 3) + (c * 5)) / 10);
    cout << fixed << setprecision(1);
    cout << "MEDIA = " << m << endl;
    return 0;
}