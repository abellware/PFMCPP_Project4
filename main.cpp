/*
 Project 4 - Part 1 / 9
 video: Chapter 2 Part 7
 Returning Values tasks 

 Create a branch named Part1
 
 1) write 3 UDTs named FloatType, DoubleType, IntType.
 
 2) give each UDT the following member functions:
        add( lhs, rhs );
        subtract( lhs, rhs );
        multiply( lhs, rhs );
        divide( lhs, rhs );
 
 3) make them return the correct primitive type. e.g. if you're implementing the FloatType::add function, your implementation would start like this:
        float FloatType::add( float lhs, float rhs )
 
 4) declare a few instances of each class in main() and call the member functions with the appropriate arguments.
        FloatType ft;
        auto result = ft.add(3.2f, 23.f );
 
 5) print out those results using std::cout:
        std::cout "result of ft.add(): " << result << std::endl;
 
 6) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */
 //FloatType
struct FloatType
{
    float add( float, float );
    float subtract( float, float );
    float multiply( float, float );
    float divide( float, float );
};

float FloatType::add(float x, float y)
{
    return x + y;
}

float FloatType::subtract(float x, float y)
{
    return x - y;
}
float FloatType::multiply(float x, float y)
{
    return x * y;
}
float FloatType::divide(float x, float y)
{
    return x / y;
}

//DoubleType
struct DoubleType
{
    double add( double, double );
    double subtract( double, double );
    double multiply( double, double );
    double divide( double, double );
};

double DoubleType::add( double x, double y )
{
    return x + y;
}

double DoubleType::subtract( double x, double y )
{
    return x - y;
}

double DoubleType::divide( double x, double y )
{
    return x / y;
}

double DoubleType::multiply( double x, double y )
{
    return x * y;
}

//IntType
struct IntType
{
    int add( int, int );
    int subtract( int, int );
    int multiply( int, int );
    int divide( int, int );
};

int IntType::add( int x, int y )
{
    return x + y;
}

int IntType::subtract( int x, int y )
{
    return x - y;
}

int IntType::divide( int x, int y )
{
    return x / y; 
}

int IntType::multiply( int x, int y )
{
    return x * y;
}


#include <iostream>
int main()
{  
FloatType ft1; 
FloatType ft2;
FloatType ft3;

DoubleType dt1;
DoubleType dt2;
DoubleType dt3;

IntType it1;
IntType it2;
IntType it3;

auto floatAddResult = ft1.add(3.2f, 23.f);
auto floatDivideResult = ft2.divide(3.2f, 23.0f);
auto floatMultiplyResult = ft3.multiply(3.2f, 23.f);

auto doubleSubtractResult = dt1.subtract(3.2, 0.004);
auto doubleAddResult = dt2.add(3.2, 23.0);
auto doubleDivideResult = dt3.divide(3.2, 23.0);

auto intMultiplyResult = it1.multiply(3.2, 23.0);
auto intAddResult = it2.add(3.2, 23.0);
auto intSubtractResult = it3.subtract(3.2, 23.0);

std::cout << "result of ft1.add(): " << floatAddResult << std::endl;
std::cout << "result of ft2.divide(): " << floatDivideResult << std::endl;
std::cout << "result of ft3.multiply(): " << floatMultiplyResult << std::endl;

std::cout << "result of dt1.subtract(): " << doubleSubtractResult << std::endl;
std::cout << "result of dt2.add(): " << doubleAddResult << std::endl;
std::cout << "result of dt3.divide(): " << doubleDivideResult << std::endl;

std::cout << "result of it1.multiply(): " << intMultiplyResult << std::endl;
std::cout << "result of it2.add(): " << intAddResult << std::endl;
std::cout << "result of it3.subtract(): " << intSubtractResult << std::endl;
std::cout << "good to go!" << std::endl;
}
