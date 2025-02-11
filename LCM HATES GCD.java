#include <stdio.h>

int gcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(int a, int b) {
    return (long long)a * (b / gcd(a, b));
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B);
        
        int min_value = _INT_MAX_;
        
        for (int X = 1; X <= 2 * A; X++) {
            long long lcm_val = lcm(A, X);
            int gcd_val = gcd(B, X);
            int diff = lcm_val - gcd_val;
            if (diff < min_value) {
                min_value = diff;
            }
        }
        
        printf("%d\n", min_value);
    }
    
    return 0;
}