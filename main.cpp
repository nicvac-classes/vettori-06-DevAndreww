#include <iostream>
using namespace std;

int main() 
{
    int N, i;

    cout << "Quanti atleti partecipano alla competizione?" << endl;

    cin >> N;

    float tempi[N];

    string nomi[N];

    string nazionali[N];

    i=0;

    while(i<N)
    {
        cout << "Qual'è il nome, la nazionalità e il tempo del " << i+1 << "° atleta?" << endl;

        cin >> nomi[i];
        cin >> nazionali[i];
        cin >> tempi[i];

        i=i+1;
    }

    i=0;

    while(i<N)
    {
        cout << "Il " << i+1 << "° atleta si chiama " << nomi[i] << ", è del paese: " << nazionali[i] << " ed ha un tempo di: " <<tempi[i] << "s." << endl;

        i=i+1;
    }

    int min, Imin;

    i=0;

    min=tempi[i];

    Imin=0;

    while(i<N)
    {
        if(tempi[i]<min)
        {
            min=tempi[i];

            Imin=i;
        }

        i=i+1;
    }

    cout << "Il nome del vincitore è " << nomi[Imin] << " ed è  del paese " << nazionali[Imin] << " e il tempo è " << tempi[Imin] << "s." << endl;
}


