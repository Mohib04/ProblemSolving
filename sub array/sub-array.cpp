#include<iostream>
using namespace std;
int main(){
    ///array with elements
    int a[]={5,6,7,8,9};
    int i,j,k;
    ///travers the all array elements
    for(i=0; i<5; i++){
        for(j=i; j<5; j++){
            ///print the all sub array
            for(k=i; k<=j; k++){
                cout<<a[k];
            }
            cout<<endl;
        }
    }
}
