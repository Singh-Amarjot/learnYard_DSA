#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 7;
    int arr[n] = {-1, 2, 3, 4, 0, -8, -7};
    vector<int> arr1;
    vector<int> arr2;
    vector<int> arr3;
    int negative_counter_arr1 = 0;
    int arr1_counter = 0;
    int arr2_counter = 0;
    int arr3_counter = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] < 0 && negative_counter_arr1 <= 0)
        {
            arr1.push_back(arr[i]);
            arr1_counter++;
            negative_counter_arr1++;
        }
        else if (arr[i] <= 0)
        {

            arr3.push_back(arr[i]);
            arr3_counter++;
        }
        else if (arr[i] > 0)
        {
            arr2.push_back(arr[i]);
            arr2_counter++;
        }
    }
    cout << arr1_counter << " ";
    for (int i = 0; i < arr1.size(); i++)
    {

        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << arr2_counter << " ";
    for (int i = 0; i < arr2.size(); i++)
    {

        cout << arr2[i] << " ";
    }
    cout << endl;
    cout << arr3_counter << " ";
    for (int i = 0; i < arr3.size(); i++)
    {

        cout << arr3[i] << " ";
    }
    return 0;
}
// https://codeforces.com/problemset/problem/300/A this is the problem link