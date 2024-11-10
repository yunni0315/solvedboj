#include <iostream>
#include <cmath>
using namespace std;

int Z(int n, int r, int c) {
    if (n == 0) return 0;
    
    int half = 1 << (n - 1); // 2^(n-1)
    int quadrant_size = half * half;

    if (r < half && c < half) {
        // 첫 번째 사분면
        return Z(n - 1, r, c);
    } 
    else if (r < half && c >= half) {
        // 두 번째 사분면
        return quadrant_size + Z(n - 1, r, c - half);
    } 
    else if (r >= half && c < half) {
        // 세 번째 사분면
        return 2 * quadrant_size + Z(n - 1, r - half, c);
    } 
    else {
        // 네 번째 사분면
        return 3 * quadrant_size + Z(n - 1, r - half, c - half);
    }
}

int main() {
    int N, r, c;
    cin >> N >> r >> c;
    cout << Z(N, r, c) << endl;
    return 0;
}
