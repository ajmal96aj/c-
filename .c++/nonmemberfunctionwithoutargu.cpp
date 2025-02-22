#include<iostream>
using namespace std;
class circle
{
    int radius;
    float pi;
    public:
    void slope();
    void area();
    int perimeter();
};
void circle::slope()
{
    cout<<"this is circle"<<endl;
}
void circle::area()
{
    pi=3.14;
    cout<<"enter the radius"<<endl;
    cin>>radius;
    cout<<"area of the circle is"<<pi*radius*radius<<endl;
}
int circle::perimeter()
{
    return 2*pi*radius;
}
int main()
{
    float n;
    circle cc;
    cc.slope();
    cc.area();
    n=cc.perimeter();
    cout<<"perimeter="<<n;
    return 0;
}