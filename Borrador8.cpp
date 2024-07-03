#include <iostream>
#include <string>
#include <unistd.h>
#include <ctime>
#include<cstdlib>
using namespace std;

const int max_usuarios = 5;
 
struct Usuario 
{
    string nombre;
    int puntos;
};

void usuario_guardado(Usuario usuarios[], int num_usuarios) 
{
    for (int i = 0; i < num_usuarios; ++i) 
    {
        cout << "Ingrese su nombre de usuario " << i + 1 << ": ";
        cin >> usuarios[i].nombre;
        usuarios[i].puntos = 0;
    }
}

void mostrar_usuarios(const Usuario usuarios[], int num_usuarios) 
{
    cout << "Nombres de los usuarios registrados:\n";
    for (int i = 0; i < num_usuarios; ++i) 
    {
        cout << i + 1 << ". " << usuarios[i].nombre << " - Puntos: " << usuarios[i].puntos << "\n";
    }
}

void mostrar_ganador(const Usuario usuarios[], int num_usuarios) 
{
    if (num_usuarios == 0) 
    {
        cout << "No hay usuarios registrados.\n";
        return;
    }

    int mayor = usuarios[0].puntos;
    string ganador = usuarios[0].nombre;

    for (int i = 1; i < num_usuarios; i++) 
    {
        if (usuarios[i].puntos > mayor) 
        {
            mayor = usuarios[i].puntos;
            ganador = usuarios[i].nombre;
        }
    }

    cout << "El ganador de esta ronda es: " << ganador << " con " << mayor << " puntos\n";
}

int buscar_palabra(const string palabras[], int num_palabras, const string& palabra) 
{
    for (int i = 0; i < num_palabras; ++i) 
    {
        if (palabras[i] == palabra) 
        {
            return 1; 
        }
    }
    return 0; 
}

