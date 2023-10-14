#ifndef LESSON1_COLOR_HPP
#define LESSON1_COLOR_HPP

#include <string>
#include <ostream>

using namespace std;

class Color{

    unsigned char red;
    unsigned char green;
    unsigned char blue;
    unsigned char alpha;

public:

    explicit Color(string colorName)  {}
    explicit Color (unsigned char red, unsigned char  green, unsigned char  blue, unsigned char  alpha=255):
            red(red), green(green), blue(blue), alpha(alpha) {}

    void setColor(unsigned char red, unsigned char  green, unsigned char  blue, unsigned char  alpha=255) {
        Color::red = red;
        Color::green = green;
        Color::blue = blue;
        Color::alpha = alpha;
    }

    friend ostream &operator<<(ostream &os, const Color &color) {
        os << "red: " << color.red << " green: " << color.green << " blue: " << color.blue << " alpha: " << color.alpha;
        return os;
    }
};

#endif //LESSON1_COLOR_HPP
