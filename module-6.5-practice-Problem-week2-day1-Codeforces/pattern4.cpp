#include<iostream>
using namespace std;

int main(){
    cout<<"enter row number:\n";
    int row;
    cout<<"row :\n";
    cin>>row;

    //fully pyramid
    for(int i=1;i<=row;i++){
        int space = row-i;
        int star = i*2-1;
        for(int j=space;j>=1;j--){
            // cout<<"#";
            cout<<"  ";
        }
        for(int k=1;k<=star;k++){
            cout<<"* ";
        }
          for(int j=space;j>=1;j--){
            // cout<<"#";
            cout<<"  ";
        }
        cout<<endl;
    }
}