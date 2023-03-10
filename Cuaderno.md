# Arrays

Es un dato estructurado que almacena un conjunto de datos homogéneo (todos del mismo tipo y
relacionados). Cada uno de los elementos que componen un vector pueden ser:
Simples: como caracteres, entero o real.

Compuestos o estructurados: como son vectores, estructuras o listas.
![Esta es una imagen de ejemplo](https://www.aulafacil.com/uploads/cursos/954/editor/java-lecc-25_arraysexp.jpg)

#include <stdio.h>
#include <string.h>
//#define TAM =20

int main( )
{
    char Nombre[20] = "pat_mic";

    printf("\n La cadena es: %s ", Nombre);
    printf("\n La cadena es: %20s ", Nombre);
    printf("\n La cadena es: %-20s ", Nombre);
    printf("\n La cadena es: \r %s ", Nombre);

    int len = strlen(Nombre);
    printf("\n La long es: %i ", len);

    printf("Salida for: \n");
    for (int i = 0; i < strlen(Nombre); i++)
        printf("\n %c ", Nombre[i]);

    int i=0;
    printf("Salida while: \n");
    while (i < len)   // Nombre[i] != '\0'
    {
        printf("\n %c ", Nombre[i]);
        i++;
    }
    
    i=0;
    printf("Salida while2: \n");
    while (Nombre[i] != '\0')  
    {
        printf("\n %c ", Nombre[i++]);
    }
    return 0;
}

# Matrices

Puede almacenar varias variables del mismo tipo en una estructura de datos de matriz.
Puede ser una matriz unidimensional, multidimensional o escalonada.

![Esta es una imagen de ejemplo](https://codigosdeprogramacion.com/cursos/wp-content/uploads/2017/03/Imagen1.jpg)

Puede almacenar varias variables del mismo tipo en una estructura de datos de matriz.
Puede ser una matriz unidimensional, multidimensional o escalonada.

# Archivos de texto en C++

Los archivos de texto contienen datos en formato de texto simple. Podemos abrir un archivo de texto
en modo lectura o escritura y podemos leer o escribir texto en él. Aquí hay un ejemplo de cómo leer
un archivo de texto:

{

    #include <iostream>
    #include <fstream>
    #include <unistd.h>
    using namespace std;
    void LeerArchivo(string pathFile)  //-->  datafiles/ListaAlumnos.txt
    {
    string s;
    fstream f;
    f.open(pathFile, ios_base::in);
    if ( !f.is_open() ) 
        cout << "Error de abrir el archivo." << endl;
    else
        do 
        {
            getline( f, s );
            cout << s << endl;
        }while( !f.eof() );
    f.close();
    }
    void CrearArchivo(string pathFile)  //-->  datafiles/ListaAlumnos.txt
    {
    string s;
    fstream f;

    cout << "Escibiendo en un archivo" << endl;
    f.open(pathFile, ios_base::app);

    if (f.is_open())
    {
        // f << "pepe lucho" << endl;
        // f << "ana" << endl;
        do
        {
            cout<< "(N = salir ) Ingresa un nombre: ";
            cin>>s;
            if (s!="N")
                f << s << endl;
        } while (s!="N");
    }
    f.close();
    }

    int main()
    {
    Loading();
    // CrearArchivo("datafiles/ListaAlumnos.txt");
    // LeerArchivo("datafiles/ListaAlumnos.txt");
    return 0;
    }
    }

# Punteros en C++

Los punteros en C++ son variables que contienen direcciones de memoria. Los punteros se utilizan
para trabajar con datos en la memoria y para compartir datos entre funciones.
- Los punteros pueden apuntar a cualquier tipo de datos, ya sea un valor entero, un carácter, un flotante,
una matriz, una estructura, etc.
- Los punteros se pueden pasar como argumentos a funciones, lo que permite que la función modifique
el valor de una variable de forma indirecta.
- Los punteros se pueden utilizar para crear estructuras de datos avanzadas como listas enlazadas,
árboles binarios y grafos.

![Esta es una imagen de ejemplo](https://wiki.dcc.uchile.cl/cc3301/_media/punteros_comparacion.png?w=400&tok=07b4d4)

    #include <iostream>

    using namespace std;

    int **crearMatrizMalloc(int f, int c)
    {  
        int **m=NULL;
        m = (int **) malloc(f*sizeof(int *));
        for (int i = 0; i < f; i++)
            m[i] = (int *) malloc(c*sizeof(int));
        
        return m;
    }
    int **crearMatrizCalloc(int f, int c)
    {
        int **m=NULL;
        m = (int **) calloc(f, sizeof(int *));
        for (int i = 0; i < f; i++)
            m[i] = (int *) calloc(c, sizeof(int));
        
        return m;
    }
    int **crearMatrizNew(int f, int c)
    {   //int i = new int(10);    //heap   --> delete
        //int i = 10;             //stack
        int **m=NULL;
        m = new int*[f];
        for (int i = 0; i < f; i++)
            m[i] = new int[c];

        return m;
    }
    void showMatriz(int **pd, int f,int c)
    {
        for (int i = 0; i < f; i++)
        {
                for (int j = 0; j < c; j++)
                    cout<< pd[i][j] <<"\t";   
                cout<< endl;
        }
    }

    int main()
    {
        int f = 0, c = 0;
        int **pd=NULL;

        cout<<"Ingresa fila y columnas de la matriz : ";
        cin>> f >> c;
    
        pd = crearMatrizNew(f,c);

        for (int i = 0; i < f; i++)
            for (int j = 0; j < c; j++)
                pd[i][j] = rand() % 10;  // genera randomicos hasta 10
        
        showMatriz(pd,f,c);
        return 0;
    }

# Pilas en C++

Una pila en C++ es una estructura de datos que sigue el principio LIFO (Last In, First Out), es decir, el
último elemento que se inserta es el primero que se saca. Las pilas se pueden implementar en C++
utilizando arreglos o listas enlazadas.

![Esta es una imagen de ejemplo](https://upload.wikimedia.org/wikipedia/commons/thumb/d/d1/Pila.svg/1200px-Pila.svg.png) 

    #include <iostream>
    using namespace std;
    
    struct nodo{
        int nro;
        struct nodo *sgte;
    };
    
    typedef nodo *ptrPila;   // creando nodo tipo puntero( tipo de valor )
    //struct nodo1 ptrPila1;   

    void push( ptrPila &p, int valor )      // Apilar
    {
        ptrPila aux = new(struct nodo);  // apuntamos al nuevo nodo creado
        aux->nro = valor;
        
        aux->sgte = p ;
        p = aux ;
        cout <<" << apilado >> " <<endl;
    }
    
    void pop( ptrPila &p )   // Desapilar
    {
        ptrPila aux;
        
        aux = p ;
        //num = aux->nro;   // asignamos el primer vamor de la pila
        cout <<" << desapilado >> " << aux->nro <<endl;
        
        p = aux->sgte ;
        delete(aux);
    }
    
    void mostrar_pila( ptrPila p )
    {
        ptrPila aux;
        aux = p;     // apunta al inicio de la lista
        
        while( aux !=NULL )
        {
            cout<<"\t"<< aux->nro <<endl;
            aux = aux->sgte;
        }    
    }
    
    void destruir_pila( ptrPila &p)
    {
        ptrPila aux;
        
        while( p != NULL)
        {
            aux = p;
            p = aux->sgte;
            cout<<"despachando: "<< aux->nro <<"\t";
            delete(aux);
        }
        cout<<"\n\n\t\t Pila despachada...\n\n";
    }
    
    int menu()
    {
        int op;
        cout<<endl;
        cout<<" 1. APILAR                                "<<endl;
        cout<<" 2. DESAPILAR                             "<<endl;
        cout<<" 3. ELIMINAR PILA                         "<<endl;
        cout<<" 4. SALIR                                 "<<endl;
        cout<<"\n INGRESE OPCION: ";
        cin>> op;
        if (op==4)  exit(0);
        return op;
    }
    
    int main()
    {
        ptrPila p = NULL;  // creando pila
        int valor;
        int op;
    
        do
        {
            cout<<"\n\n    FUNCIONALIDAD PILA : \n";
            if(p==NULL)
                cout<<"\t << vacia >> ";
            else
                mostrar_pila( p );
            switch(menu())
            {
                case 1: cout<< "\n NUMERO A APILAR: "; cin>> valor;
                        push( p, valor );
                        break;
                case 2: pop( p );
                        break;
                case 3: destruir_pila( p );
                        break;
            }
        }while(op!=5);
        return 0;
    }

# Colas en c++

Una cola en C++ es una estructura de datos que sigue el principio FIFO (First In, First Out), es decir, el
primer elemento que se inserta es el primero que se saca. Las colas se pueden implementar en C++
utilizando arreglos o listas enlazadas.

![Esta es una imagen de ejemplo](https://upload.wikimedia.org/wikipedia/commons/thumb/b/bb/Cola.svg/1200px-Cola.svg.png)


## Ejemplo de cola en C++ con listas enlazadas

Supongamos que queremos implementar una cola de enteros utilizando listas enlazadas en C++.
Podríamos definir una clase Cola con los siguientes métodos:

    #include <iostream>
    using namespace std;
    
    struct nodo              //  [ # ]>-->
    {
        int nro;
        struct nodo *sgte;
    };
    
    struct cola             //  <--< >-->   
    {
        nodo *delante;
        nodo *atras  ;
    };
    
    
    void encolar( struct cola &q, int valor )
    {
        struct nodo *aux = new(struct nodo);
        
        aux->nro = valor;
        aux->sgte = NULL;
        
        if( q.delante == NULL)
            q.delante = aux;   // encola el primero elemento
        else
            (q.atras)->sgte = aux;
        q.atras = aux;        // puntero que siempre apunta al ultimo elemento
    }
    
    int desencolar( struct cola &q )
    {
        int num ;
        struct nodo *aux ;
        
        aux = q.delante;      // aux apunta al inicio de la cola
        num = aux->nro;
        q.delante = (q.delante)->sgte;
        delete(aux);          // libera memoria a donde apuntaba aux
        
        return num;
    }
    
    void muestraCola( struct cola q )
    {
        struct nodo *aux;
        aux = q.delante;
            
        while( aux != NULL )
        {
                cout<<"   "<< aux->nro ;
                aux = aux->sgte;
        }    
    }
    
    void vaciaCola( struct cola &q)
    {
        struct nodo *aux;
        
        while( q.delante != NULL)
        {
                aux = q.delante;
                q.delante = aux->sgte;
                delete(aux);
        }
        q.delante = NULL;
        q.atras   = NULL;
    }
    
    int menu()
    {
        int op=0;
        system("cls");
        cout<< endl <<"[...] COLAS          "
            << endl <<"  0.  SALIR          "
            << endl <<"  1.  ENCOLAR        "
            << endl <<"  2.  DESENCOLAR     "
            << endl <<"  3.  MOSTRAR COLA   "
            << endl <<"  4.  VACIAR COLA    "
            << endl <<"  5.  SALIR          "
            << endl <<"\n INGRESE OPCION:   ";
        cin>> op;
        return op;
    }
    
    int main()
    {
        struct cola q;
        q.delante = NULL;
        q.atras   = NULL;
    
        int dato;  // numero a encolar
        int x ;    // numero que devuelve la funcon pop
    
        system("color 0b");
        do
        {
            switch( menu() )
            {
                case 0: exit(0); 
                case 1:
                        cout<< "\n NUMERO A ENCOLAR: "; cin>> dato;
                        encolar( q, dato );
                        cout<<"\n\n\t\tNumero " << dato << " encolado...\n\n";
                        break;
                case 2:
                        x = desencolar( q );
                        cout<<"\n\n\t\tNumero "<< x <<" desencolado...\n\n";
                        break;
                case 3:
                        cout << "\n\n MOSTRANDO COLA\n\n";
                        if(q.delante!=NULL) muestraCola( q );
                        else   cout<<"\n\n\tCola vacia...!"<<endl;
                        break;
                case 4:
                        vaciaCola( q );
                        cout<<"\n\n\t\tHecho...\n\n";
                        break;
            }
            cout<<endl<<endl;
            system("pause");  
        }while(true);
        return 0;
    }

# Listas enlazadas en c++

Una lista enlazada es una estructura de datos en la que cada elemento está conectado a través de
punteros a su siguiente elemento en la lista. Las listas enlazadas pueden ser simples o dobles, y se
utilizan comúnmente en C++ para implementar estructuras de datos como pilas, colas y árboles.

![Esta es una imagen de ejemplo](https://calcifer.org/documentos/librognome/img/lista.png)

## Ejemplo de lista enlazada simple en C++
Supongamos que queremos implementar una lista enlazada simple de enteros en C++. Podríamos
definir una clase Nodo que representa cada nodo de la lista, y una clase ListaEnlazada que tiene
punteros al primer y último nodo de la lista.

    // Ordenamiento de burbuja en una lista de numeros : lista enlazada simple
    #include <iostream>
    #include <stdlib.h>
    using namespace std;

    struct nodo{
        int nro;        // en este caso es un numero entero
        struct nodo *sgte;
    };

    typedef struct nodo *Tlista;

    Tlista inicio, fin;

    void generarLista( Tlista &inicio, Tlista &fin, int n ) 
    {
        Tlista q, t;
        for(int i=0; i<n; i++)
        {
            q = new(struct nodo);
            q->nro = rand()%51;
            
            if(inicio==NULL)
            {
                q->sgte = inicio;
                inicio  = q;
                fin     = q;          
            }
            else
            {
                q->sgte   = fin->sgte;
                fin->sgte = q;
                fin       = q;
            }
        }
        cout<<"\n\n\tLista de numeros generados... "<<endl;
    }

    void mostrarLista(Tlista inicio)
    {
        while(inicio != NULL)
        {
            cout <<"  " << inicio->nro ;
            inicio = inicio->sgte;
        }
    }

    void ordenarLista(Tlista lista)
    {
        Tlista actual , siguiente;
        int t;
        
        actual = lista;
        while(actual->sgte != NULL)
        {
            siguiente = actual->sgte;
            while(siguiente!=NULL)
            {
                if(actual->nro > siguiente->nro)
                {
                        t = siguiente->nro;
                        siguiente->nro = actual->nro;
                        actual->nro = t;          
                }
                siguiente = siguiente->sgte;                    
            }    
            actual = actual->sgte;
            siguiente = actual->sgte;
            
        }
        cout<<"\n\n\tLista ordenada..."<<endl;
    }

    void menu()
    {
        cout<<"\n\t\tORDENAMIENTO BURBUJA EN LISTA ENLAZADA SIMPLE\n\n";
        cout<<" 1. GENERAR NUMEROS                  "<<endl;
        cout<<" 2. MOSTRAR NUMEROS                   "<<endl;
        cout<<" 3. ORDENAR NUMEROS                   "<<endl;
        cout<<" 4. SALIR                            "<<endl;
        cout<<"\n INGRESE OPCION: ";
    }


    /*                        Funcion Principal
    ------------------------------------------------------------------*/
    int main()
    {
        inicio = NULL;
        fin    = NULL;
        
        int op;     // opcion del menu
        int num;   // elemenento a ingresar

        do
        {
            menu();  cin>> op;
            switch(op)
            {      
                case 1:
                    cout<< "\n Cantidad de numeros: "; cin>> num;
                    generarLista( inicio, fin, num );
                    break;
                case 2:
                    cout<<"\n\n LISTA:\n\n";
                    mostrarLista( inicio );
                    break;
                case 3:
                    ordenarLista( inicio );
                    break;            
            }
            cout<<endl<<endl;
        }while(op!=4);
    return 0;
    }

## Árboles en C++
Un árbol es una estructura de datos no lineal que se utiliza para almacenar y organizar datos
jerárquicamente. En un árbol, cada elemento se llama nodo, y cada nodo puede tener uno o más
nodos hijos que cuelgan de él. El nodo superior se llama la raíz del árbol, y los nodos sin hijos se
llaman hojas.
Son estructuras de datos abstractas que se utilizan en varios algoritmos fundamentales.
Generalmente son estructuras jerárquicas donde debe haber un nodo raíz y sus hijos formando subárboles.
Además, existen múltiples tipos de estructura de árbol, cada uno adecuado para necesidades particulares y
que ofrece algunas ventajas y desventajas.
Un árbol binario es una de las subclases de estructuras de datos de árbol, y se define como un árbol donde
cada nodo debe tener dos hijos como máximo, incluidos los nodos hijos designados como left y right.

![Esta es una imagen de ejemplo](data:image/jpeg;base64,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)

    #include <iostream>
    #include <cstdlib>
    using namespace std;

    struct nodo{
        int nro;
        struct nodo *izq, *der;
    };

    typedef struct nodo *ABB;
    /* es un puntero de tipo nodo que hemos llamado ABB, que ulitizaremos
    para mayor facilidad de creacion de variables */

    ABB crearNodo(int x)
    {
        ABB nuevoNodo = new(struct nodo);
        nuevoNodo->nro = x;
        nuevoNodo->izq = NULL;
        nuevoNodo->der = NULL;

        return nuevoNodo;
    }
    void insertar(ABB &arbol, int x)
    {
        if(arbol==NULL)
        {
            arbol = crearNodo(x);
        }
        else if(x < arbol->nro)
            insertar(arbol->izq, x);
        else if(x > arbol->nro)
            insertar(arbol->der, x);
    }

    void preOrden(ABB arbol)
    {
        if(arbol!=NULL)
        {
            cout << arbol->nro <<" ";
            preOrden(arbol->izq);
            preOrden(arbol->der);
        }
    }

    void enOrden(ABB arbol)
    {
        if(arbol!=NULL)
        {
            enOrden(arbol->izq);
            cout << arbol->nro << " ";
            enOrden(arbol->der);
        }
    }

    void postOrden(ABB arbol)
    {
        if(arbol!=NULL)
        {
            postOrden(arbol->izq);
            postOrden(arbol->der);
            cout << arbol->nro << " ";
        }
    }

    void verArbol(ABB arbol, int n)
    {
        if(arbol==NULL)
            return;
        verArbol(arbol->der, n+1);

        for(int i=0; i<n; i++)
            cout<<"   ";

        cout<< arbol->nro <<endl;

        verArbol(arbol->izq, n+1);
    }

    int main()
    {
        ABB arbol = NULL;   // creado Arbol

        int n;  // numero de nodos del arbol
        int x; // elemento a insertar en cada nodo

        cout << "\n\t\t  ..[ ARBOL BINARIO DE BUSQUEDA ]..  \n\n";

        cout << " Numero de nodos del arbol:  ";
        cin >> n;
        cout << endl;

        for(int i=0; i<n; i++)
        {
            cout << " Numero del nodo " << i+1 << ": ";
            cin >> x;
            insertar( arbol, x);
        }

        cout << "\n Mostrando ABB \n\n";  verArbol( arbol, 0);
        cout << "\n Recorridos del ABB";
        cout << "\n\n En orden   :  ";   enOrden(arbol);
        cout << "\n\n Pre Orden  :  ";   preOrden(arbol);
        cout << "\n\n Post Orden :  ";   postOrden(arbol);
        cout << endl << endl;
        return 0;
    }

# Autómatas en C++
Un autómata finito es una máquina que puede estar en un estado determinado en un momento
dado, y que cambia de estado en respuesta a una entrada. En C++, podemos implementar un
autómata utilizando un switch y una variable que representa el estado actual de la máquina.

![Autómatas](https://1.bp.blogspot.com/-6dwxdw3C8pk/XaCBEOXb6eI/AAAAAAAAAI0/CG9yemd4bSEUPOmCktbe1FTNBexGnd0sgCLcBGAsYHQ/s1600/Automatas-Finitos-Deterministas-AFD.png)

    #include <iostream>
    #include <vector>
    #include <algorithm>
    #include <string>
    #include <stdlib.h>
    #define MAX 100
    using namespace std;

    void MostrarEstados(vector<int> v){
        cout << "\n\n ESTADOS DEL AUTOMATA \n\n";
        for(int i=0; i<v.size(); i++){
            cout << " " << i <<"  -->  q" << v[i] << endl;
        }
    }

    void IngresaAutomata(vector<int> &E, vector<char> &S, int T[MAX][MAX]){

        int numE;  // Numero de estados
        int numS;  // Numero de simbolos
        char c;

        // Generando estados
        cout << "\n Cantidad de Estados: ";
        cin >> numE;
        for(int i=0; i<numE; i++){
            E.push_back(i);
        }

        // Ingresando simbolos
        cout << "\n Cantidad de Simbolos: "; cin >> numS;
        cout << endl;
        for(int i=0; i<numS; i++){
            cout << "\t Simbolo " << i+1 << " : ";
            cin >> c;
            S.push_back(c);
        }
        sort(S.begin(),S.end());  // Ordenando simbolos

        // Ingresando tabla de transiciones
        cout << "\n INGRESE TABLA DE TRANSICIONES \n\n";
        for(int i=0; i<numE; i++){
            for(int j=0; j<numS; j++){
                cout << "\t T["<<i<<"]["<<j<<"] : ";
                cin >> T[i][j];
            }
        }

        // Mostrando tabla de transiciones
        cout << "\n\n TABLA DE TRANSICIONES \n\n";
        for(int i=0; i<numE; i++){
            for(int j=0; j<numS; j++){
                cout << "\t" << T[i][j] << "  ";
            }
            cout << endl;
        }
    }

    void menu(){
        cout << "\n\t\t AUTOMATA FINITO DETERMINISTA\n\n";
        cout << "\t 1. Ingresar Automata \n";
        cout << "\t 2. Verificar palabra              \n";
        cout << "\t 3. Salir                          \n";
        cout << "\t Ingrese opcion: ";
    }

    bool VerificarPalabra(vector<int> w, int T[MAX][MAX], int q0, vector<int>qf){

        int q, s;
        q = q0;
        bool EstadoVerificacion = false;

        for(int i=0; i<w.size(); i++){
            s = w[i];
            q = T[q][s];
        }

        for(int i=0; i<qf.size(); i++){
            if(q==qf[i]){
                EstadoVerificacion = true;
                break;
            }
        }
        return EstadoVerificacion;
    }

    void ConvertirPalabra(string palabra, vector<char>S, vector<int>&w){

        int i, k=0;

        while(w.size()!=palabra.length()){
            for(i=0; i<S.size(); i++){
                if(palabra[k]==S[i]){
                    w.push_back(i);
                }
            }
            k++;
        }
    }
    /*                  Funcion Principal
    --------------------------------------------------------------*/
    int main()
    {
        vector<int> Estados;
        vector<char> Simbolos;
        int Transiciones[MAX][MAX];
        int q0;              // Estado inicial
        vector<int>qf;       // Estados finales
        vector<int>w;
        bool AutomataIngresado = false;  // Aun no se ha ingresado automata

        int op, temp, tam;

        do{
            menu(); cin>>op;

            switch(op){

                case 1:
                    Estados.clear();
                    Simbolos.clear();
                    qf.clear();

                    IngresaAutomata(Estados, Simbolos, Transiciones);
                    MostrarEstados(Estados);

                    cout << "\n Ingrese estado inicial: ";
                    cin >> q0;

                    cout << "\n Cuantos de estados finales hay?: ";
                    cin >> tam;

                    cout << endl;
                    for(int i=0; i<tam; i++){
                        cout << "\t Numero de estado final: ";
                        cin >> temp;
                        qf.push_back(temp);
                    }

                    AutomataIngresado = true;
                    break;

                case 2:

                    if(AutomataIngresado){
                        string palabra;
                        w.clear();
                        bool EstadoVerificacion = false;
                        cout << "\n Ingrese palabra: ";
                        cin>> palabra;

                        ConvertirPalabra(palabra, Simbolos, w);

                        EstadoVerificacion = VerificarPalabra(w, Transiciones, q0, qf);

                        if(EstadoVerificacion){
                            cout << "\n\t Palabra aceptada \n\n";
                        }
                        else{
                            cout << "\n\t Palabra no aceptada \n\n";
                        }
                    }
                    else{
                    cout << "\n Automata no ingresado..! \n";
                    }

                    break;

                case 3:
                    exit(0);

                default:
                    cout << "\n\tOpcion incorrecta..!\n";
            }

            //cout << "\n\n"; system("pause"); system("cls");

        }while(op!=3);
    }
