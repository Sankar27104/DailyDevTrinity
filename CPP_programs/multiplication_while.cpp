#include<iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    cout<<"Enter the number: ";
    cin>>n;
    while(i<=10){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        i++;
    }
}