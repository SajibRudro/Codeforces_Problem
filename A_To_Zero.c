#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n, k;
        scanf("%lld %lld", &n, &k);

        int operations = 0;

        while (n > 0) {
            if (n % 2 == 0) {
                n -= k - (k % 2); // If n is even, subtract the largest even number ≤ k
            } else {
                n -= k; // If n is odd, subtract the largest odd number ≤ k
            }
            operations++;
        }

        printf("%d\n", operations);
    }

    return 0;
}
