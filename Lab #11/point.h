#ifndef POINT_H
#define POINT_H

typedef struct Point Point;

struct Point {
  double x, y;
// function pointer
  double (*getX)(Point*);
  double (*getY)(Point*);
  double (*distance)(Point* , Point*);
};

Point* newPoint(double x, double y);
void deletePoint(Point* this);

static double distance(Point* p1, Point* p2);
static double getX(Point* this);
static double getY(Point* this);

#endif

