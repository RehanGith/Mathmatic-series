#include <iostream>
#include <vector>
using namespace std;
void fabnacci_series(int n) {
	cout << "Fabnacci series: ";
	int pre = 0, num = 0, i = 1;
	cout << pre << " " << i << " ";
	while (i) {
		num = pre + i;
		pre = i;
		if (num > n)
			break;
		cout << num << " ";
		i = num;
	}
	cout << endl;
}
void prime_numbers(int n) {
	cout << "Prime Number: ";
	int count{};
	for (int i = 2; i < n; i++) {
		count = 0;
		for (int j = 2; j < i; j++) {
			if (i % j == 0)
				count++;
		}
		if (!count)
			cout << i << " ";
	}
	cout << endl;
}
int isprime(int num) {
	for (int i = 2; i < num; i++) {
		if (num % i == 0)
			return 0;
	}
	return 1;
}
int main() {
	int n = 1000;
	fabnacci_series(n);
	prime_numbers(n);
	if (isprime(75)) {
		cout << "Prime number" << endl;
	}
}