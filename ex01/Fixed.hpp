# pragma once
# include <iostream>
# include <math.h>
class Fixed
{
private:
    int value;
    static const int bits = 8;
public:
    Fixed();
    Fixed(int value);
    Fixed(float value);
    Fixed(Fixed const& fixed);
    ~Fixed();

    Fixed &operator=(Fixed const& fixed);

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);
