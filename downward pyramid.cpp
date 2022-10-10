#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int i=1;
    for (i=1;i<n;i++){
        int j=1;
        for(j=i;j<n;j++){
            cout<<"*";
            j=j+1;
        }
    cout<<endl;
    i=i+1;
    }
}