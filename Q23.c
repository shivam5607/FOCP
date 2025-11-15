#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int C1, C2, n;
        scanf("%d %d", &C1, &C2);
        scanf("%d", &n);

        int p1 = 0, p2 = 0;

        for (int i = 0; i < n; i++) {
            int a, b;
            scanf("%d %d", &a, &b);

            if (a == 1) p1++;
            if (b == 1) p2++;
        }

        int cost1 = p1 * C1 + p2 * C2;   // Problem1 → C1, Problem2 → C2
        int cost2 = p1 * C2 + p2 * C1;   // Problem1 → C2, Problem2 → C1

        if (cost1 < cost2)
            printf("%d\n", cost1);
        else
            printf("%d\n", cost2);
    }

    return 0;
}