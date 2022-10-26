#include <iostream>
#include <string>
using namespace std;

class customer
{
    private:
    int ID_num;
    string First_name;
    string Last_name;
    double credit_limit;
    public:
    void setID_num(int);
    void setFirst_name(string);
    void setLast_name(string);
    double set_credit_limit(double);
    void displayCustomer_data();
    
};
void customer::setID_num(int num)
{
    ID_num = num;
}
void customer::setFirst_name(string f)
{
    First_name=f;
}
void customer::setLast_name(string l)
{
    Last_name=l;
}
double customer::set_credit_limit(double x)
{
    if(x<=10000)
        credit_limit = x;
    else 
        credit_limit = 10000;
}
void customer::displayCustomer_data()
{
    cout<<"Customer ID: "<<ID_num<<endl;
    cout<<"Customer First Name: "<<First_name<<endl;
    cout<<"Customer Last Name: "<<Last_name<<endl;
    cout<<"Customer Credit Limit: "<<credit_limit<<endl;
}
int main()
{
    int id;
    string first, last;
    double credit;
    customer acustomer[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter customer id ";
        cin>>id;
        cout<<"\nEnter customer 2 names";
        cin>>first>>last;
        cout<<"\nEnter credit limit";
        cin>>credit;
    acustomer[i].setID_num(id);
    acustomer[i].setFirst_name(first);
    acustomer[i].setLast_name(last);
    acustomer[i].set_credit_limit(credit);
    }
    for(int i=0;i<5;i++)
    {
    acustomer[i].displayCustomer_data();
    }

    return 0;
}













