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

void sopadeletras (int dificultad)




void mostrar_usuarios(const string usuarios[num_usuarios]) 
{
    cout << "Nombres de los usuarios registrados:" << endl;
    for (int i = 0; i < num_usuarios; ++i) 
    {
        cout << i + 1 << ". " << usuarios[i] << endl;
    }
}

int main() {
    string usuarios[num_usuarios];
    int menu;
    char sopafacil[8][8];

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
                int dificultad;
                cout << "Las dificultades son:\n";
                cout << "1) Facil\n";
                cout << "2) Intermedio\n";
                cout << "3) Dificil\n";
                cout << "4) Salir\n";
                cout << "Elige una dificultad: ";
                cin >> dificultad;

                switch(dificultad)
                {
                    case 1:
                    {

                    }

                    case 2:
                    {

                    }

                    case 3:
                    {

                    }

                    case 4:
                    {
                        cout << "Saliendo...";
                        return 0;
                    }
                    default:
                    {
                        cout << "Esa opcion no existe";
                    }

                }
                break;
            }
            case 4:
            {
                cout << "Saliendo del programa" << endl;
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
