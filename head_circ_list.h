/**
 * head_circ_list.h - Declaracion de las funciones para listas circulares
 *
 **/

/**
 * Referencias: ELO320 - Estructuras de Datos y Algoritmos
 * http://www2.elo.utfsm.cl/~lsb/elo320/elo320.html
 **/

/* -------- INICIO lista_circ_list.h --------- */

// Variables globales de inicio y termino de lista
static pBloque cabeza = NULL;
static pBloque cola = NULL;

// Punteros de Colas
static pBloque *q;

// Administra el anillo
static int N, _cabeza, _cola, _encolados;

// Crea Bloque
pBloque creaBloque(char nombre)
{
    pBloque pb = NULL;

    if((pb = (pBloque) malloc(sizeof(bloque))) == NULL)
    {
        exit(1);
    }
    else
    {
        pb->nombreArchivo = nombre;
        pb->bloqueSiguiente = NULL;
        pb->pistaAnterior = NULL;
        pb->pistaSiguiente = NULL;
    }
    return pb;
}

// Crea Bloque si existe
pBloque creaBloque2(char nombre)
{
    pBloque pb = NULL;

    if((pb = (pBloque) malloc(sizeof(bloque))) != NULL)
    {
        pb->nombreArchivo = nombre;
        pb->bloqueSiguiente = NULL;
    }
    return pb;
}

// Largo Pista
int largoPista(pBloque p)
{
    int num_elementos = 0;

    while(p != NULL)
    {
        num_elementos++;
        p = p->bloqueSiguiente;
    }
    return num_elementos;
}

// Largo Sector
int largoSector(pBloque p)
{
    int num_elementos = 0;

    while(p != NULL)
    {
        num_elementos++;
        p = p->pistaSiguiente;
    }
    return num_elementos;
}

// Buscar
pBloque buscar(pBloque p, char nombre)
{
    while(p != NULL)
    {
        if(p->nombreArchivo == nombre)
        {
            return p;
        }
        else
        {
            p = p->bloqueSiguiente;
        }
    }
    return p;
}

// Buscar ultimo elemento
pBloque buscarFinal(pBloque p)
{
    pBloque temp;

    if(p == NULL)
    {
        return NULL;
    }
    else
    {
        while(p != NULL)
        {
            temp = p;
            p = p->bloqueSiguiente;
        }
    }
    return temp;
}

// Insertar Bloque insertar Despues
pBloque insertarDespues(pBloque posicion, pBloque nuevo)
{
    if (nuevo == NULL)
    {
        return (NULL);
    }
    if(posicion != NULL)
    {
        nuevo->bloqueSiguiente = posicion->bloqueSiguiente;
        posicion->bloqueSiguiente = nuevo;

        return posicion;
    }
    return nuevo;
}

// Inserta al Inicio
pBloque insertaInicio(char nombre)
{
    pBloque temp = creaBloque(nombre);

    if(cabeza == NULL)
    {
        cola = temp;
    }
    temp->bloqueSiguiente = cabeza;
    cabeza = temp;

    return temp;
}

// Inserta al Final
pBloque insertaFinal(char nombre)
{
    pBloque temp = creaBloque(nombre);

    if(cola == NULL)
    {
        cola = cabeza;
        cabeza = temp;
    }
    else
    {
        cola->bloqueSiguiente = temp;
        cola = temp;
    }
    return temp;
}

// Insertar Bloque Referenciado
void insertarBloqueRef(pBloque *p, pBloque temp)
{
    if(*p == NULL)
    {
        // Inserta en lista vacia
        *p = temp;
    }
    else
    {
        // Lee variable externa
        temp->bloqueSiguiente = *p;

        // Escribe en variable externa
        *p = temp;
    }
}

// Descartar Bloque de Lista
pBloque descartarBloque(pBloque p)
{
    pBloque temp = p;

    if(p == NULL)
    {
        // Lista vacia
        return p;
    }
    if(p->bloqueSiguiente == NULL)
    {
        // Libera memoria, ultimo de la lista
        free(p);
        return(NULL);
    }
    else
    {
        temp = p->bloqueSiguiente;
        free(p);

        // Retorna enlace si borro Bloque
        return temp;
    }
}

/*
 * Buffer Circular
 */

// Iniciar Cola
void QUEUEinit(int _maxN)
{
    // MaxN es el valor N - 1
    // Se pide espacio para N celdas
    q = malloc((_maxN+1)*sizeof(bloque));
    N = _maxN + 1;
    _cabeza = 0;
    _cola = 0;
    _encolados = 0;
}

// Deteccion de Cola Vacia
int QUEUEempty()
{
    return _encolados == 0;
}

// Obtener elemento
pBloque QUEUEget()
{
    pBloque _consumido = q[_cabeza];
    _cabeza = (_cabeza +1) % N;
    _encolados--;

    return _consumido;
}

// Deteccion de Cola Llena
int QUEUEfull()
{
    return (_encolados == N);
}

// Encolar un elemento
void QUEUEput(pBloque item)
{
    q[_cola] = item;
    _cola = (_cola + 1) % N;
    _encolados++;
}

// Borrar cola y recuperar espacio
void QUEUEdestroy(void)
{
    free(q);
}

/* -------- FIN head_circ_list.h --------- */
