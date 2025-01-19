#include <iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter the number of the row"<<endl;
    cin>>row;
    int **arr=new int*[row];
    for(int i=0;i<row;i++){
        int col=0;
        cout<<"enter the number of coloum"<<endl;
        cin>>col;
        arr[i]=new int[col];
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;arr[i][j]!='\0';j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
