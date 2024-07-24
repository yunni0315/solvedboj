#include <iostream>

using namespace std;

int main() {
    int Case, H, W, N;
    cin >> Case;

    for (int i = 0; i < Case; i++) {
        cin >> H >> W >> N;

        int floor = (N - 1) % H + 1; 
        int roomNumber = (N - 1) / H + 1;

        int address = floor * 100 + roomNumber;
        cout << address << "\n";
    }

    return 0;
}
