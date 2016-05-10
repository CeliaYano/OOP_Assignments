#ifndef TRIANGLE_H
#define TRIANGLE_H
#include<string>
#include "Rectangle.h"

class Triangle : public Rectangle{
public:
Triangle(int h, int b) : Rectangle("Triangle", h, b){}
Triangle() : Rectangle("Triangle"){}
int area();
};
