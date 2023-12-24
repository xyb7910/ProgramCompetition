#include <iostream>
#include <cstring>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>
#include <cmath>
#include <map>
#include <set>

using namespace std;

typedef long long  LL;
typedef pair<int, int> PII;
typedef pair<double, double> PDD;

const int N = 100010;
int n;
int num[N];

void quick_sort(int num[], int l, int r) {
    if(l >= r ) return ;
    int i = l - 1, j = r + 1, x = num[l + r >> 1];
    while(i < j) {
        do {
            i ++;
        } while (num[i] < x);
        do {
            j --;
        } while (num[i] > x);
        if (i < j) {
            swap(num[i], num[j]);
        }
    }
    quick_sort(num, l, j), quick_sort(num, j + 1, r);
}

void solved() {
    //solve problem
    std::cin >> n;
    
    for (int i = 0; i < n; i ++) std::cin >> num[i];
    
    quick_sort(num, 0, n - 1);
    
    for (int i = 0; i < n; i ++) std::cout << num[i] << " ";
    
    std::cout << endl;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr), cout.tie(nullptr);
    int T = 1;
    //cin >> T;
    while(T--) {
        solved();
    }
    return 0;
}




