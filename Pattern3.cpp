#include <iostream>
using namespace std;



void print(int n){

    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int t;
    int n;

    cout<<"Enter the no. of test cases:";
    cin>>t;
     for(int i=0; i<t; i++){
        cout<<"Enter the no. of rows in the TestCase "<<i+1<<":";
        cin>>n;
        print(n);

     }

}