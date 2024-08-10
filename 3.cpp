#include <iostream>
using namespace std;
int main() {
    int x,y,t=0;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++)
        cin>>a[i];
    cin>>y;
    for(int j=0;j<x;j++){
        if(a[j]==y){
            cout<<j;
            t=0;
            break;
        }else t=1;
    }
    if (t == 1)
        cout<<"-1";
    return 0;
}

