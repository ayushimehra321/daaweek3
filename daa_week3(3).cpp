#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int c=0,s=0;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                c++;
                if(arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                    s++;
                }
            }

        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"Comparisons:"<<c<<endl<<"Shifts: "<<s;
    }
    cout<<endl;
    return 0;
}
