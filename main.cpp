#include <iostream>
#include "proj_8.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void menu()
{
	cout<< "Escolha uma opção:\n\n";
	cout<< "1 - Inicializar "<< endl;
	cout<< "2 - Vazia "<< endl;
	cout<< "3 - Insere inicio"<< endl;
	cout<< "4 - Insere Fim"<< endl;
	cout<< "5 - Imprime"<< endl;
	cout<< "6 - Retira"<< endl;
	cout<< "7 - Buscar dado"<< endl;
	cout<< "8 - Tamanho"<< endl;
	cout<< "9 - Remove Inicio" << endl;
	cout<< "10 - Remove Fim"<< endl;
	cout<< "11 - Imprime Inicio"<< endl;
	cout<< "12 - Imprime Fim"<< endl;
	cout<< "13 - Libera\n"<< endl;
	cout<< "Qualquer outra opção para sair\n";
	cout<< "Opção: ";
}

int numb(){
	int n;
	cout << "Digite o número que deseja usar: ";
	cin >> n;
	cout << endl;
	return n;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	Lista* l;
	int op, num;
	
	do 
	{
		menu();
		cin >> op;
		cout<<endl;
		switch(op)
		{
			case 1:
				l  = inicializar();
				cout << endl;
				break;
			
			case 2: 
				if (vazia(l))
				{
					cout << "A lista está vazia"<< endl;
				}else{
					cout << "A lista não está vazia" << endl; 
				}
				cout << endl;
				break;
				
			case 3:	
				num = numb();
				l  = insere_inicio(l, num); 
				break;
			
			case 4:
				num =  numb();
				l = insere_fim(l, num);
				break; 
				
			case 5: 
				imprime(l);
				break;	
			
			case 6:
				num = numb();
				l = retira(l, num);	
				break;
			
			case 7:
				num = numb();
				buscar_dado(l, num);
				break;	
			
			case 8:
				tamanho(l);
				break;
				
			case 9:
				l = remove_inicio(l);
				break;
			
			case 10:
				l = remove_fim(l);
				break;
			
			case 11:
				imprime_inicio(l);
				break;
			
			case 12:
				imprime_fim(l);
				break;
		}	
	}while(op>=1 && op<=13);
	
	cout<< "Fim do programa\n";
	system("pause");
	return 0;
}
