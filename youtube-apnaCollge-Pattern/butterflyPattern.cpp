#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"n=\n";
    cin>>n;
    
    //butterfly top part
    for(int i=1;i<=n;i++){

        //right half pyramid
        for(int j=1;j<=n;j++){
            if(j<=i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }

        // cout<<endl;
        //left half pyramid
           for(int k=n;k>=1;k--){
            if(k>i){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    
    //butterfly bottom part

        for(int i=1;i<=n;i++){

            //inverted right half pyramid
            for(int j=n;j>=1;j--){
                if(j>=i){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }

            //inverted left half pyramid
            for(int j=1;j<=n;j++){
                if(j>=i){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }

    return 0;
}