#include<iostream>
using namespace std;
int main(){
    cout<<"hello\n";
    cout<<"hello"<<"\n";
    cout<<"how r u?"<<"\n";

    //https://youtu.be/LfgAOZ1kKMw?si=jkKBdIqm9mrRgLI3

    //rectangle 
    int rows,coloumns;
    /*
    rows=5;
    coloumns=4;
    cout<<"rows:";
    cin>>rows;
    cout<<"\n";

    cout<<"coloumns:";
    cin>>coloumns;
    cout<<"\n";
    */

    cout<<"rows & cols:";
    cin>>rows>>coloumns;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=coloumns;j++){
            // printf("*");
            cout<<"*";
        }
        // printf("\n");
        // cout<<"\n";
        cout<<endl;
    }

    cout<<"\nhollow rectangle pattern:\n";
       for(int i=1;i<=rows;i++){
        for(int j=1;j<=coloumns;j++){
            if(i==1 || i==rows){
                cout<<"*";
            }
            else if(j==1 || j==coloumns){
                 cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }


    return 0;
}