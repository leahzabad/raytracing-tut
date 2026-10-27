//
// Created by Leahz on 10/26/2026.
//

//first step is ppm image formating
// stores rgb color image

#include "color.h"
#include "vec3.h"
#include <iostream>
#include<string>
using namespace std;

int main() {
    //image diemnsions
    int image_width = 256;
    int image_height = 256;

    //rendering the image

    cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";
    //P3 denotes the colors are in ASCII,
    //and the width = columns and height = rows, and then 255 is the max color val

    for (int j = 0; j < image_height; j++) {
        clog << "\rScranlines remaining: " << (image_height - j) << ' ' << flush;
        //this is a progress indicator. i have no idea what clog and flush are :D
        for (int i = 0; i < image_width; i++) {
            auto pixel_color = color(double(i)/(image_width-1), double(j)/(image_height-1), 0);
            write_color(std::cout, pixel_color);

        }
    }
    clog << "\rDone. \n";
    //ends indictor


}