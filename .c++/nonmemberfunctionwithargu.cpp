#include<iostream>
using namespace std;
class addition
{
    int a,b,c;
    public:
    void multwo(int a,int b);
    void subthree(int x,int y,int z);
};
void addition::multwo(int a,int b)
{
    this->a=a;
    this->b=b;
    cout<<"mul of two numbers is "<<a*b<<endl;
}
void addition::subthree(int x,int y,int z)
{
    a=x;
    b=y;
    c=z;
    cout<<"sub of three numbers is "<<a-b-c<<endl;
}
int main()
{
    addition ad;
    ad.multwo(5,5);
    ad.subthree(100,40,5);
    return 0;
}