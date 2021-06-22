#include <stdio.h>
#include <x86intrin.h>

// int main() {
    // long x = 1000000000000;
    // int *iptr = &x;
    // x = 200 * 300 * 400 * 500;
    // printf("x = %d\n", x);
    // printf("x = %f\n", 1e20 + 3.14);
    // unsigned short i = 128;
    // short i2 = -800;
    // printf("i = %d\n", (char) i);
    // int A[5][10];
    // printf("%lu, %lu", *(A + 1), *(A + 2));
    // printf("%l\n", x);
    // int a[10];
    // for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++){ qq
    //     a[i] = i;
    // }
    // unsigned short s = 0;
    // unsigned short s1 = 1;
    // unsigned short s2 = s - s1;
    // __m256_broadcast_sd()
    // static int i = 10;
    // static int j = 10;
    // printf("%d", i + j);
    // printf("%d", 10 % -3);
// }
// void dgemm (size_t n, double* A, double* B, double* C) {
//     for (size_t i = 0; i < n; ++i) {
//         for (size_t j = 0; j < n; ++j) {
//             double cij = C[i+j*n]; /* cij = C[i][j] */
//             for(size_t k = 0; k < n; k++ ) {
//                 cij += A[i+k*n] * B[k+j*n]; /*cij+=A[i][k]*B[k][j]*/
//             }
//             C[i+j*n] = cij; /* C[i][j] = cij */
//         }
//     }
// }
double cel2fahr(double temp) {
    return 1.8 * temp + 32.0;
}
int main() {
    return 0;
}