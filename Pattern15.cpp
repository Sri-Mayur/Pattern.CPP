//Reverse Triangle
#include <iostream>
using namespace std;


void print(int n){
    
    for(int i=0;i<n;i++){
        char ch= 'A';
        for(int j=0; j<=n-i-1;j++){
            cout<<ch++<<" ";
            
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
