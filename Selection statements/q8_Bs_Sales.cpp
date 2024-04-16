#include<iostream>

using namespace std;

int main()
{
    double Basic_Salary,Sales_amount,commision,totalSalary;
    cout<<"Enter Basic Salary :"<<endl;
    cin>>Basic_Salary;
    cout<<"Enter total_Sales :"<<endl;
    cin>>Sales_amount;

    if(Sales_amount>=5000 && Sales_amount<=7500){
        commision = Sales_amount*0.03;
    }
    else if(Sales_amount>=7501  && Sales_amount<=10500){
        commision = Sales_amount*0.08;

    }
    else if (Sales_amount>=10501 && Sales_amount<=15000){
        commision = Sales_amount*0.11;
    }
    else if(Sales_amount>=15000){
        commision=Sales_amount*0.15;
    }
    else{
        commision=0;
    }
    totalSalary = Basic_Salary + commision;

    cout << "The net salary of the salesperson is: " << totalSalary << " Rupees" << endl;
    cout << "The commission earned by the salesperson is: " << commision << " Rupees" << endl;

    return 0;
}