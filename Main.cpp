#include"Lista.cpp"
#include"Empleado.cpp"

void Insertar(ListaEstatica<empleado>&);
void Eliminar(ListaEstatica<empleado>&);
void Buscar(ListaEstatica<empleado>& );



int main(){
    ListaEstatica<empleado> miLista;
    int opcion;
    do {
        std::cout << "\t \n === MENU ===" << std::endl;
        std::cout << "1. Ingresar" << std::endl;
        std::cout << "2. Eliminar" <<std:: endl;
        std::cout << "3. Buscar  " <<std::endl;
        std::cout << "4. Imprime" << std::endl;
        std::cout << "5. Salir" << std::endl;
        std::cout << "Ingrese la opcion: ";
        std::cin >> opcion;
        std::cin.ignore();
        switch(opcion){

            case 1:
                Insertar(miLista);
                break;
            case 2: 
                Eliminar(miLista);
                break;
            case 3: 
                Buscar(miLista);
                break;
            case 4:
                miLista.imprime();
                break;
            case 5: 
                break;
            
            default:
                std::cout<<"Opcion invalida...";
        }
    }while(opcion != 5);
}





void Insertar(ListaEstatica<empleado>& myLista){
   empleado nuevo_empleado;
    std::cin>>nuevo_empleado;
    int i = myLista.Ultimo();
    if(myLista.Vacia()){
        myLista.inserta(nuevo_empleado,0);
    }else{
        myLista.inserta(nuevo_empleado,i );
    }
}


void Eliminar(ListaEstatica<empleado>& myLista){
    empleado eliminar;
    std::string name;
    if(myLista.Vacia()){
        std::cout << "Imposible eliminar... Lista Vacia\n";
    } else {
        std::cout << "Ingrese el nombre del empleado a eliminar: ";
        std::cin >> name;
        eliminar.setNombre(name);

        int pos = -1;
        for (int i = 0; i <= myLista.Ultimo(); i++) {
            if (myLista.recupera(i) == eliminar) {
                pos = i;
                break;
            }
        }

        if (pos != -1) {
            myLista.elimina(pos);
            std::cout << "Empleado eliminado correctamente\n";
        } else {
            std::cout << "Empleado no encontrado\n";
        }
    }
}


void Buscar(ListaEstatica<empleado>& myLista){
   empleado buscar;
    int encontrado;
    std::string name;

    if(myLista.Vacia()){
        std::cout<<"Imposible Buscar... Lista Vacia\n";
    }else{
        std::cout<<"Ingrese el nombre del empleado a buscar: ";
        std::cin>>name;
        buscar.setNombre(name);
        encontrado = myLista.buscar(buscar);
        std::cout<<encontrado;

    }
}

