#include <iostream>
#include <string>
using std::cin;
using std::cout;

int d1, d2, d3, d4, d5, r1, r2, r3, r4, r5;
d1 = 10;
d2 = 10;
d3 = 10;
d4 = 10;
d5 = 10;
r1 = 0;
r2 = 0;
r3 = 0;
r4 = 0;
r5 = 0;
int income[5] = { d1, d2, d3, d4, d5 };
int expenses[5] = { r1, r2, r3, r4, r5 };

int biggest(int birebi)
{
	for (int fi = 1; fi <= 5; fi++)
	{
		for (int se = 1; se <= 5; se++)
		{
			if (income[fi] - expenses[fi] > income[se] - expenses[se])
				birebi = fi;
			else
				birebi = se;
		}
	}
	return birebi;
}

int summary(int sumbi)
{
	for (int i = 0; i <= 4; i++)
	{
		cout << "Revenue from " << i + 1 << " barber shop is " << income[i] - expenses[i] << "\n";
		sumbi = sumbi + income[i] - expenses[i];
	}
	
	return sumbi;
}

int main()
{
	int sum, bire;
    bire = biggest(bire);
	sum = summary(sum);
	cout << "Total revenue is " << sum << "\n";


	cout << "Most profitable is " << bire << " barber shop";
	return 0;
}