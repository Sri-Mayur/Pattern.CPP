#include <iostream>
using namespace std;

void print1(int n){
   
    for(int i=0;i<n;i++){

        //Space
        for (int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        //Star
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }

        //Space
        for (int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
}
}


void print2(int n){
   
    for(int i=0;i<n;i++){

        //Space (Use j<i not j<n)
        for (int j=0;j<i;j++){
            cout<<" ";
        }

        //Star (#Important: j<2*n-2*i-1)
        for(int j=0;j<2*n-2*i-1;j++){
            cout<<"*";
        }

        //Space (Use j<i not j<n)
        for (int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
}
}

int main() {
    int n, t;
    cout<<"Enter the test cases:";
    cin>>t;

    for(int i=0;i<t;i++){
        cout<<"Enter the rows "<<i+1<<":";
        cin>>n;
        print1(n);
        
        print2(n);
    }

    return 0;
    
}