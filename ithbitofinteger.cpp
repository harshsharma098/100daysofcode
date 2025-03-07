#include <iostream>
using namespace std;
int main() {
    int num, i;
    cout<<"enter the decimal number"<<endl;
    cin>>num;
    cout<<"enter the ith index"<<endl;
    cin>>i;
    if(num & (i<<1)){
        cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    return 0;
}
