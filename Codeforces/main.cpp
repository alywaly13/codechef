#include <iostream>
//#include <array>
#include "246a.h"
using namespace std;

//int main()
//{
//
//    findCounterexample();
//  //  int arr[] = {50,49,48,23,4,4,6,8};
////    cout >> arr.size();
//    //sortMe(arr, n);
//}

void hexagonThing()
{
    int x;
    int y;
    cin >> x;
    cin >> y;
    int ans;
    ans = x*x + y*y + 4*x*y;
    cout << ans;
}
