#include <fstream>

using namespace std;

ifstream fin("interclasare3.in");
ofstream fout("interclasare3.out");

int n, m, a[100001], b[100001], c[200002];

int main()
{
    fin >> n;
    fin >> m;

    for(int i = 0 ; i < n ; i ++)
    {
        fin >> a[i];
    }
    for(int i = 0 ; i < m ; i ++)
    {
        fin >> b[i];
    }

    int i = 0, j = m-1, k = 0;
    while (i < n && j >= 0)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j--];
        }
    }
    while (i < n)
    {
        c[k++] = a[i++];
    }
    while (j >= 0)
    {
        c[k++] = b[j--];
    }

    for(int i = 0 ; i < n + m ; i ++)
    {
        if (c[i] % 2 == 0)
        {
            fout << c[i] << " ";
        }
        if(i % 20 == 19)
        {
            fout << endl;
        }
    }
    return 0;
}
