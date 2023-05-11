#include <stdio.h>
int input(int* err);
int main() {
    int err = 0;
    if (err != 1) input(&err);
    if (err != 1) input(&err);


    if (err == 1) printf("INPUT ERROR\n");
    return 0;
}
int input(int* err) {
    int a = 0;
    if (scanf("%d", &a) == 0) {*err = 1; goto exit;};
    printf("%d\n", a);

    exit:
    return 0;
}
