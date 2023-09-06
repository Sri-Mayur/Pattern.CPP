#include <iostream>
using namespace std;

void print(int n){
    int start;

    for(int i=0;i<n;i++){
        if(i%2==0) start=1;
        else start=0;

        for (int j=0;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}
int main() {
    int n,t;
    cout<<"Enter the no. of Test Cases:";
    cin>>t;

    for(int i=0;i<t;i++){
        cout<<"Enter the no. of rows in TestCase"<<i+1<<":";
        cin>>n;
        print(n);
    }
}