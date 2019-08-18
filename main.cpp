#include "SistemaImobiliaria.h"
#include "Menu.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"

int main(void) {
	int flagmenu = 0;//flag criada para facilitar a navega��o entre o menu principal e os secundarios

	Menu m1 = Menu();
	Imovel im1 = Imovel();


	while (1) {

		switch (m1.Menu1()) {//switch do menu principal
		case 1://cadastro
			flagmenu = 1;
			CLEAR;
			switch (m1.Menu2()) {//switch secundario com o menu que remete op��es para cadastro
			case 1://op��o casa
				im1.CadastroAll(1);
				m1.Menu3();//menu que pede a confima��o para salvar o cadastro
				flagmenu = 0;
				break;
			case 2://op��o apartamento
				im1.CadastroAll(2);
				m1.Menu3();//menu que pede a confima��o para salvar o cadastro
				flagmenu = 0;
				break;
			case 3://op��o terreno
				im1.CadastroAll(3);
				m1.Menu3();//menu que pede a confima��o para salvar o cadastro
				flagmenu = 0;
				break;
			case 4://op��o voltar para o menu principal
				flagmenu = 0;
				break;
			}
			break;
		case 2://op��o consultar imoveis disponivel
			break;
		case 3://op��o de busca
			switch (m1.Menu4()) {//menu secundario para saber o tipo da busca
			case 1://busca por titulo
				flagmenu = 0;
				break;
			case 2://busca por bairro
				flagmenu = 0;
				break;
			case 3://busca por valor
				flagmenu = 0;
				break;
			case 4://volta par ao menu principal
				flagmenu = 0;
				break;
			}
			break;
		case 4://op��o que exibe imovel para aluguel || venda
			switch (m1.Menu5()) {//menu secundario com op��es de aluguel ou venda
			case 1://op��o por aluguel
				flagmenu = 0;
				break;
			case 2://op��o por venda
				flagmenu = 0;
				break;
			case 3://volta menu principal
				flagmenu = 0;
				break;
			}
			break;
		case 5://op��o para deletar um cadastro
			break;
		case 6://op��o para editar um cadastro
			break;
		case 7://encerrar o programa
			flagmenu = 1;
			break;
		}//fim do switch principal
		if (flagmenu)//if criado para sair do while
			break;
	}//fim do while

	return 0;
}//fim da fun��o main
