#include <iostream>
#include <math.h>
using namespace std;

int main () {

    int n;  //random age
    int k;  //3-digit random


    cin>>n;
    cin>>k;

    
    cout<<n+(k/100)+(k%10);

    return 0;

}