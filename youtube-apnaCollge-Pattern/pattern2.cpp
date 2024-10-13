#include<iostream>
using namespace std;
int main(){

    // cout<<"\nhi\n";
    int n;
    cout << "enter a number:\n";
    cin>>n;

    cout<<"half pyramid\n";
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<"inverted half pyramid\n";
    for (int i=1;i<=n;i++){
        for (int j=n;j>=i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<"half pyramid after 180 deg rotation\n";
      for (int i=1;i<=n;i++){
        /*
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        */
        for(int j=1;j<=n;j++){
            if(j<=n-i){
            cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }




    return 0;
}
