#include<iostream>  //aydarbek
using namespace std;

int main(){

int n;
cin>>n;


int a[n][n];
int count1=0;

for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cin>>a[i][j];
}
}
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){


    if(i!=j){
    if(a[i][j] !=a [j][i]){
        cout<<"Not perfect.";


        return 0;

}
}
}
}
    cout<<"Perfect.";

    return 0;
}
