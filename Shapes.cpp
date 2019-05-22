//
//  Shapes.cpp
//  Screen
//
//  Created by Anand Venkataraman on 1/5/19.
//  Copyright © 2019 Anand Venkataraman. All rights reserved.
//
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

#include "Shapes.h"

// --------- Screen methods -----------------------------
Screen::Screen(int w, int h) : width(w), height(h) {
    // TODO - Complete this Constructor
    /* Type your code here */
    for (int i=0; i < w; ++i) {

        vector<char> column;

        for (int j=0; j < h; ++j) {
            column.push_back(DEFAULT_BG_CH);
        }
        pixels.push_back(column);
    }

}

void Screen::fill(char ch) {
    // TODO - Complete this method
    /* Type your code here */

    vector<vector<char> > pixels = this->getPixels();
    vector<vector<char> > newPixels;
    for (int i=0; i < pixels.size(); ++i) {
        vector<char> column;
        for (int j=0; j < pixels[i].size(); ++j) {
            column.push_back(ch);
        }
        newPixels.push_back(column);
    }

    this->setPixels(newPixels);
} 

string Screen::toString() const {

    // get current pixels
    vector<vector<char> > pixels = this->getPixels();
    string fullString;
    string oneLine;

    for (int i=0; i < pixels.size(); ++i) {
    //for (int i=pixels.size(); i > 0; --i) {
        for (int j=0; j < pixels[i].size(); ++j) {
            oneLine += pixels[i][j]; 
        }
        fullString += oneLine + "\n"; 
        oneLine = "";
    }
    //cout << fullString << endl;
    return fullString;
}

// Output the screen on the given stream.
ostream& operator<<(ostream& os, const Screen& scr) {
    // TODO - Complete this function
    os << scr.toString();
    return os;
}

// --------- Point methods -----------------------------

// // @override virtual shape method - Public API call.
// bool Point::draw(Screen& scr, char ch) {
//     // TODO - Complete this method
//     /* Type your code here */
// }

// // --------- Line methods -----------------------------

// // TODO - Private helpers. Implement as necessary

// /* Type your code here */


// // @override virtual shape method - Public API call.
// // Draw this line on the given screen. Always draw left to right,
// // and bottom to top if vertical. Use the supplied char ch as the
// // pixel char
// bool Line::draw(Screen& scr, char ch) {
//     // TODO: Complete this method
//     /* Type your code here */
// }

