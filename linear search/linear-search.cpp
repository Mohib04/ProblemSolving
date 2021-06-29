#include <iostream>

using namespace std;

int main()
{

    int a[20];
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    ///Enter five elements for a[] arrary
    cout<<"Enter the array elements: ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    ///Enter which element you want to find
    int key;
    cout<<"Enter the key which one you want to search: ";
    cin>>key;
    ///search the key into the array elements
    int j;
    for(j=0; j<n; j++){
        if(key==a[j]){
            cout<<key <<" Present at: "<<j<<" Position "<<endl;
            break;
        }
    }

    ///if element are not present on the array
    if(j==n){
        cout<<key <<" Not present in the array!!" <<endl;
    }


    return 0;
}
