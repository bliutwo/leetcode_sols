#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    default_random_engine generator(seed);
    uniform_int_distribution<int> distribution(1, 6);
    // uniform_real_distribution<double> distribution(1.3, 2.9);
    

    cout << distribution(generator) << endl;
    // cout << generate_canonical<double, 10>(generator) << endl;
}
