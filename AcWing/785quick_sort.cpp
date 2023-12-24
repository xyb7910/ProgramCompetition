#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

std::vector<int> num;
int n;

void quick_sort(vector<int> num, int l, int r) {
	if(l <= r) return ;
	int i = l - 1, j = r + 1, x = num[i + j >> 1];

	while(i < j) {
		while(num[i] < x) i ++;
		while(num[j] > x) j --;
		if(i < j) swap(num[i], num[j]);
	}
	quick_sort(num, l, j), quick_sort(num, j + 1, r);
}

int main(int argc, char const *argv[]) {
	std:: cin >> n;
	for (int i = 0; i < n;i ++) std::cin >> num[i];

	quick_sort(num, 0, n - 1);

	for (int i = 0; i < n; i ++) std::cout << num[i] << " ";

	std:: cout << endl;
	return 0;
}
