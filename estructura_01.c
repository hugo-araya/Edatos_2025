#include <stdio.h>

struct vector{
    int x;
    int y;
    int z;
};

struct vector suma (struct vector, struct vector);

int main () {
    struct vector v1 = { 1, 2, 3};
    struct vector v2 = { 4, 5, 6};
    struct vector v3;
    v3 = suma(v1, v2);
    printf("%d\n%d\n%d\n", v3.x, v3.y, v3.z);
    return 0;
}

struct vector suma(struct vector v1, struct vector v2){
    v1.x = v1.x + v2.x;
    v1.y = v1.y + v2.y;
    v1.z = v1.z + v2.z;
    return v1;
}