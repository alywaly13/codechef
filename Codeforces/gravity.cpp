#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

void calc(string a, string b){
//   cout << a.length();
 //  cout <<b.length();
   int last;
   long switches = -1;
   for(long i = 0; i < a.size(); i++) {
        if (a[i]=='#' && b[i]=='#'){
            cout << "No";
            return;
        }
        else if (a[i]=='#' && b[i]=='.'){
      //      cout<<"b";
            if (last !=2){
                switches++;
      //          cout<<switches;
            }
            last=2;
        }
        else if (b[i]=='#' && a[i]=='.'){
    //        cout<<"a";
            if (last!=1){
                switches++;
      //          cout<<switches;
            }
             last=1;
        }
        else if (b[i]=='.' && a[i]=='.'){
     //       cout<<".";
        }
    }
    cout<<"Yes\n";
    cout <<switches;
}

void gravity(){
    long t;
    cin >> t;
    string a;
    string b;
    for (long i=0; i<t; i++){
        cin>> a;
        cin >>b;
//          if (a.length() > 18000){
//            char *str = "Foo"; // Compiler marks the constant string as read-only
//            *str = 'b';
//        }
//        if (a.length() > 190000){
//        	cout << 5/0;
//        }

        calc(a,b);
        cout<<"\n";
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
//    gravity();
//	// your code goes here
//	return 0;
//}
