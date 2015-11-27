#include <iostream>

using namespace std;

int main()
{
	int tank = 0;
	int buckets[5];
	for (int i = 0; i < 5; i++)
	{
		buckets[i] = 0;
	}
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		int min = buckets[0];
		int minAt = 0;
		for (int j = 0; j < 5; j++)
		{
			if (buckets[j] < min)
			{
				min = buckets[j];
				minAt = j;
			}
		}
		buckets[minAt] += x;
		if (buckets[minAt] >= 1000)
		{
			tank += 1000;
			buckets[minAt] = 0;
		}
	}
	cout << tank << endl;
	return 0;
}