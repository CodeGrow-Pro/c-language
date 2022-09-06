#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<"binary search : "<<binary_search(v.begin(),v.end(),3)<<endl;
    cout<<"lower bound : " <<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    cout<<"upper bound : " <<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;
   int a = 8;
   int b = 56;
   swap(a,b);
   cout<<a<<b<<endl;
   string s = "vishalkumar";
   reverse(s.begin(),s.end());
   cout<<"Reverse  : "<<s<<endl;
   rotate(v.begin(),v.begin()+1,v.end());
   for(auto i:v){
    cout<<i<<" ";
   }
   cout<<endl;
 v.push_back(10);
 v.push_back(-5);
 v.push_back(0);
 sort(v.begin(),v.end());
 for(auto i:v){
    cout<<i<<" ";
   }
}