#include "Supermercado.h"

Supermercado::Supermercado()
{
	// quando iniciar o sistema, carregar o estoque para memória
	estoque[0].SetNome("Cerveja");
	estoque[0].SetQnt_Estoque(48);
	estoque[0].SetPreco(5.50);

	estoque[1].SetNome("Carne");
	estoque[1].SetQnt_Estoque(20);
	estoque[1].SetPreco(39.90);

	estoque[2].SetNome("Carvao");
	estoque[2].SetQnt_Estoque(10);
	estoque[2].SetPreco(15);

	cout << "Bem-Vindo a Venda da Esquina! Sistema rodando!\n";
}

// Vai criar um pedido para um cliente do supermercado
void Supermercado::RealizarVenda()
{
	string tempString;
	int tempInt;
	int qtdItensComprados = 0;

	cout << "Informe o nome do cliente: ";
	cin >> tempString;
	vendas[0].setNome_Cliente(tempString);

	while (qtdItensComprados < 3)
	{
		cout << "Informe o item para comprar: ";
		cin >> tempString;

		//Percorrer o estoque e acessar o produto
		for (int i = 0; i < 3; i++)
		{
			//Achou o produto que quer comprar
			if (estoque[i].GetNome() == tempString)
			{
				cout << "Qual a quantidade de " << tempString << " que voce deseja? ";
				cin >> tempInt;

				vendas[0].addItemNoPedido(estoque[i].GetNome(), estoque[i].GetPreco(), tempInt);
			}
		}
		qtdItensComprados++;
	}

	vendas[0].fecharPedido();
}