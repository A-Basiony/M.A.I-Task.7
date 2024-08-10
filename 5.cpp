#include <iostream>
using namespace std;
int main() {
    long r,c,cj=0,cv=0,ct=0;
    cin>>r>>c;
    long j[r][c],v[r][c];
    for(long i=0;i<r;i++){
        for(long a=0;a<c;a++){
            cin>>j[i][a];
        }
    }
    for(long x=0;x<r;x++){
        for(long y=0;y<c;y++){
            cin>>v[x][y];
        }
    }
    for(long z=0;z<r;z++){
        for(long w=0;w<c;w++){
           if(j[z][w]>v[z][w]){
               cj++;}
            else if (j[z][w]<v[z][w]){
                cv++;}
            else if (j[z][w] == v[z][w]){
                ct++;}
        }
    }
    if((ct>cj && ct>cv) || cj == cv){
            cout<<"Tie";
        }
    else if(cj>cv){
        cout<<"Justice League";
    }
        else if(cj<cv){
            cout<<"Villains";
        }
    
    return 0;
}
