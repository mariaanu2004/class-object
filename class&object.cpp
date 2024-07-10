//An Example of class and Object
#include<iostream>          //Header File
using namespace std;
class myClass
{
private:                // Private Access Specifier
    int pass;
public:                 //Public Access Specifier
    string user_name;
    string gmail_Id;
    int setpass(int p)     //Set Function
    {
        pass = p;
    }
    void getpass()           //Get Function
    {
        cout<<"Password is: "<<pass<<endl;
    }
};
int main()
{
    myClass user;
    cout<<"Give the User Name: "<<endl;
    cin>>user.user_name;
    cout<<user.user_name<<endl;
    cout<<"Give the Gmail id: "<<endl;
    cin>>user.gmail_Id;
    cout<<user.gmail_Id<<endl;
    cout<<"Give the User Name: "<<endl;
    cin>>user.user_name;
    cout<<user.user_name<<endl;
    cout<<"Give the Gmail id: "<<endl;
    cin>>user.gmail_Id;
    cout<<user.gmail_Id<<endl;
    int password;
    cout<<"Give The password: "<<endl;
    cin>>password;
    user.setpass(password);
    user.getpass();
//int password;
    cout<<"Give The password: "<<endl;
    cin>>password;
    user.setpass(password);
    user.getpass();
    return 0;
}
