#include <vector>
#include <iostream>
using namespace std;

void print_arr(int arr[],int size){

    for(int i=0;i<size;i++){

        cout<< arr[i]<<" ";

    }
}
 int main(){
    
    int n=10;
    int arr1[n]={2,3,6};
    int size = sizeof(arr1)/sizeof(arr1[0]);
    cout<< size<< " "<< endl;

    print_arr(arr1,n);


 }


