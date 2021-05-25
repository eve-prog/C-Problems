#include <iostream>

using namespace std;

int n, a[100001], b[100001], c[200002];
int k = 0;

int main()
{
    cin >> n;
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> b[i];
    }
        for(int i = 0 ; i < n ; i ++)
    {
        cin >> c[i];
    }
    int i = 0;
    int j = 0;
    int l = 0;
    int m = 0;

    while (i < n && j < n && l < n)
    {
        if(a[i] == b[j] && b[j] == c[l])
        {
            cout << a[i];
            m++;
            break;
        }
        else
        {
            int vmin = a[i];
            if(b[j]<vmin)
            {
                vmin = b[j];
            }
            if(c[l]<vmin)
            {
                vmin = c[l];
            }
            if(a[i] == vmin)
            {
                i++;
            }
            if(b[j] == vmin)
            {
                j++;
            }
            if(c[l] == vmin)
            {
                l++;
            }
        }
    }

    if(m == 0)
    {
        cout << -1 << endl;
    }

    return 0;
}
