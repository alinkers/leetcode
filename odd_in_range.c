#include <stdio.h>
#include <stdlib.h>

int countOdds(int low, int high) {

int count = 0;
    for (int i = low; i <= high; i++) {
        if (i % 2 != 0)
            count ++;
        else
            continue;
    }
return count;
}

int main() {
    int low, high;
    scanf("%d%d", &low, &high);
    printf("%d\n", countOdds(low, high));
    return 0;
}