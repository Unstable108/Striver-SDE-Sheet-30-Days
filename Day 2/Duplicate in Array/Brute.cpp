#include<bits/stdc++.h>
using namespace std;

int duplicate(vector<int> a)
{
    sort(a.begin(), a.end()); // Sort the array

    for(int i = 0; i < a.size() - 1; i++)
    {
        if(a[i] == a[i + 1])
            return a[i];
    }
    
    return -1; // No duplicate found
}

int main()
{
    vector<int> arr = {1, 3, 8, 9, 3};
    int p = duplicate(arr);
    
    if (p != -1)
        cout << "The duplicate is: " << p << endl;
    else
        cout << "No duplicate found." << endl;

    return 0;
}
