/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class Cafetera{
    public:
    virtual void mostrarCatalogo()  = 0;
    virtual void capuchino()=0;
    virtual void tinto()=0;
};
class Nexpresso: public Cafetera{
    public: 
    void mostrarCatalogo()  {
        cout<<"nombre: essenza"<<endl;
         cout<<"marca: Nexpresso"<<endl;
          cout<<"precio: 500.000"<<endl;
    }
     void capuchino(){
         cout<<"Capuchino listo";
     }
     void tinto(){
         cout<<"tinto listo";
     }
};
class BLacknDecker: public Cafetera{
      public: 
    void mostrarCatalogo()  {
        cout<<"nombre: cm010"<<endl;
         cout<<"marca: BlacknDecker"<<endl;
          cout<<"precio: 250.000"<<endl;
    }
     void capuchino(){
         cout<<"Capuchino listo";
     }
     void tinto(){
         cout<<"tinto listo";
     }
};
class Kraups: public Cafetera{
      public: 
    void mostrarCatalogo() {
        cout<<"nombre: simple"<<endl;
         cout<<"marca: Kraups"<<endl;
          cout<<"precio: 300.000"<<endl;
    }
     void capuchino(){
         cout<<"Capuchino listo";
     }
     void tinto(){
         cout<<"tinto listo";
     }
};
int
main ()
{
    Cafetera* essenza = new Nexpresso();
    Cafetera* cm010 = new BLacknDecker();
    Cafetera* simple = new Kraups();
    
  cout << "Bienvenido a cafeteras santiago" << endl;
  int opcion;
  int eleccion;
  int tipoDeCafe;
  	  int repetir = 0;
  do
	{
	  cout <<
		"Ingrese 1 para pedir un cafe. Ingrese 2 para ver las cafeteras disponibles. Ingrese 3 para salir: ";
	  cin >> opcion;

	  switch (opcion)
		{
		case 1:
		  cout << "este es nuestro catalogo de maquinas de cafe:";
		  	 cout<<"/////////////////////"<< endl;
		  	 cout<<"cafetera 1:"<<endl;
		 essenza ->mostrarCatalogo();
		 cout<<"/////////////////////"<< endl;
		 cout<<"cafetera 2:"<<endl;
		 cm010 -> mostrarCatalogo();
		 	 cout<<"/////////////////////"<< endl;
		 	 cout<<"cafetera 3:"<<endl;
		 simple ->mostrarCatalogo();
		 	 cout<<"/////////////////////"<< endl;
		 	 cout<<"ingrese la cafetera que desea para hacer un cafe:";
		 	 cin>>eleccion;
		 	 cout<<"ingrese 1 para tinto, 2 para capuchino";
		 	 cin>>tipoDeCafe;
		 	 if (eleccion==1){
		 	     if (tipoDeCafe==1){
		 	         essenza->tinto();
		 	     } else if (tipoDeCafe==2){
		 	         essenza->capuchino();
		 	     }
		 	 
		 	 }else if (eleccion==2){
		 	      if (tipoDeCafe==1){
		 	         cm010->tinto();
		 	     } else if (tipoDeCafe==2){
		 	         cm010->capuchino();
		 	     }
		 	     
		 	 }else if (eleccion ==3){
		 	      if (tipoDeCafe==1){
		 	         simple->tinto();
		 	     } else if (tipoDeCafe==2){
		 	         simple->capuchino();
		 	     }
		 	 }
		 	 cout<<endl;
		  cout << "ingrese 0 para regresar, 1 para salir:";
		  cin >> repetir;
		  break;
		case 2:
		  cout << "este es nuestro catalogo de maquinas de cafe:" << endl;
		  

		 essenza ->mostrarCatalogo();
		 cout<<"/////////////////////"<< endl;
		 cm010 -> mostrarCatalogo();
		 	 cout<<"/////////////////////"<< endl;
		 simple ->mostrarCatalogo();
		 	 cout<<"/////////////////////"<< endl;
		  cout << "ingrese 0 para regresar, 1 para salir:";
		  cin >> repetir;
		  break;
		case 3:
		  cout << "hasta luego.";
		  break;
		}
	}
  while (repetir == 0);
  return 0;
}
