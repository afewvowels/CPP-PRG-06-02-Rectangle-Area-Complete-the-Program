//
//  main.cpp
//  PRG-6-2-Rectangle-Area-Complete-the-Program
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//
//  If you have downloaded this book's source code, you will find a partially written program
//  name AreaRectangle.cpp in the Chapter 06 folder. Your job is to complete the
//  program. When it is complete, the program will ask the user to enter the width and
//  length of a rectangle, then display the rectangle's area. The program calls the following
//  functions, which have not been written:
//  getLength - This function should ask the user to enter the rectangle's length then
//  return that value as a double
//  getWidth - This function should ask the user to enter the rectangle's width then
//  return that value as a double
//  getArea - This function should accept the rectangle's length and width as arguments
//  and return the rectangle's area. The area is calculated by multiplying the
//  length by the width
//  displayData - This function should accept the rectangle's length, width, and area
//  as arguments and display them in an appropriate message on the screen


#include <iostream>

using namespace std;

float rectLength();
float rectWidth();
float rectArea(float, float);

int main()
{
    float fltRectLength,
          fltRectWidth,
          fltRectArea;
    
    fltRectLength = rectLength();
    
    fltRectWidth = rectWidth();
    
    fltRectArea = rectArea(fltRectLength, fltRectWidth);
    
    cout << "With a length of: " << fltRectLength << endl
         << "And a width of: " << fltRectWidth << endl
         << "The area is: " << fltRectArea << endl;
    
    return 0;
}

float rectLength()
{
    static float fltRectLength;
    
    cout << "Please enter the rectangle's length:\n";
    cin >> fltRectLength;
    while(!cin || fltRectLength < 0.0f || fltRectLength > 100000.0f)
    {
        cout << "Please enter a valid length:\n";
        cin.clear();
        cin.ignore();
        cin >> fltRectLength;
    }
    
    return fltRectLength;
}

float rectWidth()
{
    static float fltRectWidth;
    
    cout << "Please enter the rectangle's width:\n";
    cin >> fltRectWidth;
    while(!cin || fltRectWidth < 0.0f || fltRectWidth > 100000.0f)
    {
        cout << "Please enter a valid width:\n";
        cin.clear();
        cin.ignore();
        cin >> fltRectWidth;
    }
    
    return fltRectWidth;
}

float rectArea(float fltRectLength, float fltRectWidth)
{
    static float fltRectArea;
    
    fltRectArea = fltRectLength * fltRectWidth;
    
    return fltRectArea;
}

