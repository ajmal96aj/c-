#include<iostream>
using namespace std;
class details {
    private:
    char name[20];
    int age;
    char dept[20];
    public:
    void my_details()
    {
        cout<<"enter your name age and dept :";
        cin>>name>>age>>dept;
        cout<<"i am "<<name<<" am "<<age<<" year old "<<" i am studying in "<<dept;
    }
};
int main()
{
    details d;
    d.my_details();
    return 0;
}