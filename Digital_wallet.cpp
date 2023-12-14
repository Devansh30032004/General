#include <bits/stdc++.h>
using namespace std;

#define int long long
#define el cout << "\n";
#define pii pair<int, int>
#define YES cout << "YES" << endl;
#define Yes cout << "Yes" << endl;
#define NO cout << "NO" << endl;
#define No cout << "No" << endl;
#define vi vector<int>
#define vii vector<pair<int, int>>

bool cmp(const pii &a, const pii &b)
{
    if (a.first != b.first)
        return (a.first > b.first);
    else
        return (a.second < b.second);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r, c, k;
    cin >> r >> c >> k;

    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    int brr[c] = {0};
    vi p;
    for (int i = 0; i < c; i++)
    {
        vii v1;
        for (int j = 0; j < r; j++)
        {
            v1.push_back({arr[j][i], j});
        }
        sort(v1.begin(), v1.end(), cmp);
        brr[i] = v1[0].first;
        p.push_back(v1[0].second);
    }

    int sum = 0;
    for (int i = 0; i < c - k + 1; i++)
    {
        vii v;
        for (int j = i; j <= i + k - 1; j++)
        {
            v.push_back({brr[j], j});
        }

        sort(v.begin(), v.end(), cmp);
        sum += v[0].first;
        arr[p[v[0].second]][v[0].second] = 0;
        vii v1;

        int y = v[0].second;
        for (int j = 0; j < r; j++)
        {
            v1.push_back({arr[j][y], j});
        }

        sort(v1.begin(), v1.end(), cmp);
        brr[y] = v1[0].first;
        p[v[0].second] = v1[0].second;
    }
    cout << sum;
    return 0;
}