#include <iostream>
using namespace std;

class ParkingSystem {
public:
    int B, M, S;

    ParkingSystem(int big, int medium, int small) {
        this->B = big;
        this->M = medium;
        this->S = small;
    }

    bool addCar(int carType) {
        if (carType == 1 && B == 0) return false;
        if (carType == 2 && M == 0) return false;
        if (carType == 3 && S == 0) return false;

        if (carType == 1) B--;
        if (carType == 2) M--;
        if (carType == 3) S--;
        return true;
    }
};

int main() {
    // Initialize with 1 big, 1 medium, 0 small spots
    ParkingSystem ps(1, 1, 0);

    // Test inputs
    cout << boolalpha;
    cout << ps.addCar(1) << endl; // true (1 big used)
    cout << ps.addCar(2) << endl; // true (1 medium used)
    cout << ps.addCar(3) << endl; // false (no small spot)
    cout << ps.addCar(1) << endl; // false (big spot full)

    return 0;
}
