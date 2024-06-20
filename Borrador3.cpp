#include <iostream>
#include <string>
using namespace std;

const int num_usuarios = 3;

void usuario_guardado(string usuarios[num_usuarios]) 
{
    for (int i = 0; i < num_usuarios; ++i) 
    {
        cout << "Ingrese su nombre de usuario " << i + 1 << ": ";
        cin >> usuarios[i];
    }
}

void sopadeletras(int dificultad)
{
    if(dificultad == 1)
    {
        char sopafacil[8][8] = 
        { 
         {'S', 'U', 'P', 'E', 'R', 'M', 'A', 'N'},
         {'B', 'A', 'T', 'M', 'A', 'N', 'G', 'R'},
         {'E', 'W', 'O', 'N', 'D', 'E', 'R', 'W'},
         {'O', 'M', 'F', 'L', 'A', 'S', 'H', 'I'},
         {'R', 'O', 'N', 'S', 'P', 'I', 'D', 'E'},
         {'R', 'M', 'A', 'N', 'H', 'U', 'L', 'K'},
         {'T', 'H', 'O', 'R', 'C', 'A', 'P', 'T'},
         {'A', 'I', 'N', 'A', 'M', 'G', 'R', 'E'}
        };
    }
    else if(dificultad == 2)
    {
        char sopamedio[10][10] =
        {
            {'P','R','O','C','E','S','A','D','O','R'},
            {'P','L','A','C','A','B','A','S','E','E'},
            {'M','E','M','O','R','I','A','R','A','M'},
            {'D','I','S','C','O','D','U','R','O','N'},
            {'T','A','R','J','E','T','A','G','R','A'},
            {'T','E','C','L','A','D','O','R','R','A'},
            {'R','A','N','U','R','A','G','R','A','F'},
            {'M','O','N','I','T','O','R','S','S','D'},
            {'C','O','N','E','X','I','O','N','E','S'},
            {'F','U','E','N','T','E','D','E','P','O'},
        };
    }
    else
    {

    }
}

void mostrar_usuarios(const string usuarios[num_usuarios]) 
{
    cout << "Nombres de los usuarios registrados:";
    for (int i = 0; i < num_usuarios; ++i) 
    {
        cout << i + 1 << ". " << usuarios[i];
    }
}

int main() {
    string usuarios[num_usuarios];
    int menu;
    int dificultad;
    char sopafacil[8][8];
    char sopamedio[10][10];

    while (true) 
    {
        cout << "_____ SOPA DE LETRAS _____ \n";
        cout << "1) Registro\n";
        cout << "2) Ranking\n";
        cout << "3) Jugar\n";
        cout << "4) Salir\n";
        cout << "Elige una opcion: ";
        cin >> menu;

        switch (menu) 
        {
            case 1:
            {
                usuario_guardado(usuarios);
                break;
            }
            case 2:
            {
                mostrar_usuarios(usuarios);
                break;
            }
            case 3:
            {
                cout << "Escoja dificultad: \n";
                cout << "1) Facil\n";
                cout << "2) Intermedio\n";
                cout << "3) Dificil\n";
                cout << "4) Salir\n";
                cout << "Elige una dificultad: ";
                cin >> dificultad;
                
                cout << sopadeletras(int dificultad);
            }
            case 4:
            {
                cout << "Saliendo del programa...";
                return 0;
            }
            default:
            {
                cout << "Esa no es una opcion";
            }
        }
    }
    return 0;
}
