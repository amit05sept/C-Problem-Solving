#include <bits/stdc++.h>
using namespace std;
//recursion
// void printAll(vector<int> arr, int i)
// {
//     if (i == arr.size())
//         return;
//     for (int j = i; j <= arr.size()-1; j++)
//     {
//         for(int k = i; k <= j; k++){
//             cout << arr[k] << " ";
//         }
//         cout<<endl;
//     }
//     printAll(arr, i + 1);
// }

int main()
{
    // int arr = [1,2,3,4,5];
    vector<int> arr = {1, 2, 3, 4, 5};
    printAll(arr, 0);

    cout<<"\n";
    //brute force iterative
    // for(int i = 0; i < arr.size(); i++){
    //     for(int j =i; j <= arr.size()-1; j++){
    //         for(int k=i;k<=j;k++){
    //             cout<<arr[k]<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }

    //better way
    
    return 0;
}