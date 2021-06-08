#include <fstream>

using namespace std;

ifstream fin("pozmax.in");
ofstream fout("pozmax.out");

int n, i, u, p;
double maxx = -1;
double x;
double v[1000];

int main()
{
    fin >> n;

    for(i = 1; i <= n; i ++)
    {
        fin >> x;
        if(x > maxx){
            maxx = x;
            p = i;
            u = i;
         }else if(x == maxx) {
            u = i;
         }
    }

    fout << (int)p << ' ' << (int)u << endl;

    return 0;
}
