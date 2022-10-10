#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int i=0;
    for (i=0;i<n;i++){
        int j=0;
        for(j=0;j<n;j++){
            cout<<i;
            j=j+1;
        }
    cout<<endl;
    i=i+1;
    }
}