#include<iostream>
using namespace std;

int main(){
    //https://youtu.be/k9OlCJFy5yo?si=3Njx4rxLHP9e4YEK
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


    return 0;
}