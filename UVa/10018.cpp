// UVa Online Judge - 10018
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(long long num) {
	long long digit;
	int mirror;
	string s_num = "";

	while (num != 0) {
		digit = num % 10;
		num /= 10;

		s_num = static_cast<char>(digit) + s_num; 
	}

	int len = s_num.length();
	bool palindrome = true;
	for (int i=0; i<len/2; i++) {
		mirror = len - i - 1;

		if (s_num[i] != s_num[mirror]) {
			palindrome = false;
			break;
		}
	}

	return palindrome;
}

long long sumNumberAndReverse(long long num) {
	long long rev = 0, digit;
	long long num_copy = num;

	while (num_copy != 0) {
		digit = num_copy % 10;
		num_copy /= 10;
		rev = rev * 10 + digit;
	}

	return num + rev;
}

int main() {
	int n, it;
	long long number;
	string s_number;

	scanf("%d", &n);

	while (n--) {
		scanf("%lld", &number);
		
		it = 0;
		while (true) {
			if (isPalindrome(number))
				break;

			++it;
			number = sumNumberAndReverse(number);
		}

		printf("%d %lld\n", it, number);
	}

	return 0;
}