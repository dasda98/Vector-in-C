#include <stdio.h>
#include <vector.h>


typedef struct Point {
    int x;
    int y;
} Point;


int main() {
    Vector vec;
    vector_init(&vec, sizeof(Point));

    Point p1 = {1, 2};
    Point p2 = {3, 4};

    vector_push_back(&vec, &p1);
    vector_push_back(&vec, &p2);

    for (size_t i = 0; i < vec.size; i++) {
        Point *p = vector_get(&vec, i);
        printf("Point %zu: (%d, %d)\n", i, p->x, p->y);
    }

    vector_free(&vec);

    return 0;
}