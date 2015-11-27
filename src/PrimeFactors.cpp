#include <iostream>
#include <sstream>
#include <cmath>
#include <vector>

using namespace std;

int factors(int n)
{
	int z = 2;
	int last = 0;
	int factors = 0;
	
	while (z * z <= n)
	{
		if (n % z == 0)
		{
			if (last != z)
			{
				last = z;
				factors++;
			}
			n /= z;
		}
		else
		{
			z++;
		}
	}
	if (n > 1)
	{
		if (last != n)
		{
			last = n;
			factors++;
		}
	}
	return factors;
}

int main()
{
	int n;
	cin >> n;
	cout << factors(n) << endl;
	return 0;
}