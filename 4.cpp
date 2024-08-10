#include <iostream>
using namespace std;
int main() {
    int x,max=-10000000;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
    }
    cout<<max;
    return 0;
}

