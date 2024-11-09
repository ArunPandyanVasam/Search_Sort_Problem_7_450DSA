#include <stdio.h>


void mergeArrays(int a[], int b[], int n, int m) {

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
