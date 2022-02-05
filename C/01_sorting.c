#include <stdio.h>

int main() {
    int a[10], n;
    int largest1, largest2,largest3, i;
    printf("Enter the number of students : ");
    scanf("%d", &n);
    printf("Enter the marks of %d students : \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    largest1 = a[0];
    for (i = 0; i < n; i++) {
        if (a[i] > largest1) {
            largest1 = a[i];
        }
    }
    largest2 = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > largest2 && a[i] < largest1)
            largest2 = a[i];
    }
    largest3 = a[0];
    for (i = 2; i < n; i++) {
        if (a[i] > largest3 && a[i] < largest2 && a[i] < largest1)
            largest3 = a[i];
    }
    printf("Greatest, Second Greatest and Third Greatest marks are : %d , %d and %d", largest1, largest2, largest3);
}


// #include <stdlib.h>
// #include <stdio.h>

// int cmp_int( const void *a, const void *b ) {
//     return *(int*)a - *(int*)b;
// }

// int main() {
//     int a[] = { 1, 5, 3, 2, 0, 5, 7, 6 };
//     const int n = sizeof(a) / sizeof(a[0]);

//     qsort(a, n, sizeof(a[0]), cmp_int);
//     printf("%d %d %d\n", a[n-1], a[n-2],a[n-3]);
// }
