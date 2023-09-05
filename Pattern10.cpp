#include <iostream>
using namespace std;

/*This is the wrong method
void print(int n){

    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*n-i;j++){
            cout<<"*";
        }

        cout<<endl;
    }
    

}
*/

void print(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars =i;
        if(i>n) stars =2*n-i;
        for (int j =1; j<=stars; j++){
            cout<<"*";
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