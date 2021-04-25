#include <iostream>
using namespace std;

void Max_Subarray(int arr[], int n,int csum[])
{
    int maxsum = 0;
    int left = -1, right = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int currsum = 0;
            currsum=csum[j]-csum[i-1];
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
        int csum[n]={0};
        cin>>arr[0];
        csum[0]=arr[0];
        for (int i = 1; i < n; i++)
        {
            cin >> arr[i];
            csum[i]=csum[i-1]+arr[i];
        }
        Max_Subarray(arr, n ,csum);
        return 0;
    }