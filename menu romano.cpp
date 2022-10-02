	#include <iostream>
	using namespace std;
	
	/*  I equivale a 1.
		V equivale a 5.
		X equivale a 10.
		L equivale a 50.
		C equivale a 100.
		D equivale a 500.
		M equivale a 1000.*/ 
		
		int main(){
			
			int numero, millar, centena, decena, unidad;
			int opcion;
			while (1==1){
			
			cout << "bienvenido que desea realizar: " << endl;
			cout << "convirtir numeros romanos: ( 1 ) " << endl;
			cout << "salir del programa: ( 2 ) "<< endl;
			cin >> opcion;
			
			switch(opcion){
				
				case 1:
					cout <<"convertir numeros romanos: "<<endl;
					if (opcion == 1){
				cout<<"introduce un numero: " <<endl;
				cin >> numero;
				
				unidad=numero%10;
				numero=numero/10;
				decena=numero%10;
				numero=numero/10;
				centena=numero%10;
				millar=numero/10;
				
				cout<<millar<<centena<<decena<<unidad;
				
				switch(millar){
					case 1: cout<<"M"; break;
					case 2: cout<<"MM"; break;
					case 3: cout<<"MMM"; break;
					
				}
				switch(centena){
					case 1: cout<<"C"; break;
					case 2: cout<<"CC"; break;
					case 3: cout<<"CCC"; break;
					case 4: cout<<"CD"; break;
					case 5: cout<<"D"; break;
					case 6: cout<<"DC"; break;
					case 7: cout<<"DCC"; break;
					case 8: cout<<"DCCC"; break;
					case 9: cout<<"CM"; break;
				}
				switch(decena){
					case 1: cout<<"X"; break;
					case 2: cout<<"XX"; break;
					case 3: cout<<"XXX"; break;
					case 4: cout<<"XL"; break;
					case 5: cout<<"L"; break;
					case 6: cout<<"LX"; break;
					case 7: cout<<"LXX"; break;
					case 8: cout<<"LXXX"; break;
					case 9: cout<<"XC"; break;
					
				}
				switch(unidad){
					case 1: cout<<"I"; break;
					case 2: cout<<"II"; break;
					case 3: cout<<"III"; break;
					case 4: cout<<"IV"; break;
					case 5: cout<<"V"; break;
					case 6: cout<<"VI"; break;
					case 7: cout<<"VII"; break;
					case 8: cout<<"VIII"; break;
					case 9: cout<<"IX"; break;
					
				}	
			}
			cout<<endl;
						
					break;
				case 2:
					cout << "saliste del programa ";	
					exit(EXIT_SUCCESS);
					break;
					
				default:
				cout<<"la opcion no es correcta intente de nuevo"<<endl;  
					break;
			}
			} 			
				
			return 0;
		}