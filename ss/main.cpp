#include <fstream>
using namespace std;
ifstream fin("paranteze2.in");
ofstream fout("paranteze2.out");
char ch,stiva[1000002];
int nivel,contor[1000002];
long long general;
int main()
{
    general=0;  nivel=0;
    while(fin>>ch)
    {
        if(ch=='(')
        {
            nivel++;
            contor[nivel]=0;
        }
        else
        {
            if(nivel==0)
            {
                contor[0]=0;
            }
            else
            {
                nivel--;
                contor[nivel]++;
                general=general+contor[nivel];
            }
        }
    }
    fout<<general;
    fin.close();
    fout.close();
    return 0;
}
