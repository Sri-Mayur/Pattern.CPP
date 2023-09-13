#include <iostream>
using namespace std;


void print(int n){

    char ch = 'A'+(n-1);
     for(int i=0; i<n; i++)
   {
        for(char x = ch; x>=ch-i; x--){
           cout<<x<<" ";
        }
        cout<<endl;
   }}

int main() {
    int n,t;
    cout<<"Enter the no. of Test Cases:";
    cin>>t;

    for(int i=0;i<t;i++){
        cout<<"Enter the no. of rows in TestCase"<<i+1<<":";
        cin>>n;
        print(n);
    }}
