#include<iostream>
using namespace std;
int main()
{
    int arr1[50], arr2[50], arrMerge[100];
	int size1, size2, i, k;
    cout<<"Enter the Size for First Array: ";
    cin>>size1;
    cout<<"Enter "<<size1<<" Elements for First Array: ";
    for(i=0; i<size1; i++)
    {
        cin>>arr1[i];
        arrMerge[i] = arr1[i];
    }
    k = i;
    cout<<"\nEnter the Size for Second Array: ";
    cin>>size2;
    cout<<"Enter "<<size2<<" Elements for Second Array: ";
    for(i=0; i<size2; i++)
    {
        cin>>arr2[i];
        arrMerge[k] = arr2[i];
        k++;
    }
    cout<<"\nThe New Array (Merged Array):\n";
    for(i=0; i<k; i++)
        cout<<arrMerge[i]<<" ";
    cout<<endl;
    return 0;
}