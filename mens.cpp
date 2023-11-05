#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;
class menz{
    string name;
    int number;
    float price;
    float descond;
public:
    void set_name()
    {
        cout<<"Enter your Name :..."<<endl;
        cin>>name;

    }

void set_number()
{
    cout<<"Enter your Number :20+ "<<endl;
    cin>>number;
}
void set_price()
{
    cout<<"Enter your price :  $"<<endl;
    cin>>price;

}
void set_descond()
{
    cout<<"Enter your Descond :  %"<<endl;
    cin>>descond;


}




float get_area()
{

cout<<"Total : "<<price-(price*descond)/100<<endl;


}
void print()
{

    cout<<"\t \t ------------------------------------------"<<endl;
    cout<<"\t \t | "<<endl;
       cout<<"\t \t \t \t \t \t \t  | "<<endl;
    cout<<"\t \t \t ||||||||||||||||||||||"<<endl;
    cout<<"\t \t | "<<endl;
    cout<<"\t \t \t \t \t \t \t  | "<<endl;
    cout<<"\t \t \t  Name :  "<<name<<endl;
    cout<<"\t \t | "<<endl;
    cout<<"\t \t \t \t \t \t \t  | "<<endl;
    cout<<"\t \t \t  Number : "<<"0"<<number<<endl;
    cout<<"\t \t | "<<endl;
    cout<<"\t \t \t \t \t \t \t  | "<<endl;
    cout<<"\t \t \t  price  : "<<price<<endl;
    cout<<"\t \t | "<<endl;
    cout<<"\t \t \t \t \t \t \t  | "<<endl;
    cout<<"\t \t \t  Discount : "<<"%"<<descond<<endl;
    cout<<"\t \t | "<<endl;
    cout<<"\t \t \t \t \t \t \t  | "<<endl;
    cout<<"\t \t \t Total  :   "<<get_area()<<endl;
    cout<<"\t \t | "<<endl;
    cout<<"\t \t \t \t \t \t \t  | "<<endl;
    cout<<"\t \t \t ||_||_||_||_||_||_||_||"<<endl;
    cout<<"\t \t | "<<endl;
    cout<<"\t \t \t \t \t \t \t  | "<<endl;
     cout<<"\t \t ------------------------------------------"<<endl;
}
~menz()
{


}


};

int main()
{
    cout<<"\t \t \t \t \t  Mens Club "<<endl;
    menz s;
    s.set_name();
    s.set_number();
    s.set_price();
    s.set_descond();
    s.get_area();
    s.print();




    time_t rawtime;
struct tm * timeinfo;

time ( &rawtime );
timeinfo = localtime ( &rawtime );
printf ( "The current date/time is: %s", asctime (timeinfo) );

    return 0;
}
