#include <iostream>
int main()
{
	const int n = 9;
	int i;
	int a[n];
	int mul = 1;
	for (i = 0; i < n; ++i)
		std::cin >> a[i];
	for(i=0;i<n;++i)
		if(a[i]<15 && a[i]%3==0)
		{
			mul *= a[i];
		}
				std::cout << mul << std::endl;

	return 0;
}
