#include <iostream>
#include <vector>
using namespace std;

void printarray(int arr[], int size){
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void printvectors(vector<vector<int> > vect){
    for (int i=0; i<vect.size(); i++){
        for (int j=0; j<vect[i].size(); j++){
            cout<<vect[i][j]<<"\n";
        }
    cout<<"\n";
    }
}

void calcfortests(vector<vector<int> > vect, int t){
    for (int testnum=0; testnum<t; testnum++){
        char constraint;
        int k;
        char firstplayer;
        cin >> constraint >> k > firstplayer;

    }
}

void game(int n, int t){
    int* arry = new int[n];  // Allocate n ints and save ptr in a.
    for (int i=0; i<n; i++){
        cin >> arry[i];
    }

    printarray(arry, n);

    vector< vector<int> > maxmatrix(n);
    for (int i=0; i<n; i++){
        vector<int> maxes(n-i);
        int currentmax = arry[i];
        for (int j=i; j<n; j++){
            if (arry[j] > currentmax){
                currentmax = arry[j];
            }
            maxes[j-i] = currentmax;
        }
        maxmatrix[i] = maxes;
    }
    printvectors(maxmatrix);
    calcfortests(maxmatrix, t);
}


int main() {
	// your code goes here
	int n;
	int t;
	cin>>n;
	cin>>t;
	game(n,t);
	return 0;
}

