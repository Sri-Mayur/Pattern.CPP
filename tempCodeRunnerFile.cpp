void print1(int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    

}

void print2(int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
