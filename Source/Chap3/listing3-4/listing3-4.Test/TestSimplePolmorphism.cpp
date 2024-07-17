#include "gtest/gtest.h"
#include "../listing3-4/Shape.h"
#include "../listing3-4/Circle.h"
#include "../listing3-4/Square.h"

TEST(SimplePolymorhism, TestTest) {
	EXPECT_EQ(1, 1);
}

TEST(SimplePolymorhism, baseShapeClass) {

	Shape shape;

	EXPECT_EQ("Draw Shape", shape.draw());
}

TEST(SimplePolymorhism, circleClassWithBaseShape) {

	Circle circle;

	Shape* shape = &circle;

	EXPECT_EQ("Draw a Circle", shape->draw());
}

TEST(SimplePolymorhism, squarelassWithBaseShape) {

	Square square;

	Shape* shape = &square;

	EXPECT_EQ("Draw a Square", shape->draw());
}