#include<bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(void)
{
	int N, K;
	cin >> N >> K;

	for(int i = 1; i <= N; ++i)
	{
		if(N%i == 0)
			K--;
		if(K == 0)
		{
			cout << i << endl;
			return 0;
		}
	}

	cout << 0 << endl;

	return 0;
}