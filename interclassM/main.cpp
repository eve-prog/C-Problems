#include <fstream>

using namespace std;

ifstream fin("interclasm.in");
ofstream fout("interclasm.out");

int x, n, m, a[100001], b[100001], c[200002];

int main()
{
    fin >> x;
    fin >> n;

    for(int i = 0 ; i < n ; i++)
    {
        fin >> a[i];
    }

    fin >> m;
    for(int i = 0 ; i < m ; i++)
    {
        fin >> b[i];
    }

    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            if(a[i]%x ==0)
            {
                c[k++] = a[i++];
            }
            else
            {
                i++;
            }
        }
        else
        {
            if(b[j]<a[i])
            {
                if(b[j] % x == 0)
                {
                    c[k++] = b[j++];
                }
                else
                {
                    j++;
                }
            }
            else
            {
                i++;
                j++;
            }
        }
    }
    while (i < n)
    {
        if(a[i] % x == 0){
        c[k++] = a[i++];
        }else{
            i++;
        }
    }
    while (j < m)
    {
        if[b[j] % x == 0) {
        c[k++] = b[j++];
        }else{
        j++;
        }
    }

    for(int i = 0 ; i < k ; i++)
    {
        fout << c[i] << " ";
    }
    return 0;
}
