#include<iostream>
#include<map>
using namespace std;

int main()
{
    map <string,string> blood_group_list;

    blood_group_list["akshay"] = "O+";
    blood_group_list["aman"] = "A+";
    blood_group_list["ambuj"] = "B+";
    blood_group_list["akshat"] = "AB+";

    cout<<"the size of list is "<<blood_group_list.size()<<endl;
    cout<<blood_group_list["akshay"];
}
