// UVa Online Judge - 10141
// Author: Satoru Diaz Nakada (Satoruu)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t = 1, n, p, r;
	double price, compliance, best_compliance, best_price;
	string req, req_met, company_name, best_company;

	while (scanf("%d %d", &n, &p), n || p) {
		char aux = getchar(); // Gets remaining endline to prepare for getline()
		for (int i=0; i<n; i++)
			getline(cin, req); // Names can be ignored	

		best_compliance = 0.00;
		best_price = 0x3f3f3f3f; // INF
		for (int i=0; i<p; i++) {
			getline(cin, company_name);
			cin >> price >> r;

			aux = getchar(); // Gets remaining endline to prepare for getline()

			for (int j=0; j<r; j++)
				getline(cin, req_met); // Names can be ignored

			compliance = (double)r / p;

			if (compliance > best_compliance) {
				best_compliance = compliance;
				best_price = price;
				best_company = company_name;
			}
			else {
				if (compliance == best_compliance && price < best_price) {
					best_price = price;
					best_company = company_name;
				}
			}
		}

		if (t > 1)
			printf("\n");

		printf("RFP #%d\n", t);
		cout << best_company << endl;

		++t;
	}

	return 0;
}