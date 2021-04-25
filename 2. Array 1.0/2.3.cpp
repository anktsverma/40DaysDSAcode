#include <iostream>
using namespace std;

void Max_Subarray(int arr[], int n)
{
    int maxsum = 0;
    int left = -1, right = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int currsum = 0;
            for (int k = i; k <= j; k++)
            {
                currsum += arr[k];
            }
            if (currsum > maxsum)
            {
                maxsum = currsum;
                left = i;
                right = j;
            }
        }
    }
    cout << maxsum << endl;
    for (int k = left; k <= right; k++)
    {
        cout << k << ",";
    }
    cout << endl;
}
    int main()
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Max_Subarray(arr, n);
        return 0;
    }