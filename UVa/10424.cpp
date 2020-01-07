// UVa Online Judge - 10424
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int sumCharacterValues(char s[], int n) {
	int sum = 0;
	for (int i=0; i<n; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z')
			sum += s[i] - 'A' + 1;
		else
			if (s[i] >= 'a' && s[i] <= 'z')
				sum += s[i] - 'a' + 1;
	}

	return sum;
}

int determineFinalValue(int sum) {
	int sum_digits;

	while (true) {
		sum_digits = 0;

		while (sum != 0) {
			sum_digits += sum % 10;
			sum /= 10;
		}

		if (sum_digits < 10)
			break;
		else
			sum = sum_digits;
	}

	return sum_digits;
}

int main() {
	char s1[30], s2[30];
	int n1, n2;
	int sum_chars1, sum_chars2;
	int final_value1, final_value2;

	while (scanf("%[^\n]%*c", s1) != EOF) {
		scanf("%[^\n]%*c", s2);

		n1 = strlen(s1);
		n2 = strlen(s2);

		sum_chars1 = sumCharacterValues(s1, n1);
		sum_chars2 = sumCharacterValues(s2, n2);

		final_value1 = determineFinalValue(sum_chars1);
		final_value2 = determineFinalValue(sum_chars2);

		printf("%.2lf %\n", (double)min(final_value1, final_value2) / (double)max(final_value1, final_value2) * 100.00);
	}

	return 0;
}