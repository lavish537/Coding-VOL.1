#include <iostream>
using namespace std;
int main(){
    int a[20],n,index;
    for (int i=1;i<=10;i++){
        cin>>a[i];
    }
    cout<<"enter searching element: ";
    cin>>n;
    for (int i=1;i<=10;i++){
        if (a[i]==n){
            index =i;
            break;
        }
        else {
            continue;
        }
    }
    if (index==0){
        cout<<"the element is not in array";
    }
    else{
        cout<<"the element is at "<<index<<" index value";
    }
    return 0;
}