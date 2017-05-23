#include "point.h"
#include <stdlib.h>
#include <math.h>

//constructor using malloc
Point* newPoint(double x, double y) {
  Point* p;
  p = (Point*)malloc(sizeof(Point));
  p->x= x;
  p->distance = distance;
  // assign all member methods to function pointers
  p->getX = getX;
  p->getY = getY;
  p->y= y;

  return p;
}

//deconstructor using free
void deletePoint(Point* this) {
  free(this);
}

// member method
double getX(Point* this) {
  return this->x;
}

double getY(Point* this) {
  return this->y;
}

double distance(Point* p1, Point* p2) {
  double result;
  double x_values, y_values;

  x_values = (p1->x - p2->x)*(p1->x - p2->x);
  y_values = (p1->y - p2->y)*(p1->y - p2->y);

  result = sqrt(x_values + y_values);

  return result;
}

