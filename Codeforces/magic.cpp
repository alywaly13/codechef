#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

static long long fib[90];
void printarray(long long arr[], int size);

void populatefib(){
    long long fprev = 0;
    long long f = 1;
    for (int i=0; i<90; i++){
        fib[i] = fprev;
//        if (fprev<0){
//            cout<<"!!";
//        }
        if (fib[i]<0){
            cout<<"!!";
        }
        fprev = f;
        f = fib[i] + f;
    }
}

void binarysearch(int a,int b,long long n){
    while (b-a>1){
        int index = (a+b)/2;
        if (fib[index]==n){
            cout<< index-1;
            return;
        }
        else if (n>fib[index]){
            a = index;
        }
        else if (n<fib[index]){
            b = index;
        }
        else{
            cout<<"AHHH";
        }
    }
    //b=a+1
    if (n >= fib[a] && n<fib[b]){
        cout << a-1;
    }
    if (n == fib[b]){
        cout << a;
    }
}

void magic(){
    int t;
    cin >> t;
    long long n;
    for (int i=0; i<t; i++){
        cin>> n;
        binarysearch(0,90,n);
        cout<<"\n";
    }
}

//int main() {
//    populatefib();
//    magic();
//	// your code goes here
//	return 0;
//}

void printarray(long long arr[], int size){
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}



