//A program to print pattern for n cases

#include <iostream>

using namespace std;


//Function for printing the pattern
void print(int n)
{
  int i, j; 
  \
  for(i=1;i<=n;i++){
      for(j=0;j<i;j++){
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