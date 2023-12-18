#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 123457
using namespace std;

typedef long long ll;
int N, a, p, wolf[MAX], island[MAX];
ll answer;
vector<int> v[MAX];
char animal;

long long DFS(int startX)
{
	int vSize = v[startX].size();

	if (vSize == 0)
	{
		if (wolf[startX])
			return 0;
		else
			return island[startX];
	}
	long long tempResult = 0;

	for (int i = 0; i < vSize; i++)
	{
		int nx = v[startX][i];
		tempResult += DFS(nx);
	}
	if (wolf[startX])
	{
		tempResult -= island[startX];
	}
	else
		tempResult += island[startX];
	if (tempResult < 0)
		return 0;
	else
		return tempResult;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	for (int i = 2; i <= N; i++)
	{
		cin >> animal >> a >> p;
		if (animal == 'W')
			wolf[i] = true;
		island[i] = a;
		v[p].push_back(i);
	}
	cout << DFS(1);
}