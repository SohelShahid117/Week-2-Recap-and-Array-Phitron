#include<iostream>
using namespace std;
int main(){
    //https://youtu.be/LfgAOZ1kKMw?si=K14Xr83s_FIx1FRs
    int row;
    cout<<"row:\n";
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        int space = 2*(row-i);
        for(int j=1;j<=space;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

      for(int i=row;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        int space = 2*(row-i);
        for(int j=1;j<=space;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }


    return 0;
}