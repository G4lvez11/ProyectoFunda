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

void mostrar_usuarios(const string usuarios[num_usuarios]) 
{
    cout << "Nombres de los usuarios registrados:\n";
    for (int i = 0; i < num_usuarios; ++i) 
    {
        cout << i + 1 << ". " << usuarios[i] << "\n";
    }
}

void sopadeletras(int dificultad) 
{
    if (dificultad == 1) 
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

        for (int i = 0; i < 8; ++i) 
        {
            for (int j = 0; j < 8; ++j) 
            {
                cout << sopafacil[i][j] << ' ';
            }
            cout << endl;
        }
    } 
    else if (dificultad == 2) 
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
            {'F','U','E','N','T','E','D','E','P','O'}
        };

        for (int i = 0; i < 10; ++i) 
        {
            for (int j = 0; j < 10; ++j) 
            {
                cout << sopamedio[i][j] << ' ';
            }
            cout << endl;
        }
    }
    else if (dificultad == 3) 
    {
        char sopadificil[12][12] =
        {
            {'R', 'B', 'T', 'Q', 'S', 'P', 'J', 'Z', 'W', 'R', 'W', 'G'},
            {'R', 'N', 'G', 'A', 'M', 'E', 'O', 'F', 'T', 'H', 'R', 'O'},
            {'S', 'R', 'L', 'A', 'T', 'T', 'U', 'Q', 'K', 'J', 'A', 'P'},
            {'S', 'N', 'O', 'C', 'R', 'A', 'S', 'P', 'H', 'A', 'Q', 'L'},
            {'A', 'G', 'O', 'O', 'R', 'K', 'S', 'R', 'N', 'H', 'N', 'E'},
            {'L', 'D', 'R', 'A', 'K', 'M', 'R', 'T', 'G', 'K', 'E', 'R'},
            {'E', 'N', 'O', 'S', 'H', 'I', 'E', 'E', 'B', 'O', 'C', 'I'},
            {'A', 'K', 'G', 'G', 'K', 'L', 'B', 'L', 'I', 'E', 'M', 'N'},
            {'B', 'L', 'I', 'K', 'E', 'A', 'A', 'H', 'T', 'R', 'F', 'G'},
            {'M', 'E', 'I', 'N', 'A', 'L', 'F', 'E', 'C', 'A', 'S', 'S'},
            {'O', 'S', 'N', 'E', 'R', 'F', 'S', 'D', 'H', 'T', 'A', 'O'},
            {'T', 'N', 'I', 'R', 'L', 'S', 'S', 'K', 'S', 'I', 'T', 'O'}
        };
        // Mostrar la sopa de letras difícil
        for (int i = 0; i < 12; ++i) 
        {
            for (int j = 0; j < 12; ++j) 
            {
                cout << sopadificil[i][j] << ' ';
            }
            cout << endl;
        }
    }
    else 
    {
        cout << "Dificultad no válida." << endl;
    }
}

int main() 
{
    string usuarios[num_usuarios];
    int menu;
    int dificultad;

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
                usuario_guardado(usuarios);
                break;
            case 2:
                mostrar_usuarios(usuarios);
                break;
            case 3:
                cout << "Escoja dificultad: \n";
                cout << "1) Facil\n";
                cout << "2) Intermedio\n";
                cout << "3) Dificil\n";
                cout << "Elige una dificultad: ";
                cin >> dificultad;
                sopadeletras(dificultad);
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                return 0;
            default:
                cout << "Esa no es una opcion" << endl;
                break;
        }
    }
    return 0;
}