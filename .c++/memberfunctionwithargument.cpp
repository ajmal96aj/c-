#include<iostream>
using namespace std;
class addition
{
    int a,b,c;
    public:
    void addtwo(int a,int b)
    {
        this->a=a;
        this->b=b;
        cout<<"sum of a and b is "<<a+b<<endl;
    }
    void addthree(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
        cout<<"sum of three numbers is "<<a+b+c<<endl;
    }
};
int main()
{
addition ad;
ad.addtwo(20,30);
ad.addthree(50,40,50);
return 0;
}
