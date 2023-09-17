#include<iostream>


template <class obj>
class ListaEstatica{
    private:
        obj datos[50];
        int ultimo;

    public:

        ListaEstatica();
        listCopy(const ListaEstatica<obj>);
        bool Vacia()const;
        bool Llena()const;
        bool inserta(obj, int);
        bool elimina(int);

        obj recupera(int)const;
        int primero()const;
        int Ultimo()const;
        void imprime()const;
        int buscar(obj);


};
