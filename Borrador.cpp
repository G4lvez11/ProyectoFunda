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
    cout << "Nombres de los usuarios registrados:" << endl;
    for (int i = 0; i < num_usuarios; ++i) 
    {
        cout << i + 1 << ". " << usuarios[i] << endl;
    }
}

int main() {
    string usuarios[num_usuarios];
    int menu;

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
                cout << "Elige una dificultad: ";
                cin >> dificultad;
                break;
            }
            case 4:
            {
                cout << "Saliendo del programa." << endl;
                return 0;
            }
            default:
            {
                cout << "Opcion invalida. Intenta de nuevo." << endl;
            }
        }
    }
    return 0;
}
