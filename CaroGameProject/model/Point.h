#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
class Point
{
public:
    int x;
    int y;

    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    void setX(int x)
    {
        this->x = x;
    }
    void setY(int xy)
    {
        this->y = y;
    }
};


#endif // POINT_H_INCLUDED
