#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

void calc(unsigned int a, unsigned int b){
    int digit=0;
    int i=0;
    while(a)
    {
        if (a & 1==1 && a!=1){
            //last digit is 0
            digit =i+1;
        }
        a >>= 1;
        i++;
    }
    int blength=0;
    while(b)
    {
        b >>= 1;
        blength++;
    }
    cout<<blength;
    cout<<i;
    cout<<digit;
    int diff = abs(blength-i+digit) + digit;
    cout<<diff;
    cout<< " ";
    cout << abs(blength - i + digit + digit);
}

void cookmach(){
    int t;
    cin >> t;
    unsigned int a;
    unsigned int b;
    for (int i=0; i<t; i++){
        cin>> a;
        cin >>b;
        calc(a,b);
        if (i<t-1){
            cout<<"\n";
        }
    }
}

//int main() {
////    int a;
////    int b;
////    int c;
////    cin>>a;
////    cin>>b;
////    cin>>c;
////    cout << abs(a-b+c) << " " << a-b+c;
////    cout<< abs(a-b+c+c);
//    cookmach();
//	// your code goes here
//	return 0;
//}

