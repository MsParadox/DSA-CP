
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;  
int main()
{
	long long  a, n, m; 
	cin >> n >> m >> a; 

	cout << (((n + (a - 1)) / a) * ((m + (a - 1)) / a)) << endl;
	
	return 0;
}
