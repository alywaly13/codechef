
#include <iostream>

using namespace std;

//void printArray(int arr[], int length){
//    for (int i=0; i<length; i++){
//        cout<<arr[i];
//        cout<< " ";
//    }
//}

void islandss(){
    int n;
    int i = 0;
    int islands;
    char chr = 'L';
    string input;
    cin >>n;
    cin>>islands;
    int maxislands = (n/2)*(n/2) + (n/2 + n%2)*(n/2 + n%2);
    if (islands > maxislands){
        cout<<"NO";
        return;
    }
    else{
        cout<<"YES\n";
        for (int r=0; r<n; r++){
            for (int c=0; c<n; c++){
                if ((i<islands) && ((r%2==0 && c%2==0) || (r%2==1 && c%2==1))){
                    cout<<'L';
                    i = i+1;
                }
                else{
                    cout<<'S';
                }
            }
            cout<<"\n";
        }
    }
}



//int main(){
//    islandss();
//    return 0;
//}









