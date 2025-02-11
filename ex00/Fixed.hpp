# pragma once
# include <iostream>
class Fixed
{
private:
    int value;
    static const int bits = 8;
public:
    Fixed();
    Fixed(Fixed const& fixed);
    ~Fixed();

    Fixed &operator=(Fixed const& fixed);

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

