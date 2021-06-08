#include <fstream>

using namespace std;

ifstream fin("maximpar.in");
ofstream fout("maximpar.out");

int n, m;
int maxim = -1;
int apare = 0;
int nrpare = 0;

int main()
{
    fin >> n;

    for(int i = 0 ; i < n ; i ++)
    {
        fin >> m;
        if (m % 2 == 0) {
            nrpare++;
            if(m > maxim) {
                maxim = m;
                apare++;
            }
        }
    }

    if(nrpare == 0){
        fout << -1 << endl;
    }else{
        fout << maxim << ' ' << apare << endl;
    }

    return 0;
}
