#include<iostream>
using namespace std;
class sum
{
    int a,b;
    public:
        void input()
        {
            cout<<"enter a:-";
            cin>>a;
            cout<<"enter b:-";
            cin>>b;
        
        }
        void add(sum ob1,sum ob2)
        {
            int x,y;
            x = ob1.a+ob2.a;
            y= ob1.b+ob2.b;
            cout<<"values after addition"<<endl;
            cout<<"X:-"<<x<<endl;
            cout<<"Y:-"<<y;
        }
};
int main()
{
    sum ob,ob1,ob2;
    ob1.input();
    ob2.input();
    ob.add(ob1,ob2);
}
