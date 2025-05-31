#include <gtest/gtest.h>
#include "Pentagon.h"

TEST(PentagonTest, ValidPentagonArea) 
{
    std::array<Point, 5> verts = 
    {
        Point(1, 0),
        Point(0.309017, 0.951057),
        Point(-0.809017, 0.587785),
        Point(-0.809017, -0.587785),
        Point(0.309017, -0.951057)
    };
    Pentagon p(verts);
    EXPECT_NEAR(p.Area(), 2.37764, 0.0001);
}

TEST(PentagonTest, NotRegularPentagon_Throws) 
{
    std::array<Point, 5> verts = 
    {
        Point(0,0), Point(1,0), Point(1,1), Point(0,1), Point(-1,0)
    };
    EXPECT_THROW(Pentagon p(verts), std::logic_error);
}

TEST(PentagonTest, AllSidesZero_Throws) 
{
    std::array<Point, 5> verts = 
    {
        Point(0,0), Point(0,0), Point(0,0), Point(0,0), Point(0,0)
    };
    EXPECT_THROW(Pentagon p(verts), std::logic_error);
}

TEST(PentagonTest, EqualPentagons_OperatorEQ) 
{
    std::array<Point, 5> verts = 
    {
        Point(1, 0),
        Point(0.309017, 0.951057),
        Point(-0.809017, 0.587785),
        Point(-0.809017, -0.587785),
        Point(0.309017, -0.951057)
    };
    Pentagon p1(verts), p2(verts);
    EXPECT_TRUE(p1 == p2);
}

TEST(PentagonTest, NotEqualPentagons_Operator) 
{
    std::array<Point, 5> v1 = 
    {
        Point(1,0), Point(0,1), Point(-1,0), Point(0,-1), Point(0.5,0.5)
    };
    std::array<Point, 5> v2 = 
    {
        Point(1,0), Point(0,1), Point(-1,0), Point(0,-1), Point(0.6,0.6)
    };
    Pentagon p1(v1);
    Pentagon p2(v2);
    EXPECT_FALSE(p1 == p2);
}

TEST(PentagonTest, PerimeterAndRadius) 
{
    std::array<Point, 5> verts = 
    {
        Point(1, 0),
        Point(0.309017, 0.951057),
        Point(-0.809017, 0.587785),
        Point(-0.809017, -0.587785),
        Point(0.309017, -0.951057)
    };
    Pentagon p(verts);
    EXPECT_NEAR(p.Perimeter(), 5.87785, 0.01);
    EXPECT_NEAR(p.CircumscribedRadius(), 1.0, 0.01);
}

int main(int argc, char** argv) 
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
