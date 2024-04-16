/* 30.Write a program that calculates the average marks of all the subjects.  The number of subjects ‘n’ is accepted from the user.  Allocate memory dynamically for ‘n’ integers.  Free the memory when not in use. */

#include<iostream>
using namespace std;

double avg(int sum,int n){
    double avg;
    avg = (double)sum/n;

    return avg;
}

int main(){
    int n;
    cout<<"Enter subjects : "<<endl;
    cin>>n;
    int *marks = new int[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        cout<<"marks : "<<endl;
        cin>>marks[i];
        sum += marks[i];
    }
    cout<<"Average marks : "<<avg(sum,n)<<endl;

    delete []marks;
    cout<<"Memory freed"<<endl;
    
    return 0;
}