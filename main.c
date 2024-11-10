#include <stdio.h>


void mergeArrays(int a[], int b[], int n, int m) {
    for (int i = m -1; i >= 0; i--) {
        if (a[n-1] > b[i]) {
            int last = a[n - 1];
            int j = n - 2;

            while (j >= 0 && a[j] > b[j]) {

            }

        }
    }
}

int main(void) {
    //merge 2 sorted arrays
    int a[] = {1, 5, 9, 10 ,15, 20};
    int b[] = {2, 3, 8, 13};
    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);

    mergeArrays(a, b, n, m);

    return 0;
}
