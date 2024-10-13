#include<iostream>
using namespace std;
int main(){
    //https://youtu.be/LfgAOZ1kKMw?si=T-oSpWF_KXDHcuJH
    cout << "half pyramid using number:\n";
    int n;
    cout<<"n=\n";
    cin>>n;
    cout<<"half pyramid using numbers:\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}