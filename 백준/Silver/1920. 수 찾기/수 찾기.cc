#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main()
{   
	int N=0;
	int M=0;

	cin >> N;
	vector<int> v;
	int temp = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	cin >> M;
	int input = 0;
	for (int i = 0; i < M; i++)
	{
		scanf("%d", &input);
		printf("%d\n", binary_search(v.begin(), v.end(), input));
	}
	return 0;
}