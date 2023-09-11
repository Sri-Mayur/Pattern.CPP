#include <iostream>
using namespace std;


void print(int n){
    
    for(int i=0;i<n;i++){
        

        //Space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        

        //Alphabet
        char ch= 'A';
        int breakpoint = (2*i+1)/2;
        for(int j=0; j<2*i+1;j++){
            cout<<ch;
            if(j<breakpoint) ch++;
            else ch--;
            
            
        }

        //Space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
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
