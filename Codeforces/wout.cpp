#include <iostream>
using namespace std;

//void printarray(int arr[], int size){
//    for (int i=0; i<size; i++){
//        cout<<arr[i]<<" ";
//    }
//}

void wayout(int n, int h){
    int* up = new int[n];  // Allocate n ints and save ptr in a.
    int* down = new int[n];  // Allocate n ints and save ptr in a.
    for (int i=0; i<n; i++) {
        down[i] = 0;
        up[i] = 0;    // Initialize all elements to zero.
    }
    int a;
    int b;
    //gaps[i] = number of columns with gap in row i
    for (int linenum =0; linenum<n; linenum++){
        cin>>a;
        cin>>b;
        up[a] = up[a] + 1;
        if (b != n-1){
            down[b+1] = down[b+1] + 1;
        }
    }

    int upcum[n];
    int downcum[n];
    upcum[0]=up[0];
    downcum[0]=down[0];
    for (int i=1; i<n; i++){
        upcum[i] = upcum[i-1] + up[i];
        downcum[i] = downcum[i-1] + down[i];
    }
    int maxconsecutivegaps = 0;
    int sumconsecutivegaps = 0;
    for (int i=0; i<h; i++){
        sumconsecutivegaps += upcum[i]-downcum[i];
    }
    maxconsecutivegaps = sumconsecutivegaps;
    for (int i=1; i<=n-h; i++){
        sumconsecutivegaps = sumconsecutivegaps - upcum[i-1]+downcum[i-1]+ upcum[i+h-1]-downcum[i+h-1];
        if (sumconsecutivegaps > maxconsecutivegaps){
            maxconsecutivegaps = sumconsecutivegaps;
        }
    }
    cout<<n*h - maxconsecutivegaps;
}

void wayoutinput(){
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        int n;
        int h;
        cin >>n;
        cin >>h;
        wayout(n, h);
        cout<<"\n";
    }
}

//int main() {
//    wayoutinput();
//	// your code goes here
//	return 0;
//}
