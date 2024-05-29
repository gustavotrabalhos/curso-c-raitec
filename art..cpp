#include <iostream>
using namespace std;

int main()
{

    int i, j, aux, aux2;

    for(i = 0; i < 14; i++)
    {
        cout << "                        " ;


        for(j = 0; j < 4; j++)
        {

           if(i == j)
            {
                cout << "O" ;
            }
            if( (j == 0 && i > 0 && i < 13) || (j == 1 && i > 1 && i < 12) || (j == 2 && i > 2 && i < 11) || (j == 3 && i > 3 && i < 10))
            {
                cout << "| ";
            }
            else if(( j == 0 && i== 13) ||( j == 1 && i == 12) ||( j == 2 && i == 11) ||( j == 3 && i == 10))
            {
                cout << "+" ;
            }
            if((j == 0 && i == 13) || (j == 1 && i == 12) || (j == 2 && i == 11) || (j == 3 && i == 10))
            {
                cout << "-------------------O";
            }
        }
        cout << endl;
    }



    for(i = 0; i < 4; i++)
    {
        aux = 20 - i;
        aux2 = i + 1;
        while(aux2 >= 0)
        {
            cout << " ";
            aux2--;
        }
        while(aux >= 0)
        {
            cout << "#";
            aux--;
        }
        cout << endl;
    }
    for(i = 0; i < 6; i++)
    {
        cout << "                #######"<< endl;
    }

    for(i = 0; i < 6; i++)
    {
        aux = i + 1;
        aux2 = 6 - i;
        cout << "                ";
        while(aux > 0)
        {
            cout << " ";
            aux--;
        }
        while(aux2 > 0)
        {
            cout << "#";
            aux2--;
        }
        cout << endl;
    }
}
