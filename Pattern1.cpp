//A program to print pattern for n cases

#include <iostream>

using namespace std;


//Function for printing the pattern
void print(int n)
{

  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          cout<<"* ";
      }
      cout<<endl;
  }
}

// Main function to enter the test case and enter the no. of rows in each test case.
int main(){
    int n, t, i;
    cout<<"Enter the no. of test cases:";
    cin>>t;
    for(i=0; i<t;i++){
        cout<<"Enter the rows for testcase "<< i+1<<":";
         cin>>n;
         print(n);
    }
}