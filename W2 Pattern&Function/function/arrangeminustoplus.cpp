// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int arr[] = {23,-7,12,-10,-11,40,60};
    int len = sizeof(arr) / sizeof(int);
    int j = 0;
    for(int i=0; i<len; i++){
        if(arr[i] < 0 ){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    
    for(int i =0 ;i<len;i++){
        cout << arr[i] << " ";
    }

    return 0;
}