//
//  Shapes.h
//  Project name: Screen
//
//  Created by Anand Venkataraman on 1/3/19.
//  Copyright © 2019 Anand Venkataraman. All rights reserved.
//
// A Screen object and various shapes that can be drawn on it. Search for
// TODO items below and complete the open tasks.

#ifndef Shapes_h
#define Shapes_h

#include <iostream>
#include <vector>

using namespace std;
// -------------- Screen -------------------
// A virtual screen with pixels x: 0-(w-1) and y: 0-(h-1)
// NOTE: (0,0) is the bottom left - Pixels can be any character, determined
// by each Point.

class Screen {
    friend class Shape;
    
private:
    int width, height;
    vector<vector<char> > pixels;
    
public:
    const char DEFAULT_FG_CH = '*', DEFAULT_BG_CH = '.';
    
    Screen(int w = 100, int h = 100);
    
    // TODO
    /* Type your code here */
    vector<vector<char> > getPixels() const { return pixels; };
    void setPixels(vector<vector<char> > inputPixels) { this->pixels = inputPixels; };
    
    void clear() { fill(DEFAULT_BG_CH);}
    void fill(char c);
    string toString() const;
    
    friend std::ostream& operator<<(std::ostream& os, const Screen& scr);
};

// --------- Shape ---------------------------------

// Base class for Point, Line, etc.
// Abstract.
class Shape {
private:
    // empty
    
public:
    // TODO
    /* Type your code here */
};

// // --------- Point ---------------------------------
// class Point : public Shape {
// private:
//     int x, y;
    
// public:
//     Point(int x1, int y1) : x(x1), y(y1) {}
//     // TODO
//     /* Type your code here */
// };

// // ----------- Line --------------------------------
// // Line in two point notation
// class Line : public Shape {
// private:
//     int x1, y1, x2, y2;
    
//     // Helpers
//     // TODO
//     /* Type your code here */

// public:
//     // TODO
//     /* Type your code here */
// };

#endif /* Shape_h */

