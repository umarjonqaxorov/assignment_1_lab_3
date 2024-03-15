#include <iostream>
#include "math.h"

double calculateSphereArea(double diameter);

using namespace std;

int main() {

    cout << "PROBLEM 1" << endl;

    int intNumber = 23;
    cout << "Value of Integer is " << intNumber << ". Size is " << sizeof(intNumber) << endl;
    float floatNumber = 3.14;
    cout << "Value of Float is " << floatNumber << ". Size is " << sizeof(floatNumber) << endl;
    double doubleNumber = 45.1234;
    cout << "Value of Double is " << doubleNumber << ". Size is " << sizeof(doubleNumber) << endl;
    char charName = 'A';
    cout << "Value of char is " << charName << ". Size is " << sizeof(charName) << endl;
    bool boolean = true;
    cout << "Value of Bool is " << boolean << ". Size is " << sizeof(boolean) << endl;

    cout << " PROBLEM 2" << endl;
    cout << " Qaxorov Umarjon " << endl;
    cout << " 230160 " << endl;
    cout << " i don't like any songs" << endl;
    cout << " ALita" << endl;

    cout << " PROBLEM 3" << endl;

    cout << "\"I\'m standing\" on the edge of some crazy cliff.\n"
            "What I have to do, I have to catch everybody\\\n"
            "if they start to go over the cliff—I mean\\\n"
            "\\if they're running and they don't look\n"
            "where they're going I have to come out\n"
            "from somewhere and \tcatch them.";

    cout << "PROBLEM 4" << endl;
    int a = 189;
    char b = 'B';

    float A = (float) a / 3;
    int B = b;
    float C = ((a + b) / 5);
    char D = b + (char) (a / 10) - 1;
    cout << A << ' ' << B << ' ' << C << ' ' << D << endl;


    cout << "PROBLEM 5" << endl;
    int x;
    int y;
    int sum = x + y;
    int product = x * y;
    cout << " Sum=" << sum << endl;
    cout << " Product=" << product << endl;


    cout << "PROBLEM 6" << endl;
    int value1 = 38, value2 = 73;
    int sum1 = value1 + value2;
    cout << "sum: " << value1 << " + " << value2 << " = " << sum1 << endl;

    cout << "PROBLEM 7" << endl;
    float X = 2, Y = 5;
    float t = 3 * (X * X + 3) / (Y / 4 + 3);
    cout << " t = " << t << endl;

    cout << "PROBLEM 8" << endl;
    double diameter=6.9;
    double area = calculateSphereArea(diameter);
//    std::cout << "The area of the sphere is: " << area << std::endl;
    float pi = 3.14;
    cout << "Area: " << (4) * (pi * (diameter * diameter / 4)) << endl;
    cout << "PROBLEM 9 " << endl;
    float v_1, v_2, t_1;
    cout << " enter the velocity in metrs/seconds";
    cin >> v_1;
    cout << " enter the velocity in metres/seconds";
    cin >> v_2;
    cout << " enter the time span in metres/seconds";
    cin >> t_1;
    float acceleration = (v_1 - v_2) / t_1;
    cout << " Average acceleration" << acceleration << "m/s^2" << endl;
    cout << "PROBLEM 10 " << endl;
    float d_1, f_1, g_1;
    cout << " the distance to drive";
    cin >> d_1;
    cout << " the fuel of effiemcy of the car in miles per gallon";
    cin >> f_1;
    cout << "  the price per gallon then displays the cost of the trip";
    cin >> g_1;
    float cost_of_trip = (d_1 / f_1) * g_1;
    cout << " the cost of driving is   $" << cost_of_trip << endl;
    cout << "PROBLEM 11 " << endl;
    double p11_var1 = 1.13e3;
    double p11_var2 = 411e-4;
    cout << p11_var1 << "" << p11_var2 << endl;
    cout << "PROBLEM 12 " << endl;
    int total_students, groups, students_per_group, remainder;


    cout << "Enter the total number of admitted students: ";
    cin >> total_students;
    cout << "Enter the number of groups: ";
    cin >> groups;
    students_per_group = total_students / groups;
    remainder = total_students % groups;
    cout << "In first group: " << students_per_group + (remainder > 0 ? 1 : 0) << endl;
    cout << "In last group: " << (remainder == 0 ? students_per_group : remainder) << endl;
    cout << "PROBLEM 13 " << endl;
    double side;
    cout << "Enter the side of the hexagon: ";
    cin >> side;
    area = (3 * sqrt(3) * pow(side, 2)) / 2;


    cout << "The area of the hexagon is " << area << endl;


    cout << "PROBLEM 14 " << endl;

    int num;
    cout << "Enter an integer number: ";
    cin >> num;


    num += 1;
    num *= 3;
    num -= 14;
    num /= 4;
    num -= 1;
    num %= 9;

    cout << "Result: " << num << endl;


    cout << "PROBLEM 15 " << endl;
    char ch = 'A';
    ch += 7;
    cout << ch << (char) (ch + 1) << (char) (ch - 14) << (char) (ch - 1) << (char) (ch - 1) << "!" << endl;


    cout << "PROBLEM 16 " << endl;
    float x_1 = 17.0f;
    float y_1 = 1.0f;

    float z = (x_1 + ++x_1) / (y_1 * 2);
    cout << z << endl;

    cout << "PROBLEM 17 " << endl;
    int num1, num2;
    cout << " Enter the first number ";
    cin >> num1;
    cout << " Enter the second number";
    cin >> num2;
    if (num1 == num2) {
        cout << " output :1 " << endl;
    } else {
        cout << " output :2" << endl;
    }

    cout << "PROBLEM 18 " << endl;
    int num_a, num_b;
    cout << " enter the number for 'a'";
    cin >> num_a;
    cout << " enter the  number for 'b";
    cin >> num_b;
    int result = (a < 140) && (a < b);
    cout << "Output" << result << endl;


    cout << "PROBLEM 19 " << endl;
    int a__1, b__1, c__1;
    cout << " enter the value for 'a'";
    cin >> a__1;
    cout << " enter the value for  'b'";
    cin >> b__1;
    cout << " enter the value 'c' ";
    cin >> c__1;
    bool a_the_largest = (a__1 > b__1) && (a__1 > c__1);
    cout << "output" << a_the_largest << endl;


    cout << "PROBLEM 20 " << endl;
    int numbers[5];
    cout << "Enter 5 integer numbers: ";
    for (int i = 0; i < 5; ++i) {
        cin >> numbers[i];
    }
    bool has_positive_or_zero = false;
    for (int i = 0; i < 5; ++i) {
        if (numbers[i] >= 0) {
            has_positive_or_zero = true;
            break;
        }
    }
    cout << "Output: " << (has_positive_or_zero ? 1 : 0) << endl;
    return 0;
}

double calculateSphereArea(double diameter) {
    double radius = diameter / 2.0;
    double area = 4.0 * M_PI * pow(radius, 2);
    return area;
}
