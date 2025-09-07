#include<iostream>
using namespace std;
class palidrome
{
    private:
    int num;


    public:
    palidrome(int n)
    {
        num=n;
    }
    bool ispalidrome()
    {
        int reversed=0;
        int temp=num;
        while(temp!=0)
        {
            int digit=temp%10;
            reversed=reversed*10+digit;
            temp/=10;
        }
        return (num==reversed);
    }
    void result()
    {
        if(ispalidrome())
        cout<<"this is a palidrome number"<<endl;
        else
        cout<<"this is not a palidorme number"<<endl;
    }
};
