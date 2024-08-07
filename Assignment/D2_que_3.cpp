// Q.3 Write a class of  cylinder using following members

// Data members:
// 	height,radius,volume
// member function:
// cylinder()
// cylinder(height,radius)
// setHeight(int h)
// setRadius(int r)
// getHeight()
// getRadius()
// CalculateVolume();
// getVolume()

#include<iostream>
using namespace std;

class cylinder{
    int height, radius, volume;

    public : 

    cylinder()
    {

    }

    void setHeight()
    {
        cout<<"enter ht = ";
        cin>>height;

        cout<<"enter rd = ";
        cin>>radius;
        
    }

    void getHeight()
    {

    }
    void calculateVolume()
    {
        volume = 3.14 * height * radius *radius;
        cout<<"volume of cylinder is = "<<volume<<endl;
    }
    
};

int main()
{
    cylinder cyl;
    cyl.getHeight();
    cyl.setHeight();
    cyl.calculateVolume();

    return 0;
}