//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	long profit = 0;
//	long stock = 0;
//	long n, k;
//	cin >> n;
//	cin >> k;
//	long today;
//	long yesterday;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> today;
//
//		if (i != 1 && today >= yesterday + k && i != n)
//		{
//			if (stock == 0)
//			{
//				stock = 1;
//				profit -= today;
//			}
//		}
//		else if (i != 1 && today <= yesterday - k)
//		{
//			if (stock == 1)
//			{
//				stock = 0;
//				profit += today;
//			}
//		}
//		yesterday = today;
//	}
//	cout << profit << endl;
//	return 0;
//}