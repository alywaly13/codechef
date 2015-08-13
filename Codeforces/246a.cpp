#include <iostream>

using namespace std;

void printArray(int arr[], int length){
    for (int i=0; i<length; i++){
        cout<<arr[i];
        cout<< " ";
    }
}

void sortMe(int arr[], int length){
    for (int i=0; i<length-1; i++){
        for (int j=i; j<length-1; j++){
            if (arr[j]> arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printArray(arr, length);
}

void findCounterexample()
{
    int n;
    cin >> n;
    if (n==0 || n==1 || n==2){
        cout<<-1;
        return;

    }
    int arr[n];
    int x = 100;
    for (int i=0; i<n; i++){
        arr[i] = x;
        x = x-1;
    }
    printArray(arr, n);
  //  cout<<endl;
 //   sortMe(arr, n);
}

//int main(){
//    findCounterexample();
//    return 0;
//}








