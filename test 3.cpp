#include<iostream>
using namespace std;
class Circle
{
    public:
        float findArea(float r)
        {
            return (3.14*r*r);
        }
        float findCircum(float r)
        {
            return (2*3.14*r);
        }
};
int main()
{
    Circle c;
    float rad, area, circum;
    cout<<"Enter the Radius of Circle: ";
    cin>>rad;
    area = c.findArea(rad);
    circum = c.findCircum(rad);
    cout<<"\nArea of Circle = "<<area;
    cout<<"\nCircumference of Circle = "<<circum;
    cout<<endl;
    return 0;
}
