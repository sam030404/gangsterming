#include <stdio.h>

void rotateLeft(int *pa, int *pb, int *pc) {
    int temp = *pb;
    *pb = *pc;
    *pc = *pa;
    *pa = temp;
}

void rotateRight(int *pa, int *pb, int *pc) {
    int temp = *pb;
    *pb = *pa;
    *pa = *pc;
    *pc = temp;
}

int main() {
    int pa = 10;
    int pb = 20;
    int pc = 30;
    int num;

    printf("%d:%d:%d\n", pa, pb, pc);

    while (1) {
        scanf("%d", &num);

        if (num == 1) {
            rotateLeft(&pa, &pb, &pc);
        } else if (num == 2) {
            rotateRight(&pa, &pb, &pc);
        } else {
            break;
        }

        printf("%d:%d:%d\n", pa, pb, pc);
    }

    return 0;
}
