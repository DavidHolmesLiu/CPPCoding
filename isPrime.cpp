#include <iostream>

using namespace std;

int main() {

    for (long long num = 10000000000; num <= 19999999999; num++) {

        bool isPrime = true;
        long long int i = 2;

        while (i < num) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
            ++i;
        }

        if (isPrime)
            cout << num << " PRIME!!!!" << endl;
    }
    
    return 0;
}
