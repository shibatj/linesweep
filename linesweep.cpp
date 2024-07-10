#include <bits/stdc++.h> // <- include everything
using namespace std;

using pii = pair<int, int>;

int main()
{
    int n;
    scanf("%d", &n);

    vector<pii> event;
    for (int i = 1; i <= n; ++i)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        event.push_back({a, 1}); // add person
        event.push_back({b, 2}); // remove person
    }

    return 0;
}