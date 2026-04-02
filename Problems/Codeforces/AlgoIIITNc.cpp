#include <iostream>
#include <vector>

using namespace std;

long long MOD = 1e9 + 7;
typedef vector<vector<long long>> matrix;


matrix multiply(const matrix &a, const matrix &b)
{
    matrix c(3, vector<long long>(3, 0));
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 3; ++k)
            {
                c[i][j] = (c[i][j] + a[i][k] * b[k][j]) % MOD;
            }
        }
    }
    return c;
}


matrix power(matrix base, long long exp)
{
    matrix res(3, vector<long long>(3, 0));

    for (int i = 0; i < 3; ++i)
    {
        res[i][i] = 1;
    }

    while (exp > 0)
    {
        if (exp % 2 == 1)
        { 
            res = multiply(res, base);
        }
        base = multiply(base, base);
        exp /= 2;
    }
    return res;
}

void solve()
{
    long long n;
    cin >> n;

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    if (n == 2)
    {
        cout << 1 << endl;
        return;
    }


    matrix T = {
        {1, 1, 1},
        {1, 0, 0},
        {0, 1, 0}};

    
    matrix T_pow = power(T, n - 3);

    long long ans = (T_pow[0][0] + T_pow[0][1]) % MOD;

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}