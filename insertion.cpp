#include<iostream>
using namespace std;
int main()
{
    int arr[50], i, elem, pos, tot;
    cout<<"Enter the size for array: ";
    cin>>tot;
    cout<<"Enter "<<tot<<" array elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    cout<<"\nEnter element to insert: ";
    cin>>elem;
    cout<<"At what position you eant to enter:- ";
    cin>>pos;
    for(i=tot; i>=pos; i--)
        arr[i] = arr[i-1];
    arr[i] = elem;
    tot++;
    cout<<"\nThe new array is:\n";
    for(i=0; i<tot; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}    