#include <stdio.h>

typedef struct {
    int xpos;
    int ypos;
} Point;

Point getScale2xPoint(const Point *p);
void swapPoints(Point *p1, Point *p2);

int main() {
    Point point1;
    scanf("%d %d", &point1.xpos, &point1.ypos);

    printf("Calling getScale2xPoint()\n");
    printf("P1 : %d %d\n", point1.xpos, point1.ypos);

    Point scaledPoint = getScale2xPoint(&point1);
    printf("P2 : %d %d\n", scaledPoint.xpos, scaledPoint.ypos);
    
    

    
    printf("Calling swapPoint()\n");
    printf("P1 : %d %d\n", scaledPoint.xpos, scaledPoint.ypos);
    swapPoints(&point1, &scaledPoint);
    printf("P2 : %d %d\n", scaledPoint.xpos, scaledPoint.ypos);

    return 0;
}

Point getScale2xPoint(const Point *p) {
    Point scaled;
    scaled.xpos = p->xpos * 2;
    scaled.ypos = p->ypos * 2;
    return scaled;
}

void swapPoints(Point *p1, Point *p2) {
    Point temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

