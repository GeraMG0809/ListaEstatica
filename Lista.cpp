#include"Lista.h"



template <class obj>
ListaEstatica<obj>::ListaEstatica(){
    ultimo = -1;
}

template <class obj>
bool ListaEstatica<obj>::Vacia()const{
    if(ultimo == -1){
        return true;
    }else{
        return false;
    }
}

template<class obj>
bool ListaEstatica<obj>::Llena()const{
    if(ultimo == 50 -1){
        return true;
    }else{
        return false;
    }
}



template <class obj>
bool ListaEstatica<obj>::inserta(obj dato, int pos) {
    if (Llena() || pos < 0 || pos > ultimo + 1) {
        return false;
    }
    int i = ultimo + 1;
    while (i > pos) {
        datos[i] = datos[i - 1];
        i--;
    }
    datos[pos] = dato;
    ultimo++;
    return true;
}
template<class obj>
bool ListaEstatica<obj>::elimina(int pos) {
    if (Vacia() || pos < 0 || pos > ultimo) {  
        return false;
    }
    int i = pos;
    while (i < ultimo) {
        datos[i] = datos[i + 1];
        i++;
    }
    ultimo--;
    return true;
}


template<class obj>
obj ListaEstatica<obj>::recupera(int pos)const{
    if(Vacia()|| pos<0 || pos>ultimo-1){
        std::cout<<"\n Insufiencia de datos";
    }else{
        return datos[pos];
    }
}

template<class obj>
int ListaEstatica<obj>::primero()const{
    if(Vacia()){
        return -1;
    }
    return ultimo;
}


template<class obj>
void ListaEstatica<obj>::imprime() const {
    int i = ultimo;
    if(Vacia()){
        std::cout<<"Lista vacia nada por imprimir...\n";
    }else{

        while (i >= 0) {  
            std::cout << datos[i] << std::endl;
            i--;  
        }
    }
}


template<class obj>
int ListaEstatica<obj>::buscar(obj dat){
    int i=0;
    while(i<=ultimo){
        if(dat == datos[i]){
            return i;
        }
        i++;
    }
    return i;

}


template<class obj>
int ListaEstatica<obj>::Ultimo()const{
    return ultimo;
}