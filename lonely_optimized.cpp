#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 	int N;
	cin >> N;
	int tmp, result = 0;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		result ^= tmp;
	}
	cout << result;
    return 0;
}
