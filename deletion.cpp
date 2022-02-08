#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter the size of the array: ";
    cin >> n;
    int arr[n], i, pos;
    cout << "\n Enter the " << n << " elements of the array: \n";
    for(i=0; i<n; i++)
    {
        cin >> arr[i]; 
    }
    cout << "\nThe " << n << " elements of the array, before deletion are : \n";
    for(i=0; i<n; i++)
    {
        cout << arr[i] << "  "; 
    }
    cout << "\n Enter the position, between 1 and " << n << " , of the element to be deleted : ";
    cin >> pos;
    --pos;
    for (i = pos; i <= 9; i++)
    {
        arr[i] = arr[i + 1];
    }
    cout << " \nThe " << n-1 << " elements of the array, after deletion are : \n";
    for(i=0; i<n-1; i++)
    {
        cout << arr[i] << "  "; 
    }      
    cout << "\n";

    return 0;
}
