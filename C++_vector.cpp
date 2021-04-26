// C++  STL : Vector
#include <iostream>
#include <vector>
#include <algorithm>
//this algorithm has various inbuilts:sort,binary_search,
using namespace std;
int main() {
    vector<int>A={22,3,23,45};
    //vector iterator
    vector<int>::iterator i;
    //vector sort
    sort(A.begin(),A.end());
    //vector extract element 
    for(i=A.begin();i!=A.end();i++){
        //use a pointer to print element which includes a iterator.....i.e *i (here)
        cout<<*i<<"  ";
    }
    cout<<" "<<endl;
    //vector->binary search
    bool present=binary_search(A.begin(), A.end(), 3);
    cout<<present<<endl;
    present=binary_search(A.begin(), A.end(), 43);
    cout<<present<<endl;
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    //iterator  >= 100(here)
    vector<int>::iterator itr=lower_bound(A.begin(), A.end(), 100);
    //iterator  > 100(here)
    //if no element is strictly greater them 100...it prints 0 
    vector<int>::iterator itr2=upper_bound(A.// C++  STL : Vector
#include <iostream>
#include <vector>
#include <algorithm>
//this algorithm has various inbuilts:sort,binary_search,
using namespace std;
bool f(int x,int y)
{
    return x<y;
}
int main() {
    vector<int>A={22,3,23,45};
    //vector iterator
    //same as auto i
    vector<int>::iterator i;
    //vector sort
    sort(A.begin(),A.end());
    //vector extract element 
    for(i=A.begin();i!=A.end();i++){
        //use a pointer to print element which includes a iterator.....i.e *i (here)
        cout<<*i<<"  ";
    }
    cout<<" "<<endl;
    //vector->binary search
    bool present=binary_search(A.begin(), A.end(), 3);
    cout<<present<<endl;
    present=binary_search(A.begin(), A.end(), 43);
    cout<<present<<endl;
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    //iterator  >= 100(here)
    vector<int>::iterator itr=lower_bound(A.begin(), A.end(), 100);
    //iterator  > 100(here)
    //if no element is strictly greater them 100...it prints 0 
    vector<int>::iterator itr2=upper_bound(A.begin(), A.end(), 100);
    cout<<*itr<<" "<<*itr2<<endl;
    cout<<itr-itr2<<endl;
    //here f is a comparator function i.e. a function with a condition on how to sort the array
    sort(A.begin(),A.end(),f);
    vector<int>::iterator itr3;
    //same as for(itr3:A)
     for(itr3=A.begin();itr3!=A.end();itr3++){
        //use a pointer to print element which includes a iterator.....i.e *i (here)
        cout<<*itr3<<"  ";
    }
    return 0;
}begin(), A.end(), 100);
    cout<<*itr<<" "<<*itr2<<endl;
    cout<<itr-itr2<<endl;
    return 0;
}
