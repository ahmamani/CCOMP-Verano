#include <iostream>

using namespace std;

template <typename T>
T sum1(const T a, const T b) {
    return a + b;
}

template <typename T, typename U>
U sum2(const T a, const U b) {
    return a + b;
}

int main() {
    cout << sum1<double>(1.243, 4.23) << endl;    


    cout << sum2<double, int>(1.243, 3) << endl;    
    cout << sum2<int, double>(3, 3.36) << endl;    

    return 0;
}