#include <algorithm>
#include <iostream>
using namespace std;

void show(int arr[],int arr_size)
{
    for(int i=0;i<arr_size;i++){
        cout<<arr[i]<<",";

    }
}

int main()
{
    int arr[]= {3, 5, 1, 2, 4};
    sort(begin(arr),end(arr));
    for(int i:arr)
    {
        cout<<i<<" ";

    }
    cout<<binary_search(arr,arr+4,3);
    return 0;

}
