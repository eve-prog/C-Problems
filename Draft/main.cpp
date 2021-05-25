#include <fstream>
using namespace std;
#include <fstream>
using namespace std;
ifstream  fin("paranteze2.in");
ofstream fout("paranteze2.out");
char ch,stiva[1000002];
int nivel,contor[1000002];
long long general;
int main()
{
    general=0;  nivel=0;
    while(fin>>ch)///cat timp exista caracter de citit
    {
        if(ch=='(')
        {
            nivel++;///am urcat
            contor[nivel]=0;///am initializat contorul de expresii
        }
        else
        {
            if(nivel==0)
            {
                contor[0]=0;
                ///faptul ca ar trebui sa cobor la nivelul -1
                ///arata ca sirul de paranteze s-a "rupt", sunt prea multe
                ///paranteze inchise, pe care le voi neglija
            }
            else
            {
                nivel--;///cobor
                contor[nivel]++;
                ///cresc contorul pentru ca tocmai s-a inchis paranteza
                ///pentru inca o expresie
                general=general+contor[nivel];
                ///adaug la contorul general contor[k]
                ///deoarece: notez c=contor[k] si expresiile cu e(1),e(2),...,e(c)
                ///secventele care incep cu e(i) si se termina cu noua expresie e(c)
                ///sunt secvente noi, datorita ultimei secvente care este noua; si sunt
                ///in total c expresii
            }
        }
    }
    fout<<general;
    fin.close();
    fout.close();
    return 0;
}
