#include <iostream>
using namespace std;


void print(int n){
   
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
        print(n);
    }

    return 0;
    
}