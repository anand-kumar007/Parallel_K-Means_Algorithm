#ifndef POINT_H
#define POINT_H

#define MAX_DIM 600

using namespace std;

struct Point
{
    double values[MAX_DIM];
    int id;
    int size;

    Point &operator+=(const Point &other)
    {
        this->id = -1;
        this->size = other.size;
        for (int i = 0; i < this->size; i++)
            this->values[i] += other.values[i];
        return *this;
    };
};

#endif //POINT_H