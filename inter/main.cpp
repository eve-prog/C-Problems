#include <fstream>

using namespace std;

ifstream fin("interclasare2.in");
ofstream fout("interclasare2.out");

int n, m, a[100001], b[100001], c[200002], d[200002];
int k = 0;

int main()
{
    fin >> n;

    for(int i = 0 ; i < n ; i ++)
    {
        fin >> a[i];
    }
    fin >> m;
    for(int i = 0 ; i < m ; i ++)
    {
        fin >> b[i];
    }

    int i = 0, j = 0, k = 0;
    int l = 0;

    while (i < n && j < m && l < m+n)
    {
        if (a[i] < b[j])
        {
            d[l++] = a[i++];
        }
        else if (a[i] > b[j])
        {
            d[l++] = b[j++];
        }
        else
        {
            c[k++] = a[i++];
            j++;
        }
    }
    while (i < n)
    {
        d[l++] = a[i++];
    }
    while (j < m)
    {
        d[l++] = b[j++];
    }

    for(int i = 0 ; i < k ; i ++)
    {
        fout << c[i] << " ";
        if(i % 10 == 9)
        {
            fout << endl;
        }

    }
    return 0;
}
