#include <iostream>
#include<math.h>
using namespace std;
bool isPrime(int n) {
	if (n < 2) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;
	int can = sqrt(n);
	for (int i = 3; i <=can ;i+=2) {
		if (n % i == 0) return false;
	}
	return true;
}
int main()
{
	int n;
	cin >> n;
	if (isPrime(n)) cout << "la so nguyen to";
	else cout << "khong la so nguyen to";
}

