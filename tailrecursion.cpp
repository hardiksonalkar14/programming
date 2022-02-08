#include<iostream>
using namespace std;
void  func1(int x){
   if(x>0){
       cout<<x<<endl;
       func1(x-1);
   }
}
int main(){
   int x=3;
    func1(x);
    return 0;

}