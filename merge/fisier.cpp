#include <fstream>

using namespace std;

ifstream fin("interclasare1.in");
ofstream fout("interclasare1.out");

int n, m, a[100001], b[100001], c[200002];
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
        while( i < n && j < m )
        {
            if(a[i] < b[j])
            {
                c[k++] = a[i++];
            }
            else if (a[i] > b[j])
            {
                c[k++] = b[j++];
            }
            else if(a[i] == b[j])
            {
                c[k++] = a[i++];
            }
        }
        while(i < n)
        {
            c[k++] = a[i++];
        }
        while(j < m)
        {
            c[k++] = a[j++];
        }

    for(int i = 0 ; i < n + m ; i ++)
    {
        fout << c[i] << " ";
        if(i % 10 == 9){
            fout << endl;
        }
    }
    return 0;
}
