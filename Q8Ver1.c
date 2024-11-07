#include <stdio.h>
void count_fun(int n);
void main() {
    int a;
    printf("Enter a decimal number: ");
    scanf("%d", &a);

    if (a < 0) {
        printf("negative integer.\n");
        return; 
    }
    count_fun(a);
}

void count_fun(int n) {
    if (n == 0) {
        printf("Number of 1s: 0\n");
        printf("Number of 0s: 1\n");
        return;
    }

    int count1 = 0, count0 = 0;
    int binary[32];  // Array to store the binary representation
    int index = 0;
    
    while (n > 0) {
        binary[index++] = n % 2;
        n = n / 2;
    }

    // Count 1s and 0s
    for (int i = 0; i < index; i++) {
        if (binary[i] == 1) {
            count1++;
        } else {
            count0++;
        }
    }

    // Output the results
    printf("Number of 1s: %d\n", count1);
    printf("Number of 0s: %d\n", count0);
}
