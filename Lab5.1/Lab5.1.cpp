#include <locale.h>
#include<cstdio>

int main()
{
    int n, t1, t2, bt = -1, r=0,i0=0;
    int* A;
    bool f = true;
    setlocale(LC_ALL, "RUS");
    do {
        printf("Ввведите кол-во элементов n: \n");
        scanf_s("%d", &n);
    } while (n < 1);
    printf("Ввведите t1: \n");
    scanf_s("%d", &t1);
    printf("Ввведите t2: \n");
    scanf_s("%d", &t2);
    A = new int[n];
    for (int i = 0; i < n; i++) {
        printf("Введите A[%d]:\n", i);
        scanf_s("%d", &A[i]);
    }
    i0 = n - 1;
    while (i0 >= 0 && f) {
        if (A[i0] > t2) {
            bt = i0;
            f = false;
            i0--;
        }
    }
    f = false;
    if (bt == -1) {
        bt = n;
    }
    
    for (int i = 0; i < bt; i++) {
        if (A[i] < t1 && A[r] <= A[i]) {
            r = i;
            f = true;
        }
    }
    if (f == false) {
        printf("Таких элементов нет");
    }
    else {
        printf("Номер элемента: %d", r + 1);
    }
    delete[] A;
}

