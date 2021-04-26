// C++  STL : Vector
#include <iostream>
#include <set>
#include <algorithm>
//this algorithm has various inbuilts:sort,binary_search,upper bound,lower bound etc....
using namespace std;

int main() {
    //sets by defaul stores the inseted values in ascending order
   set<int>S;
   S.insert(1);
   S.insert(9);
   S.insert(3);
   S.insert(12);
   S.insert(12);
   S.insert(12);
   S.insert(12);
   S.insert(12);
   S.erase(9);
   for(int x : S){
       cout<<x<<endl;
   }
   auto it=S.find(-1);
   if(it == S.end())
   {
       cout<<"Element not found"<<endl;
   }
   auto it2=S.upper_bound(3);
   auto it21=S.lower_bound(3);
   cout<<*it2<<" "<<*it21<<endl;
    //This upeer_bound and lower_bound only works if an element occurs number of times
   auto it4=S.upper_bound(12);
   if(it4 == S.end())
   {
       cout<<"OOPs !!...Element not found"<<endl;
   }
    return 0;
}