void sopafacil(int& puntos)
{
	string palabras_facil[] = {"SUPERMAN", "BATMAN", "FLASH", "HULK", "THOR", "LOKI", "IRONMAN", "DEADPOOL", "ROBIN", "STORM", "VISION", "FALCON"};

	const string* palabras;
    int num_palabras;
    int mala = 0;

	palabras = palabras_facil;
    num_palabras = 6;
    char sopafacil1[8][8] = 
    {
        {'S', 'U', 'P', 'E', 'R', 'M', 'A', 'N'},
        {'B', 'J', 'F', 'L', 'A', 'S', 'H', 'R'},
        {'A', 'E', 'R', 'Q', 'W', 'E', 'U', 'T'},
        {'T', 'Y', 'L', 'O', 'K', 'I', 'L', 'I'},
        {'M', 'O', 'P', 'A', 'S', 'D', 'K', 'F'},
        {'A', 'G', 'H', 'T', 'H', 'O', 'R', 'J'},
        {'N', 'K', 'Q', 'E', 'G', 'H', 'C', 'V'},
        {'O', 'H', 'G', 'J', 'P', 'N', 'M', 'B'}
    };

    char sopafacil2[8][8] =
    {
        {'D', 'E', 'A', 'D', 'P', 'O', 'O', 'L'},
        {'S', 'W', 'F', 'B', 'I', 'T', 'M', 'A'},
        {'T', 'H', 'A', 'L', 'R', 'W', 'O', 'R'},
        {'O', 'N', 'L', 'R', 'O', 'B', 'I', 'N'},
        {'R', 'A', 'C', 'F', 'N', 'W', 'L', 'H'},
        {'M', 'D', 'O', 'A', 'M', 'P', 'O', 'O'},
        {'H', 'F', 'N', 'I', 'A', 'C', 'R', 'A'},
        {'V', 'I', 'S', 'I', 'O', 'N', 'P', 'A'}
    };

    srand(time(nullptr));
    int sopa = rand() % 2;

    if(sopa == 0)
    {
        for (int i = 0; i < 8; ++i) 
        {
            for (int j = 0; j < 8; ++j) 
            {
                cout << sopafacil1[i][j] << ' ';
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = 0; i < 8; ++i) 
        {
            for (int j = 0; j < 8; ++j) 
            {
                cout << sopafacil2[i][j] << ' ';
            }
            cout << endl;
        }
    }

	string palabra;
    cout << "Ingrese la palabra encontrada (o 'SALIR' para terminar): ";
    while (true) 
    {
        cin >> palabra;
        if (palabra == "SALIR") 
        {
           break;
        }

	    if (buscar_palabra(palabras, num_palabras, palabra))
	    {
	    	puntos += 2;
		    cout << "Palabra correcta. Usted tiene " << puntos << " puntos.\n";
	    }
	    else
	    {
	    	cout << "Palabra incorrecta." << endl;
            mala++;
	    }
	
	    if(mala > 3)
        {
            cout << "Se acabo el juego.\n";
            break;
        }

        cout << "Puntos actuales: " << puntos << endl;
        cout << "Ingrese otra palabra encontrada (o 'SALIR' para terminar): ";
    }
}

void sopamedia(int& puntos)
{
	string palabras_medio[] = {"PROCESADOR", "PLACABASE", "MEMORIARAM", "TECLADO", "MONITOR", "SSD", "CPU", "MOUSE", "BIOS", "CABLES", "FUENTE", "ROUTER"};

	const string* palabras;
    int num_palabras;
    int mala = 0;

	palabras = palabras_medio;
    num_palabras = 6;
    char sopamedio1[10][10] = 
    {
        {'P', 'L', 'A', 'C', 'A', 'B', 'A', 'S', 'E', 'P'},
        {'C', 'B', 'T', 'Q', 'K', 'Z', 'O', 'P', 'F', 'R'},
        {'V', 'M', 'T', 'E', 'C', 'L', 'A', 'D', 'O', 'O'},
        {'X', 'O', 'Q', 'S', 'R', 'N', 'Y', 'O', 'E', 'C'},
        {'R', 'N', 'S', 'S', 'M', 'V', 'H', 'H', 'I', 'E'},
        {'B', 'I', 'Y', 'D', 'T', 'Q', 'P', 'E', 'S', 'S'},
        {'N', 'T', 'K', 'X', 'E', 'J', 'W', 'T', 'P', 'A'},
        {'G', 'O', 'F', 'Q', 'H', 'D', 'V', 'T', 'T', 'D'},
        {'A', 'R', 'C', 'W', 'N', 'S', 'B', 'R', 'K', 'O'},
        {'H', 'T', 'E', 'P', 'I', 'A', 'G', 'C', 'X', 'R'}
    };

    char sopamedio2[10][10] =
    {
        {'N', 'A', 'R', 'M', 'T', 'O', 'A', 'S', 'E', 'B'},
        {'F', 'I', 'C', 'P', 'U', 'O', 'R', 'C', 'E', 'L'},
        {'U', 'J', 'T', 'E', 'Y', 'L', 'P', 'D', 'O', 'U'},
        {'E', 'O', 'A', 'C', 'A', 'B', 'L', 'E', 'S', 'E'},
        {'N', 'G', 'S', 'S', 'M', 'V', 'H', 'H', 'I', 'L'},
        {'T', 'I', 'Y', 'D', 'T', 'Q', 'P', 'E', 'S', 'B'},
        {'E', 'R', 'E', 'T', 'U', 'O', 'R', 'T', 'P', 'I'},
        {'C', 'O', 'F', 'Q', 'H', 'D', 'V', 'T', 'T', 'O'},
        {'H', 'E', 'C', 'M', 'O', 'U', 'S', 'E', 'K', 'S'},
        {'H', 'O', 'N', 'E', 'P', 'I', 'E', 'C', 'E', 'R'}

    };

    srand(time(nullptr));
    int sopa = rand() % 2;

    if(sopa == 0)
    {
        for (int i = 0; i < 10; ++i) 
        {
            for (int j = 0; j < 10; ++j) 
            {
                cout << sopamedio1[i][j] << ' ';
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = 0; i < 10; ++i) 
        {
            for (int j = 0; j < 10; ++j) 
            {
                cout << sopamedio2[i][j] << ' ';
            }
            cout << endl;
        }
    }

	string palabra;
	cout << "Ingrese la palabra encontrada (o 'SALIR' para terminar): ";
    while (true) 
    {
        cin >> palabra;
        if (palabra == "SALIR") 
        {
            break;
        }
	    if (buscar_palabra(palabras, num_palabras, palabra))
	    {
		puntos += 4;
		cout << "Palabra correcta. Usted tiene " << puntos << " puntos.\n";
	    }
	    else
	    {
		cout << "Palabra incorrecta." << endl;
        mala++;
	    }
	
	    if(mala > 3)
        {
            cout << "Se acabo el juego.\n";
            break;
        }

        cout << "Puntos actuales: " << puntos << endl;
        cout << "Ingrese otra palabra encontrada (o 'SALIR' para terminar): ";
    }
}

void sopadificil(int& puntos)
{
	string palabras_dificil[] = {"CR7", "MESSI", "NEYMAR", "LEWANDOWSKI", "MBAPPE", "DYBALA", "TENIS", "ESQUIAR", "FUTBOL", "MARATON", "OLIMPIADAS", "ATLETISMO"};
	
	const string* palabras;
    int num_palabras;
    int mala = 0;

	palabras = palabras_dificil;
    num_palabras = 6;
    char sopadificil1[12][12] =
    {
        {'M', 'W', 'H', 'G', 'O', 'N', 'E', 'A', 'B', 'S', 'M', 'F'},
        {'J', 'E', 'R', 'T', 'Z', 'Q', 'V', 'U', 'P', 'X', 'I', 'K'},
        {'Y', 'S', 'S', 'E', 'N', 'E', 'Y', 'M', 'A', 'R', 'A', 'C'},
        {'D', 'M', 'V', 'S', 'K', 'H', 'B', 'X', 'J', 'Q', 'G', 'R'},
        {'Y', 'G', 'Q', 'M', 'I', 'I', 'P', 'P', 'E', 'T', 'W', '7'},
        {'B', 'Z', 'T', 'B', 'E', 'W', 'C', 'G', 'H', 'A', 'U', 'D'},
        {'A', 'F', 'L', 'E', 'W', 'A', 'N', 'D', 'O', 'S', 'K', 'I'},
        {'L', 'M', 'B', 'A', 'P', 'P', 'E', 'D', 'E', 'M', 'S', 'C'},
        {'A', 'X', 'I', 'J', 'C', 'D', 'A', 'M', 'W', 'F', 'G', 'K'},
        {'Q', 'S', 'G', 'R', 'O', 'V', 'N', 'P', 'H', 'E', 'U', 'A'}
    };

    char sopadificil2[12][12] =
    {
        {'A', 'E', 'G', 'O', 'N', 'Y', 'E', 'S', 'A', 'Q', 'T', 'G'},
        {'E', 'N', 'E', 'F', 'U', 'T', 'B', 'O', 'L', 'O', 'A', 'Q'},
        {'P', 'O', 'I', 'M', 'A', 'R', 'C', 'H', 'A', 'M', 'A', 'E'},
        {'O', 'S', 'L', 'T', 'A', 'A', 'P', 'E', 'I', 'M', 'A', 'T'},
        {'R', 'T', 'R', 'B', 'S', 'P', 'T', 'N', 'R', 'A', 'O', 'E'},
        {'T', 'C', 'N', 'O', 'C', 'A', 'T', 'U', 'A', 'O', 'S', 'N'},
        {'A', 'R', 'C', 'I', 'C', 'L', 'A', 'S', 'M', 'O', 'A', 'I'},
        {'B', 'A', 'L', 'O', 'M', 'C', 'E', 'S', 'T', 'O', 'E', 'S'},
        {'A', 'J', 'O', 'P', 'O', 'T', 'C', 'A', 'S', 'I', 'O', 'N'},
        {'O', 'L', 'I', 'M', 'P', 'I', 'A', 'D', 'A', 'S', 'M', 'I'},
        {'R', 'O', 'E', 'S', 'Q', 'U', 'I', 'A', 'R', 'Q', 'R', 'O'},
        {'S', 'O', 'E', 'N', 'T', 'R', 'O', 'N', 'A', 'D', 'O', 'R'}
    };

    srand(time(nullptr));
    int sopa = rand() % 2;

    if(sopa == 0)
    {
        for (int i = 0; i < 12; ++i) 
        {
            for (int j = 0; j < 12; ++j) 
            {
                cout << sopadificil1[i][j] << ' ';
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = 0; i < 12; ++i) 
        {
            for (int j = 0; j < 12; ++j) 
            {
                cout << sopadificil2[i][j] << ' ';
            }
            cout << endl;
        }
    }

	string palabra;
   	cout << "Ingrese la palabra encontrada (o 'SALIR' para terminar): ";
    while (true) 
    {
        cin >> palabra;
        if (palabra == "SALIR") 
        {
            break;
        }
	    if (buscar_palabra(palabras, num_palabras, palabra)) 
	    {
	        puntos += 8;
       	    cout << "Palabra correcta. Usted tiene " << puntos << " puntos.\n";
	    }
	    else 
        {
            cout << "Palabra incorrecta." << endl;
            mala++;
        }

	    if(mala > 3)
        {
            cout << "Se acabo el juego.\n";
            break;
        }

        cout << "Puntos actuales: " << puntos << endl;
        cout << "Ingrese otra palabra encontrada (o 'SALIR' para terminar): ";
    }
}

void actualizar_puntos(Usuario usuarios[], int num_usuarios, const string& nombre, int puntos)
{
    for (int i = 0; i < num_usuarios; ++i) 
    {
        if (usuarios[i].nombre == nombre) 
        {
            usuarios[i].puntos += puntos;
            break;
        }
    }
}

void instrucciones()
{
    cout << "La sopa de letras es un juego que consta de una serie de palabras desordenadas, en la que el jugador tiene encontrar o descifrar las palabras escondidas en la sopa de letras.\n";
    sleep(4);
    cout << "Las indicaciones son las siguientes:\n";
    sleep(4);
    cout << "1- El juego es individual, cada persona tiene su perfil.\n";
    sleep(4);
    cout << "2- Deberas encontrar una serie de palabras dispersas en la sopa de letras.\n";
    sleep(4);
    cout << "3- Entre mas palabras encuentre el jugador mayor sera su puntaje (Son 6 palabras en total por plantilla).\n";   
    sleep(4);
    cout << "4- En caso el jugador escriba 3 palabras erroneas el juego terminara.\n";
    sleep(4);
    cout << "5- En el perfil de cada jugador se ira guardando los puntos que recolecte.\n";
    sleep(4);
    cout << "6- Al final del juego se podra ver que jugador consiguio mayor puntaje, en el apartado de Ranking en el menu principal.\n";
    sleep(4);
    cout << "7- Las palabras que vayas encontrando debes escribirlas sin espacios y en mayusculas\n";
    sleep(10);
}

int main() 
{
    Usuario usuarios[max_usuarios];
    int num_usuarios = 0;
    int menu;
    int dificultad;
    string nombre_usuario;

    while (true) 
    {
        sleep(1);
        cout << "_____ SOPA DE LETRAS _____ \n";
        cout << "1) Registro\n";
        cout << "2) Ranking\n";
        cout << "3) Jugar\n";
        cout << "4) Instrucciones\n";
        cout << "5) Nombres\n";
        cout << "6) Salir\n";
        cout << "Elige una opcion: ";
        cin >> menu;

        switch (menu) 
        {
            case 1:
            {
                cout << "Ingrese la cantidad de usuarios: ";
                cin >> num_usuarios;
                if (num_usuarios > max_usuarios) 
                {
                    cout << "Numero de usuarios excede el maximo permitido.\n";
                    num_usuarios = max_usuarios;
                }
                usuario_guardado(usuarios, num_usuarios);
                break;
            }
            case 2:
            {
                mostrar_usuarios(usuarios, num_usuarios);
                mostrar_ganador(usuarios, num_usuarios);
                break;
            }
            case 3:
            {
                cout << "Ingrese su nombre de usuario: ";
                cin >> nombre_usuario;
                cout << "Escoja dificultad: \n";
                cout << "1) Facil\n";
                cout << "2) Intermedio\n";
                cout << "3) Dificil\n";
                cout << "Elige una dificultad: ";
                cin >> dificultad;

                int puntos = 0;
                if(dificultad == 1)
                {
                    cout << "Tematica: superheroes\n";
                    sopafacil(puntos);
                    actualizar_puntos(usuarios, num_usuarios, nombre_usuario, puntos);
                }
                else if( dificultad == 2)
                {
                    cout << "Tematica: partes de la computadora\n";
                    sopamedia(puntos);
                    actualizar_puntos(usuarios, num_usuarios, nombre_usuario, puntos);
                }
                else if(dificultad == 3)
                {
                    cout << "Tematica: Deportes\n";
                    sopadificil(puntos);
                    actualizar_puntos(usuarios, num_usuarios, nombre_usuario, puntos);
                }
                else
                {
                    cout << "Esa no es una opcion";
                }
                break;
            }
            case 4:
            {
                instrucciones();
                break;
            }
            case 5:
            {
                cout << "Hecho por:\n";
                cout << "Anderson Farid Galvez Maldonado - 00042424\n";
                cout << "Marco Sebastian Molina Tobar - 00147624 \n";
                cout << "Gerardo Cornejo Orellana - 00043524\n";
                break;
            }
            case 6:
            {
                cout << "Saliendo del Juego...";
                return 0;
            }
            default:
            {
                cout << "Esa no es una opcion valida.\n";
                break;
            }
        }
    }
    return 0;
}
