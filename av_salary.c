#include <stdio.h>
#include <stdlib.h>

double average(int *salary, int salarySize) {
    int min = salary[0], max = salary[0], sum = 0;
        for (int i = 0; i < salarySize; i++) {
            if (min > salary[i]) 
                min = salary[i];

            if (max < salary[i])
                max = salary [i];

            sum += salary[i];
        }
    return (double)(sum - min - max)/(salarySize - 2);
}

int main() {
    int salarySize = 3;
    int *salary = malloc(sizeof(salarySize * 2));
        for (int i = 0; i < salarySize; i++) {
            scanf("%d", &salary[i]);
        }
    printf("%.1f", average(salary, salarySize));
    free(salary);
    return 0;
}