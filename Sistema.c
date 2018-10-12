/*=============================================================================
FACEAR - FACULDADE EDUCACIONAL ARAUÁRIA
Finalidade: Projeto Integrador I - Sistema de Ordem de Serviço
Programador: Luiz Henrique Correia
==============================================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}

struct usuario {
	
	int codigo;
	char nome[50];
	int tipo;
	char cpf[20];
	char email[100];
	char telefone[100];
	char endereco[200];
	char login[50];
	char senha[50];
	char situacao[10];
};
									
struct cliente {
	
	int codigo;
	char nome[50];
	char datacadastro[20];
	int tipo;
	char cpf[20];
	char email[100];
	char telefone[100];
	char endereco[200];
	char situacao[10];
};

struct ordemservico {
	
	int codigo;
	char aparelho[50];
	char descricao[100];
	int tipo;
	char data_cadastro[20];
	int usuario_atendimento;
	int usuario_tecnico;
	int usuario_ultima_alteracao;
	int cliente;
	char prioridade[10];
	char custo[20];
	char forma_pagamento[20];
	char data_previsao[20];
	char passos_a_reproduzir[200];
	char solucao_aplicada[200];
	char status[20];
};

struct tipousuario {
	
	int codigo;
	char descricao[50];
	char situacao[10];
};

struct tipocliente {
	
	int codigo;
	char descricao[50];
	char situacao[10];
};


struct tiposervico {
	
	int codigo;
	char descricao[50];
	char situacao[10];
};

void telaLogin(){
	
	//habilita a acentuação para o português
	setlocale(LC_ALL, "Portuguese");

	system("cls");
	printf("\n");
	printf("\n\n\n");
	printf("\t**********************************************************************************************************************************\n");
    printf("\t**********************************************************************************************************************************\n");
    printf("\t***             ***            ***           ***    ***********    ***            ***            ***   ************   ************\n");
    printf("\t***   *************   ************   *****    ***    *********    ****   ************   ************   ************   ************\n");
    printf("\t***   *************   ************   ****    *****    *******    *****   ************   ************   ************   ************\n");
    printf("\t***             ***       ********         ********    *****    ******   ************       ********   ************   ************\n");
    printf("\t*************   ***   ************   ****    *******    ***    *******   ************   ************   ************   ************\n");
    printf("\t*************   ***   ************   *****    *******    *    ********   ************   ************   ************   ************\n");
    printf("\t***             ***            ***   ******    *******       *********            ***            ***            ***            ***\n");
    printf("\t**********************************************************************************************************************************\n");
    printf("\t**********************************************************************************************************************************\n");
    
    printf("\n\n\n");
	printf("\t\t\t\t\t     ------------------------------------------------\n");
	printf("\t\t\t\t\t        SISTEMA DE ORDEM DE SERVIÇO PARA CELULARES   \n");
	printf("\t\t\t\t\t     ------------------------------------------------\n");
	
}

void dataHora(){
	
	printf("DATA: ");system ("date/t");
	printf("HORA: ");system ("time/t");
}

void telaMenuAdministrador(char *login, char *tipo_usuario_logado){
	
	//habilita a acentuação para o português
	setlocale(LC_ALL, "Portuguese");

	system("cls");
	gotoxy(90,2);
	printf("Usuário Logado: %s (%s)", login, tipo_usuario_logado);
	
	printf("\n\n");
	printf("\t\t\t\t\t     ---------------------------\n");
	printf("\t\t\t\t\t             MENU PRINCIPAL      \n");
	printf("\t\t\t\t\t     ---------------------------\n\n");
	
	printf("\t\t\t\t\t   -------------------------------\n");
	printf("\t\t\t\t\t     1) Gerenciar Usuário        \n");
	printf("\t\t\t\t\t   -------------------------------\n");
	printf("\t\t\t\t\t     2) Gerenciar Tipo Usuário   \n");
	printf("\t\t\t\t\t   -------------------------------\n");
	printf("\t\t\t\t\t     3) Gerenciar Tipo Cliente    \n");
	printf("\t\t\t\t\t   -------------------------------\n");
	printf("\t\t\t\t\t     4) Gerenciar Tipo Serviço    \n");
	printf("\t\t\t\t\t   -------------------------------\n");
	printf("\t\t\t\t\t     0) Sair                     \n");
	printf("\t\t\t\t\t   -------------------------------\n");
	
	//if ((GetKeyState(VK_LBUTTON))){
		
		//printf("Botão direito foi pressionado");
	//}
}

void telaMenuUsuarioCadastro(char *login, char *tipo_usuario_logado){
	
	//habilita a acentuação para o português
	setlocale(LC_ALL, "Portuguese");

	system("cls");
	gotoxy(90,2);
	printf("Usuário Logado: %s (%s)", login, tipo_usuario_logado);
	
	printf("\n\n");
	printf("\t\t\t\t\t     ----------------------------\n");
	printf("\t\t\t\t\t             MENU PRINCIPAL     \n");
	printf("\t\t\t\t\t     ----------------------------\n\n");
	
	printf("\t\t\t\t\t   ---------------------------------\n");
	printf("\t\t\t\t\t     1) Gerenciar Cliente          \n");
	printf("\t\t\t\t\t   ---------------------------------\n");
	printf("\t\t\t\t\t     2) Gerenciar Ordem de Serviço\n");
	printf("\t\t\t\t\t   ---------------------------------\n");
	printf("\t\t\t\t\t     0) Sair                     \n");
	printf("\t\t\t\t\t   ---------------------------------\n");
	
	//if ((GetKeyState(VK_LBUTTON))){
		
		//printf("Botão direito foi pressionado");
	//}
}

void telaMenuUsuarioTecnico(char *login, char *tipo_usuario_logado){
	
	//habilita a acentuação para o português
	setlocale(LC_ALL, "Portuguese");

	system("cls");
	gotoxy(90,2);
	printf("Usuário Logado: %s (%s)", login, tipo_usuario_logado);
	
	printf("\n\n");
	printf("\t\t\t\t\t     ----------------------------\n");
	printf("\t\t\t\t\t             MENU PRINCIPAL      \n");
	printf("\t\t\t\t\t     ----------------------------\n\n");
	
	printf("\t\t\t\t\t   ---------------------------------\n");
	printf("\t\t\t\t\t     1) Gerenciar Ordem de Serviço\n");
	printf("\t\t\t\t\t   ---------------------------------\n");
	printf("\t\t\t\t\t     0) Sair                     \n");
	printf("\t\t\t\t\t   ---------------------------------\n");
	
	//if ((GetKeyState(VK_LBUTTON))){
		
		//printf("Botão direito foi pressionado");
	//}
}

void header(char *title){

		system("cls");
		printf("\n\t\t\t\t\t--------------------------------------\n");
		printf("\t\t\t\t\t	%s 		\n", title);
		printf("\t\t\t\t\t--------------------------------------\n");
	
}

int main(int argc, char *argv[]) {
	
	//	MENUS
	int menu_principal, opcao_menu, opcao_incluir,  opcao_alterar, opcao_excluir,  opcao_visualizar;
	
	char login[50], senha[50];
	
	int valida_login = 0, valida_senha = 0, cont = 0, ativo = 0, inativo = 0, codigo_busca = 0, coordenada = 0;
	
	// ########################### USUÁRIO ###############################
	// CONTADORES
	int cont_usuario = 4;
	int tipo_usuario_logado = 0;
	char nome_tipo_usuario_logado[50];
	int cont_usuario_aux = 0;
	int maximo_usuarios = 50;
	// AUXILIARES
	char nome_usuario_aux[50];
	int tipo_usuario_aux;
	char cpf_usuario_aux[20];
	char email_usuario_aux[100];
	char telefone_usuario_aux[100];
	char endereco_usuario_aux[200];
	char login_usuario_aux[50];
	char senha_usuario_aux[50];
	char situacao_usuario_aux[10];
	//OTHERS
	int id_usuario_logado = 0;
	char nome_usuario_logado[50];
	int tipo_usuario;
	struct usuario usuario[maximo_usuarios];
	
	//REGISTROS INSTÂNCIADOS
	usuario[1].codigo = 1;
	strcpy(usuario[1].nome, "Luiz Correia");		
	usuario[1].tipo = 1;
	strcpy(usuario[1].login, "admin");
	strcpy(usuario[1].senha, "admin");
	strcpy(usuario[1].situacao, "Ativo");
	
	usuario[2].codigo = 2;
	strcpy(usuario[2].nome, "Maria Santana");
	usuario[2].tipo = 2;	
	strcpy(usuario[2].login, "maria");
	strcpy(usuario[2].senha, "maria");
	strcpy(usuario[2].situacao, "Ativo");
	
	usuario[3].codigo = 3;
	strcpy(usuario[3].nome, "Joao da Silva");
	usuario[3].tipo = 3;
	strcpy(usuario[3].login, "joao");
	strcpy(usuario[3].senha, "joao");
	strcpy(usuario[3].situacao, "Ativo");
	
	usuario[4].codigo = 4;
	strcpy(usuario[4].nome, "Pedro Ferreira");
	usuario[4].tipo = 3;
	strcpy(usuario[4].login, "pedro");
	strcpy(usuario[4].senha, "pedro");
	strcpy(usuario[4].situacao, "Ativo");
	// ####################################################################
	
	// ########################### CLIENTE ###############################
	// CONTADORES
	int cont_cliente = 4;
	int cont_cliente_aux = 0;
	int maximo_clientes = 50;
	// AUXILIARES
	char nome_cliente_aux[50];
	char datacadastro_cliente_aux[20];
	int tipo_cliente_aux;
	char cpf_cliente_aux[20];
	char email_cliente_aux[100];
	char telefone_cliente_aux[100];
	char endereco_cliente_aux[200];
	char situacao_cliente_aux[10];
	//OTHERS
	int tipo_cliente;
	struct cliente cliente[maximo_clientes];
	
	//REGISTROS INSTÂNCIADOS
	cliente[1].codigo = 1;
	strcpy(cliente[1].nome, "Paulo Ferreira");
	strcpy(cliente[1].situacao, "Ativo");
	cliente[1].tipo = 1;
	
	cliente[2].codigo = 2;
	strcpy(cliente[2].nome, "Ana da Silva");
	strcpy(cliente[2].situacao, "Ativo");
	cliente[2].tipo = 2;
	
	cliente[3].codigo = 3;
	strcpy(cliente[3].nome, "Carlos de Souza");
	strcpy(cliente[3].situacao, "Ativo");
	cliente[3].tipo = 3;
	// ####################################################################
	
	// ########################### ORDEM DE SERVIÇO ###############################
	// CONTADORES
	int cont_ordemservico = 4;
	int cont_ordemservico_aux = 0;
	int maximo_ordemservicos = 50;
	// AUXILIARES
	char aparelho_ordemservico_aux[50];
	char descricao_ordemservico_aux[100];
	int tipo_ordemservico_aux;
	char data_cadastro_ordemservico_aux[20];
	int usuario_atendimento_aux;
	int usuario_ultima_alteracao_aux;
	int usuario_tecnico_aux;
	int cliente_ordemservico_aux;
	char prioridade_ordemservico_aux[10];
	char custo_ordemservico_aux[20];
	char forma_pagamento_ordemservico_aux[20];
	char data_previsao_ordemservico_aux[20];
	char passos_a_reproduzir_ordemservico_aux[200];
	char solucao_aplicada_ordemservico_aux[200];
	char status_ordemservico_aux[20];
	//OTHERS
	int tipo_ordemservico;
	struct ordemservico ordemservico[maximo_ordemservicos];
	int opcao_selecionada_lista = 0;
	
	//REGISTROS INSTÂNCIADOS
	ordemservico[1].codigo = 1;
	strcpy(ordemservico[1].descricao, "ordemservico 1");
	strcpy(ordemservico[1].status, "Aberta");
	ordemservico[1].tipo = 1;
	ordemservico[1].usuario_atendimento = 2;
	ordemservico[1].usuario_tecnico = 3;
	ordemservico[1].cliente = 1;
	
	ordemservico[2].codigo = 2;
	strcpy(ordemservico[2].descricao, "ordemservico 2");
	strcpy(ordemservico[2].status, "Fechada");
	ordemservico[2].tipo = 2;
	ordemservico[2].usuario_atendimento = 2;
	ordemservico[2].usuario_tecnico = 3;
	ordemservico[2].cliente = 2;
	
	ordemservico[3].codigo = 3;
	strcpy(ordemservico[3].descricao, "ordemservico 3");
	strcpy(ordemservico[3].status, "Aberta");
	ordemservico[3].tipo = 3;
	ordemservico[3].usuario_atendimento = 2;
	ordemservico[3].usuario_tecnico = 3;
	ordemservico[3].cliente = 3;
	// ####################################################################
	
	// ########################### TIPO USUÁRIO ###########################
	int cont_tipousuario = 4;
	int cont_tipousuario_aux = 0;	
	char nome_tipousuario_aux[50];
	char nome_tipousuario_aux2[50];
	int situacao_tipousuario_aux;
	char situacao_tipousuario_aux2[50];
	int busca_tipousuario = 0;
	int maximo_tipousuario = 50;
	struct tipousuario tipousuario[maximo_tipousuario];
	
	tipousuario[1].codigo = 1;
	strcpy(tipousuario[1].descricao, "Administrador");
	strcpy(tipousuario[1].situacao, "Ativo");
	
	tipousuario[2].codigo = 2;
	strcpy(tipousuario[2].descricao, "Atendimento");
	strcpy(tipousuario[2].situacao, "Ativo");
	
	tipousuario[3].codigo = 3;
	strcpy(tipousuario[3].descricao, "Tecnico");
	strcpy(tipousuario[3].situacao, "Ativo");
	// ####################################################################
	
	// ########################### TIPO CLIENTE ###########################
	int cont_tipocliente = 4;
	int cont_tipocliente_aux = 0;	
	char nome_tipocliente_aux[50];
	char nome_tipocliente_aux2[50];
	int situacao_tipocliente_aux;
	char situacao_tipocliente_aux2[50];
	int busca_tipocliente = 0;
	int maximo_tipocliente = 50;
	struct tipocliente tipocliente[maximo_tipocliente];
	
	tipocliente[1].codigo = 1;
	strcpy(tipocliente[1].descricao, "Prospect");
	strcpy(tipocliente[1].situacao, "Ativo");
	
	tipocliente[2].codigo = 2;
	strcpy(tipocliente[2].descricao, "Vip");
	strcpy(tipocliente[2].situacao, "Ativo");
	
	tipocliente[3].codigo = 3;
	strcpy(tipocliente[3].descricao, "Especial");
	strcpy(tipocliente[3].situacao, "Ativo");
	// ####################################################################
	
	// ########################### TIPO SERVIÇO ###########################
	int cont_tiposervico = 4;
	int cont_tiposervico_aux = 0;	
	char nome_tiposervico_aux[50];
	char nome_tiposervico_aux2[50];
	int situacao_tiposervico_aux;
	char situacao_tiposervico_aux2[50];
	int busca_tiposervico = 0;
	int maximo_tiposervico = 50;
	struct tiposervico tiposervico[maximo_tiposervico];
	
	tiposervico[1].codigo = 1;
	strcpy(tiposervico[1].descricao, "Formatação");
	strcpy(tiposervico[1].situacao, "Ativo");
	
	tiposervico[2].codigo = 2;
	strcpy(tiposervico[2].descricao, "Colocar Película");
	strcpy(tiposervico[2].situacao, "Ativo");
	
	tiposervico[3].codigo = 3;
	strcpy(tiposervico[3].descricao, "Trocar Tela");
	strcpy(tiposervico[3].situacao, "Ativo");
	
	tiposervico[4].codigo = 4;
	strcpy(tiposervico[4].descricao, "Trocar Auto-Falante");
	strcpy(tiposervico[4].situacao, "Ativo");
	// ####################################################################
		
	system("color 0f");
	
	login:
	telaLogin();
	
	printf("\n\t\t\t\t\t\t\t -------------------");
	printf("\n\t\t\t\t\t\t\t    Login: ");
	printf("\n\t\t\t\t\t\t\t -------------------");
	printf("\n");
	
	senha:
	printf("\n\t\t\t\t\t\t\t -------------------");
	printf("\n\t\t\t\t\t\t\t    Senha: ");
	printf("\n\t\t\t\t\t\t\t -------------------");
	
	gotoxy(68,24);
	scanf("%s",&login);
	gotoxy(68,28);
//	scanf("%s",&senha);

	// ESCONDE SENHA
	char tecla;
	int a = 0; // Controlará a quantidade de erros ao logar no sistema
	
	do{
		fflush(stdin);
		tecla = getch();
		if(isprint(tecla)){ // Analisa se o valor da variável c é imprimivel
			senha[a] = tecla; // Se for, armazena o caractere 
			a++;
			printf("*"); // Imprime o * Anterisco
			senha[a]='\0';
		}
		else if(tecla == 8 && a){ //8 é o caractere BackSpace na tabela ASCII, && a analisa se a é diferente de 0
			senha[a]='\0';
			a--;
			printf("\b \b"); //Apagando o caractere digitado
		} 
	}while(tecla != 13); //13 é o valor de ENTER na tabela ASCII
	fflush(stdin);
//	printf("\nsenha digitada: %s", senha);
       
//	printf("\n\t\t\t\t\t\t -----------------");
//	sleep(1);
	
	for(cont = 0; cont < maximo_usuarios; cont++){
		
		valida_login = strcmp(usuario[cont].login, login);
    	valida_senha = strcmp(usuario[cont].senha, senha);
    	
//    	printf("\n\ncód ususario logado: %i",cont);
//    	printf("\nusuario digitado: %s",login);
//    	printf("\nsenha digitada: %s",senha);
//    	printf("\nusuario struct: %s",usuario[cont].login);
//    	printf("\nsenha struct: %s",usuario[cont].senha);
//    	printf("\ntipo struct: %i",usuario[cont].tipo);	    	
//    	printf("\nvalida_login: %i / valida_senha: %i",valida_login,valida_senha);
//    	printf("\ncont: %i max: %i",cont,maximo_usuarios);
//		getch();

		if (valida_login == 0 && valida_senha == 0){
			
			id_usuario_logado = cont;
			
			strcpy(nome_usuario_logado,usuario[cont].nome);
//			printf("id_usuario_logado: %i",id_usuario_logado);
//			getch();
			
			// MENU - USUÁRIO ADMINISTRADOR
			if(usuario[cont].tipo == 1){
				
				for(cont = 1; cont < 50; cont++){
								
					if ((usuario[cont].tipo == tipousuario[cont].codigo) && (id_usuario_logado == usuario[cont].codigo)){
//						printf("\n\t\t\t\t\t\tTipo: %i",tipousuario[cont].codigo);
//						printf("\n\t\t\t\t\t\tNome: %s",tipousuario[cont].descricao);
						strcpy(nome_tipo_usuario_logado,tipousuario[cont].descricao);
					}
				}
				
				do {
			
					telaMenuAdministrador(nome_usuario_logado, nome_tipo_usuario_logado);
					
					printf("\n\t\t\t\t\t\tOpção: ");
					scanf("%i", &menu_principal);
					
					switch (menu_principal){
						
						case 1:{
							
							do{
								
								listagem_usuario:
								
								system("cls");
								printf("\n");
								printf("\t\t+-----------------------------------------------------------------------------------+\n");
							    printf("\t\t|                                 .::USUÁRIOS::.                                    |\n");
							    printf("\t\t+-------------+-------------------------------+-------------------+-----------------+\n");
							    printf("\t\t| Código      | Nome                          | Tipo              |  Situação       |\n");
							    printf("\t\t+-------------+-------------------------------+-------------------+-----------------+\n");
							    
								coordenada = 7;
							    for(cont = 1; cont < maximo_usuarios; cont++){
									
							    	ativo = strcmp(usuario[cont].situacao, "Ativo");
							    	inativo = strcmp(usuario[cont].situacao, "Inativo");
							    	
							    	// Se o compartivo acima for igual retorna 0, caso não retorna 1
							    	if (ativo == 0 || inativo == 0){
										fflush(stdin);
										int teste;
										teste = usuario[cont].tipo;
										gotoxy(17,coordenada);
										printf("| %i",usuario[cont].codigo);
										gotoxy(31,coordenada);
										printf("| %s",usuario[cont].nome);
										gotoxy(63,coordenada);
										printf("| %s",tipousuario[usuario[cont].tipo].descricao);
										gotoxy(83,coordenada);
										printf("| %s",usuario[cont].situacao);
										gotoxy(101,coordenada);
										printf("|");
										printf("\n");
										coordenada++;
									}
								}
									
								printf("\t\t+----------------------+--------------+-----------------------+---------------------+\n");
							
								printf("\n\n");
								printf("\t\t\t\t ---------------------------------------------------\n");
								printf("\t\t\t\t|   0) Voltar   |  1) Cadastrar   |  2) Visualizar  |\n");
								printf("\t\t\t\t ---------------------------------------------------\n");
								
								printf("\n\t\t\t\t\tAção: "); scanf("%i", &opcao_menu);
								
								if (opcao_menu == 2){
									if (cont_usuario > 1){
									printf("\n\n\t\t\t\t\tDigite o Código do Usuário Desejado: ");
									scanf("%i",&codigo_busca);
									}
									else {
										printf("\n\n\t\tAinda não tem usuários cadastrados, favor selecionado a ação 1) Incluir");
										sleep(3);
										goto listagem_usuario;
									}
								}
								
								switch (opcao_menu){
								
									case 1:{
										
										do{						
											header("Cadastro de Usuário");
											gotoxy(25,7);
											printf("Código: %i", cont_usuario);
											gotoxy(60,7);
											printf("Nome: ");
											gotoxy(25,9);
											printf("CPF: ");
											gotoxy(60,9);
											printf("Tipos: ");
											coordenada = 9;
											for(cont = 1; cont < maximo_tipousuario; cont++){
									
										    	ativo = strcmp(tipousuario[cont].situacao, "Ativo");
										    	inativo = strcmp(tipousuario[cont].situacao, "Inativo");
										    	
												if (ativo == 0 || inativo == 0){
													fflush(stdin);
													gotoxy(70,coordenada);
													printf("%i - %s\n",tipousuario[cont].codigo,tipousuario[cont].descricao);
													coordenada++;
												}
											}
											gotoxy(90,coordenada-1);
											printf("Tipo: ");
//											printf("\n\t\t\t\t\t\t%i - %s",tipousuario[tipo_usuario_aux].codigo,tipousuario[tipo_usuario_aux].descricao);
											gotoxy(25,11);
											printf("Telefone: ");
											gotoxy(25,13);
											printf("E-mail: ");
											gotoxy(25,15);
											printf("Endereço: ");
											gotoxy(25,17);
											printf("Login: ");
											gotoxy(60,17);
											printf("Senha: ");
											
											gotoxy(66,7);
											scanf("%s",&nome_usuario_aux);
											gotoxy(30,9);
											scanf("%s",&cpf_usuario_aux);
											gotoxy(96,coordenada-1);
											scanf("%i",&tipo_usuario_aux);
											gotoxy(35,11);
											scanf("%s",&telefone_usuario_aux);
											gotoxy(33,13);
											scanf("%s",&email_usuario_aux);
											gotoxy(35,15);
											scanf("%s",&endereco_usuario_aux);
											gotoxy(32,17);
											scanf("%s",&login_usuario_aux);
											gotoxy(67,17);
											scanf("%s",&senha_usuario_aux);
											
											printf("\n\n");
											printf("\t\t\t\t\t ------------------------------\n");
											printf("\t\t\t\t\t|  0) Voltar  |  1) Cadastrar  |\n");
											printf("\t\t\t\t\t ------------------------------\n");
											printf("\n\n\t\t\t\t\tOpção: ");
											scanf("%i",&opcao_incluir);
											
											switch(opcao_incluir){
												case 1:{
													fflush(stdin);
													strcpy(usuario[cont_usuario].nome, nome_usuario_aux);
													usuario[cont_usuario].tipo = tipo_usuario_aux;
													strcpy(usuario[cont_usuario].cpf, cpf_usuario_aux);
													strcpy(usuario[cont_usuario].email, email_usuario_aux);
													strcpy(usuario[cont_usuario].telefone, telefone_usuario_aux);
													strcpy(usuario[cont_usuario].endereco, endereco_usuario_aux);
													strcpy(usuario[cont_usuario].login, login_usuario_aux);
													strcpy(usuario[cont_usuario].senha, senha_usuario_aux);
													strcpy(usuario[cont_usuario].situacao, "Ativo");
													usuario[cont_usuario].codigo = cont_usuario;
													printf("\n\t\t\t\t\tUsuário %s cadastrado com sucesso!",usuario[cont_usuario].nome);
													sleep(2);
													cont_usuario++;
													goto listagem_usuario;
													break;
												}
											}
											break;
											
										} while(opcao_incluir!=0);
										break;
									}
									
									case 2:{
										
										visualizacao_usuario:
										do{	
											header("Visualização de Usuário");
											
											gotoxy(25,7);
											printf("Código: %i",codigo_busca);
											gotoxy(60,7);
											printf("(1) Nome: %s",usuario[codigo_busca].nome);
											gotoxy(25,9);
											printf("(3) CPF: %s",usuario[codigo_busca].cpf);
											gotoxy(60,9);
											printf("(2) Tipo: %i - %s",usuario[codigo_busca].tipo,tipousuario[usuario[codigo_busca].tipo].descricao);
											gotoxy(25,11);
											printf("(5) Telefone: %s",usuario[codigo_busca].telefone);
											gotoxy(25,13);
											printf("(4) Email: %s",usuario[codigo_busca].email);
											gotoxy(25,15);
											printf("(6) Endereço: %s",usuario[codigo_busca].endereco);
											gotoxy(25,17);
											printf("(7) Login: %s",usuario[codigo_busca].login);
											gotoxy(60,17);
											printf("(8) Senha: %s",usuario[codigo_busca].senha);
											gotoxy(25,19);
											printf("(9) Situação: %s",usuario[codigo_busca].situacao);
											printf("\n\n\n");
											printf("\t\t\t\t\t ---------------------------------------------\n");
											printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |  2) Excluir  |\n");
											printf("\t\t\t\t\t ---------------------------------------------\n");
											printf("\n\t\t\t\t\tAção: "); scanf("%i", &opcao_visualizar);
											
											switch(opcao_visualizar){
												
												case 1:{
													
													do{
													
														printf("\n\t\t\t\t\tDigite o nº do Campo Desejado para Alterar: ");
														scanf("%i",&opcao_alterar);
															
														header("Alteração de Usuário");
															
														printf("\n\t\t\t\t\t----------------------------------\n");
														printf("\t\t\t\t\t         Dado Original             ");
														
														if (opcao_alterar == 1){
															
															do{
																printf("\n\n\t\t\t\t\tNome: %s",usuario[codigo_busca].nome);
																
																printf("\n\t\t\t\t\t----------------------------------\n");
																printf("\t\t\t\t\t         Dado Novo             ");
																printf("\n\n\t\t\t\t\tNome: ");
																scanf("%s",&nome_usuario_aux);
																printf("\n\n\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		strcpy(usuario[codigo_busca].nome, nome_usuario_aux);
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto visualizacao_usuario;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_usuario;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														if (opcao_alterar == 2){
															
															do{
																printf("\n\n\t\t\t\t\tTipo: %i - %s",usuario[codigo_busca].tipo,tipousuario[usuario[codigo_busca].tipo].descricao);
																
																printf("\n\t\t\t\t\t----------------------------------\n");
																printf("\t\t\t\t\t         Dado Novo             ");
																printf("\n\t\t\t\t\tTipo: ");
																for(cont = 1; cont < maximo_tipousuario; cont++){
														
															    	ativo = strcmp(tipousuario[cont].situacao, "Ativo");
															    	inativo = strcmp(tipousuario[cont].situacao, "Inativo");
															    	
															    	// Se o compartivo acima for igual retorna 0, caso não retorna 1
																	if (ativo == 0 || inativo == 0){
																		fflush(stdin);
																		printf("\n\t\t\t\t\t\t%i - %s",tipousuario[cont].codigo,tipousuario[cont].descricao);
																	}
															   		
																}
																printf("\n\n\t\t\t\t\tTipo: ");
																scanf("%i",&tipo_usuario_aux);
																printf("\n\t\t\t\t\t\t%i - %s",tipousuario[tipo_usuario_aux].codigo,tipousuario[tipo_usuario_aux].descricao);
																
																printf("\n\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		usuario[codigo_busca].tipo = tipo_usuario_aux;
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto visualizacao_usuario;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_usuario;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														if (opcao_alterar == 3){
															
															do{
																printf("\n\n\t\t\t\t\tCPF: %s",cliente[codigo_busca].cpf);
																
																printf("\n\t\t\t\t\t----------------------------------\n");
																printf("\t\t\t\t\t         Dado Novo             ");
																printf("\n\n\t\t\t\t\tCPF: ");
																scanf("%s",&cpf_cliente_aux);
																printf("\n\n");
																
																printf("\n\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		strcpy(cliente[codigo_busca].cpf, cpf_cliente_aux);
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto visualizacao_usuario;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_usuario;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														if (opcao_alterar == 4){
															
															do{
																printf("\n\n\t\t\t\t\tE-mail: %s",usuario[codigo_busca].email);
																
																printf("\n\t\t\t\t\t----------------------------------\n");
																printf("\t\t\t\t\t         Dado Novo             ");
																printf("\n\n\t\t\t\t\tE-mail: ");
																scanf("%s",&email_usuario_aux);
																printf("\n\n");
																
																printf("\n\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		strcpy(usuario[codigo_busca].email, email_usuario_aux);
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto visualizacao_usuario;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_usuario;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														if (opcao_alterar == 5){
															
															do{
																printf("\n\n\t\t\t\t\tTelefone: %s",usuario[codigo_busca].telefone);
																
																printf("\n\t\t\t\t\t----------------------------------\n");
																printf("\t\t\t\t\t         Dado Novo             ");
																printf("\n\n\t\t\t\t\tTelefone: ");
																scanf("%s",&telefone_usuario_aux);
																printf("\n\n");
																
																printf("\n\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		strcpy(usuario[codigo_busca].telefone, telefone_usuario_aux);
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto visualizacao_usuario;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_usuario;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														if (opcao_alterar == 6){
															
															do{
																printf("\n\n\t\t\t\t\tEndereço: %s",usuario[codigo_busca].endereco);
																
																printf("\n\t\t\t\t\t----------------------------------\n");
																printf("\t\t\t\t\t         Dado Novo             ");
																printf("\n\n\t\t\t\t\tEndereço: ");
																scanf("%s",&endereco_usuario_aux);
																printf("\n\n");
																
																printf("\n\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		strcpy(usuario[codigo_busca].endereco, endereco_usuario_aux);
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto visualizacao_usuario;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_usuario;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														if (opcao_alterar == 7){
															
															do{
																printf("\n\n\t\t\t\t\tLogin: %s",usuario[codigo_busca].login);
																
																printf("\n\t\t\t\t\t----------------------------------\n");
																printf("\t\t\t\t\t         Dado Novo             ");
																printf("\n\n\t\t\t\t\tLogin: ");
																scanf("%s",&login_usuario_aux);
																printf("\n\n");
																
																printf("\n\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		strcpy(usuario[codigo_busca].login, login_usuario_aux);
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto visualizacao_usuario;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_usuario;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														if (opcao_alterar == 8){
															
															do{
																printf("\n\n\t\t\t\t\tSenha: %s",usuario[codigo_busca].senha);
																
																printf("\n\t\t\t\t\t----------------------------------\n");
																printf("\t\t\t\t\t         Dado Novo             ");
																printf("\n\n\t\t\t\t\tSenha: ");
																scanf("%s",&senha_usuario_aux);
																printf("\n\n");
																
																printf("\n\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		strcpy(usuario[codigo_busca].senha, senha_usuario_aux);
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto visualizacao_usuario;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_usuario;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														if (opcao_alterar == 9){
															
															do{
																printf("\n\n\t\t\t\t\tSituação: %s",usuario[codigo_busca].situacao);
																
																printf("\n\t\t\t\t\t----------------------------------\n");
																printf("\t\t\t\t\t         Dado Novo             ");
																printf("\n\n\t\t\t\t\tSituação: ");
																scanf("%s",&situacao_usuario_aux);
																printf("\n\n");
																
																printf("\n\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		strcpy(usuario[codigo_busca].situacao, situacao_usuario_aux);
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto visualizacao_usuario;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_usuario;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														else {
															printf("\n\n\t\t\t\t\tCampo Indisponível Para Alteração!\n");
															sleep(2);
															goto visualizacao_usuario;
														}
														
													}while(opcao_alterar!=0);
												}
												
												case 2:{
													
													printf("\n\t\t\t\t\tTem certeza que deseja excluir? (1 - Sim / 0 - Não): ");
													scanf("%i",&opcao_excluir);
													
													if (opcao_excluir == 1){
														strcpy(usuario[codigo_busca].situacao, "Excluido");
														printf("\n\t\t\t\t\tUsuário excluído com sucesso!");
														sleep(2);
														goto listagem_usuario;
														break;
													}
													else {
														printf("\n\t\t\t\t\tUsuário não foi excluído!");
														sleep(2);
														goto visualizacao_usuario;
													}
												}
											}
											break;
										} while(opcao_visualizar!=0); 
										break;
									}
								} 
							
							}while(opcao_menu!=0);
							break;
						}
						
						case 2:{
							
							do{
								
								listagem_tipousuario:
								
								system("cls");
								printf("\n");
								printf("\t\t+-----------------------------------------------------------------------------------+\n");
							    printf("\t\t|                              .::TIPOS DE USUÁRIOS::.                              |\n");
							    printf("\t\t+-------------+---------------------------------------------------------------------+\n");
							    printf("\t\t| Código      | Descrição                                                           |\n");
							    printf("\t\t+-------------+---------------------------------------------------------------------+\n");
							    
							    coordenada = 7;
							    for(cont = 1; cont < maximo_tipousuario; cont++){
									
									// Compara string, se valor for igual retorna 0, caso não retorna 1
							    	ativo = strcmp(tipousuario[cont].situacao, "Ativo");
							    	inativo = strcmp(tipousuario[cont].situacao, "Inativo");
							    	
							    	// printf("\t\t\n\nresult: %i / result2: %i",result,result2);
							    	
									if (ativo == 0 || inativo == 0){
										fflush(stdin);
										gotoxy(17,coordenada);
										printf("| %i",tipousuario[cont].codigo);
										gotoxy(31,coordenada);
										printf("| %s",tipousuario[cont].descricao);
										gotoxy(101,coordenada);
										printf("|");
										printf("\n");
										coordenada++;
									}
							   		
								}
									
								printf("\t\t+----------------------+--------------+-----------------------+---------------------+\n");
							
								printf("\n\n");
								printf("\t\t\t\t ---------------------------------------------------\n");
								printf("\t\t\t\t|   0) Voltar   |  1) Cadastrar   |  2) Visualizar  |\n");
								printf("\t\t\t\t ---------------------------------------------------\n");
								
								printf("\n\t\t\t\t\tAção: "); scanf("%i", &opcao_menu);
								
								if (opcao_menu == 2){
									if (cont_usuario > 1){
									printf("\n\n\t\t\t\t\tDigite o Código Desejado: ");
									scanf("%i",&codigo_busca);
									}
									else {
										printf("\n\n\t\tAinda não tem registros cadastrados, favor selecionado a ação 1) Incluir");
										sleep(3);
										goto listagem_tipousuario;
									}
								}
								
								switch (opcao_menu){
								
									case 1:{
										
										do{						
											header("Cadastro de Tipo de Usuário");								
											
											printf("\n\n\t\t\t\t\tCódigo: %i", cont_tipousuario);
											printf("\n\n\t\t\t\t\tDescrição: ");
											scanf("%s",&nome_tipousuario_aux);								
											
											printf("\n\n");
											printf("\t\t\t\t\t ------------------------------\n");
											printf("\t\t\t\t\t|  0) Voltar  |  1) Cadastrar  |\n");
											printf("\t\t\t\t\t ------------------------------\n");
											printf("\n\n\t\t\t\t\tOpção: ");
											scanf("%i",&opcao_incluir);
											
											switch(opcao_incluir){
												case 1:{
													fflush(stdin);
													strcpy(tipousuario[cont_tipousuario].descricao, nome_tipousuario_aux);
													strcpy(tipousuario[cont_tipousuario].situacao, "Ativo");
													tipousuario[cont_tipousuario].codigo = cont_tipousuario;
													printf("\n\t\t\t\t\tTipo usuário %s incluído com sucesso!",tipousuario[cont_tipousuario].descricao);
													sleep(2);
													cont_tipousuario++;
													goto listagem_tipousuario;
													break;
												}
											}
											break;
											
										} while(opcao_incluir!=0);
										break;
									}
									
									case 2:{
										
										do{
											visualizacao_tipousuario:
											header("Visualização de Tipo Usuário");
											
											printf("\n\n\t\t\t\t\tCódigo: %i",codigo_busca);
											printf("\n\n\t\t\t\t\t(1) Descrição: %s",tipousuario[codigo_busca].descricao);
											printf("\n\n");
											
											printf("\n\n");
											printf("\t\t\t\t\t ---------------------------------------------\n");
											printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |  2) Excluir  |\n");
											printf("\t\t\t\t\t ---------------------------------------------\n");
											
											printf("\n\t\t\t\t\tAção: "); scanf("%i", &opcao_visualizar);
											
											switch(opcao_visualizar){
												
												case 1:{
													
													do{
													
														printf("\n\n\t\t\t\t\tDigite o nº do Campo Desejado para Alterar: ");
														scanf("%i",&opcao_alterar);
														
														if (opcao_alterar == 1){
															
															do{	
															
																header("Alteração de Tipo de Usuário");
																
																printf("\n\t\t\t\t\t----------------------------------");
																printf("\n\t\t\t\t\t         Dado Original             ");
																printf("\n\n\t\t\t\t\tDescrição: %s",tipousuario[codigo_busca].descricao);
																
																printf("\n\t\t\t\t\t----------------------------------");
																printf("\n\t\t\t\t\t         Dado Novo             ");
																printf("\n\n\t\t\t\t\tDescrição: ");
																scanf("%s",&nome_tipousuario_aux);
																
																printf("\n\n");
																
																printf("\n\n");
																printf("\n\t\t\t\t\t ------------------------------");
																printf("\n\t\t\t\t\t|   0) Voltar   |  1) Alterar  |");
																printf("\n\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		strcpy(tipousuario[codigo_busca].descricao, nome_tipousuario_aux);
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto listagem_tipousuario;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_tipousuario;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														else {
															printf("\n\n\t\t\t\t\tCampo Indisponível Para Alteração!\n");
															sleep(2);
															goto visualizacao_tipousuario;
														}
														
													}while(opcao_alterar!=0);
												}
												
												case 2:{
													
													printf("\n\t\t\t\t\tTem certeza que deseja excluir? (1 - Sim / 0 - Não): ",usuario[cont_usuario_aux].nome);
													scanf("%i",&opcao_excluir);
													
													if (opcao_excluir == 1){
														strcpy(tipousuario[codigo_busca].situacao, "Excluido");
														printf("\n\t\t\t\t\tTipo usuário %s excluído com sucesso!",tipousuario[codigo_busca].descricao);
														sleep(2);
														goto listagem_tipousuario;
														break;
													}
													else {
														printf("\n\t\t\t\t\tTipo Usuário não excluído!");
														sleep(2);
														goto visualizacao_tipousuario;
													} 
												}
											}
											break;
										} while(opcao_visualizar!=0); 
										break;
									}
								} 
							
							}while(opcao_menu!=0);
							break;
						}
						
						case 3:{
							
							do{
								
								listagem_tipocliente:
								
								system("cls");
								printf("\n");
								printf("\t\t+-----------------------------------------------------------------------------------+\n");
							    printf("\t\t|                              .::TIPOS DE CLIENTES::.                              |\n");
							    printf("\t\t+-------------+---------------------------------------------------------------------+\n");
							    printf("\t\t| Código      | Descrição                                                           |\n");
							    printf("\t\t+-------------+---------------------------------------------------------------------+\n");
							    
							    coordenada = 7;
							    for(cont = 1; cont < maximo_tipocliente; cont++){
									
									// Compara string, se valor for igual retorna 0, caso não retorna 1
							    	ativo = strcmp(tipocliente[cont].situacao, "Ativo");
							    	inativo = strcmp(tipocliente[cont].situacao, "Inativo");
							    	
							    	// printf("\t\t\n\nresult: %i / result2: %i",result,result2);
							    	
									if (ativo == 0 || inativo == 0){
										fflush(stdin);
										gotoxy(17,coordenada);
										printf("| %i",tipocliente[cont].codigo);
										gotoxy(31,coordenada);
										printf("| %s",tipocliente[cont].descricao);
										gotoxy(101,coordenada);
										printf("|");
										printf("\n");
										coordenada++;
									}
								}
									
								printf("\t\t+----------------------+--------------+-----------------------+---------------------+\n");
							
								printf("\n\n");
								printf("\t\t\t\t ---------------------------------------------------\n");
								printf("\t\t\t\t|   0) Voltar   |  1) Cadastrar   |  2) Visualizar  |\n");
								printf("\t\t\t\t ---------------------------------------------------\n");
								
								printf("\n\t\t\t\t\tAção: "); scanf("%i", &opcao_menu);
								
								if (opcao_menu == 2){
									if (cont_usuario > 1){
									printf("\n\n\t\t\t\t\tDigite o Código Desejado: ");
									scanf("%i",&codigo_busca);
									}
									else {
										printf("\n\n\t\tAinda não tem registros cadastrados, favor selecionado a ação 1) Incluir");
										sleep(3);
										goto listagem_tipocliente;
									}
								}
								
								switch (opcao_menu){
								
									case 1:{
										
										do{						
											header("Cadastro de Tipo de cliente");								
											
											printf("\n\n\t\t\t\t\tCódigo: %i", cont_tipocliente);
											printf("\n\n\t\t\t\t\tDescrição: ");
											scanf("%s",&nome_tipocliente_aux);								
											
											printf("\n\n");
											printf("\t\t\t\t\t ------------------------------\n");
											printf("\t\t\t\t\t|  0) Voltar  |  1) Cadastrar  |\n");
											printf("\t\t\t\t\t ------------------------------\n");
											printf("\n\n\t\t\t\t\tOpção: ");
											scanf("%i",&opcao_incluir);
											
											switch(opcao_incluir){
												case 1:{
													fflush(stdin);
													strcpy(tipocliente[cont_tipocliente].descricao, nome_tipocliente_aux);
													strcpy(tipocliente[cont_tipocliente].situacao, "Ativo");
													tipocliente[cont_tipocliente].codigo = cont_tipocliente;
													printf("\n\t\t\t\t\tTipo cliente %s incluído com sucesso!",tipocliente[cont_tipocliente].descricao);
													sleep(2);
													cont_tipocliente++;
													goto listagem_tipocliente;
													break;
												}
											}
											break;
											
										} while(opcao_incluir!=0);
										break;
									}
									
									case 2:{
										
										do{
											visualizacao_tipocliente:
											header("Visualização de Tipo cliente");
											
											printf("\n\n\t\t\t\t\tCódigo: %i",codigo_busca);
											printf("\n\n\t\t\t\t\t(1) Descrição: %s",tipocliente[codigo_busca].descricao);
											printf("\n\n");
											
											printf("\n\n");
											printf("\t\t\t\t\t ---------------------------------------------\n");
											printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |  2) Excluir  |\n");
											printf("\t\t\t\t\t ---------------------------------------------\n");
											
											printf("\n\t\t\t\t\tAção: "); scanf("%i", &opcao_visualizar);
											
											switch(opcao_visualizar){
												
												case 1:{
													
													do{
													
														printf("\n\n\t\t\t\t\tDigite o nº do Campo Desejado para Alterar: ");
														scanf("%i",&opcao_alterar);
														
														if (opcao_alterar == 1){
															
															do{	
															
																header("Alteração de Tipo de cliente");
																
																printf("\n\t\t\t\t\t----------------------------------");
																printf("\n\t\t\t\t\t         Dado Original             ");
																printf("\n\n\t\t\t\t\tDescrição: %s",tipocliente[codigo_busca].descricao);
																
																printf("\n\t\t\t\t\t----------------------------------");
																printf("\n\t\t\t\t\t         Dado Novo             ");
																printf("\n\n\t\t\t\t\tDescrição: ");
																scanf("%s",&nome_tipocliente_aux);
																
																printf("\n\n");
																
																printf("\n\n");
																printf("\n\t\t\t\t\t ------------------------------");
																printf("\n\t\t\t\t\t|   0) Voltar   |  1) Alterar  |");
																printf("\n\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		strcpy(tipocliente[codigo_busca].descricao, nome_tipocliente_aux);
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto listagem_tipocliente;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_tipocliente;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														else {
															printf("\n\n\t\t\t\t\tCampo Indisponível Para Alteração!\n");
															sleep(2);
															goto visualizacao_tipocliente;
														}
														
													}while(opcao_alterar!=0);
												}
												
												case 2:{
													
													printf("\n\t\t\t\t\tTem certeza que deseja excluir? (1 - Sim / 0 - Não): ",usuario[cont_usuario_aux].nome);
													scanf("%i",&opcao_excluir);
													
													if (opcao_excluir == 1){
														strcpy(tipocliente[codigo_busca].situacao, "Excluido");
														printf("\n\t\t\t\t\tTipo cliente %s excluído com sucesso!",tipocliente[codigo_busca].descricao);
														sleep(2);
														goto listagem_tipocliente;
														break;
													}
													else {
														printf("\n\t\t\t\t\tTipo cliente não excluído!");
														sleep(2);
														goto visualizacao_tipocliente;
													}
												}
											}
											break;
										} while(opcao_visualizar!=0); 
										break;
									}
								} 
							
							}while(opcao_menu!=0);
							break;
						}
						
						case 4:{
							
							do{
								
								listagem_tiposervico:
								
								system("cls");
								printf("\n");
								printf("\t\t+-----------------------------------------------------------------------------------+\n");
							    printf("\t\t|                              .::TIPOS DE SERVIÇOS::.                              |\n");
							    printf("\t\t+-------------+---------------------------------------------------------------------+\n");
							    printf("\t\t| Código      | Descrição                                                           |\n");
							    printf("\t\t+-------------+---------------------------------------------------------------------+\n");
							    
							    coordenada = 7;
							    for(cont = 1; cont < maximo_tiposervico; cont++){
									
							    	ativo = strcmp(tiposervico[cont].situacao, "Ativo");
							    	inativo = strcmp(tiposervico[cont].situacao, "Inativo");
							    	
									if (ativo == 0 || inativo == 0){
										fflush(stdin);
										gotoxy(17,coordenada);
										printf("| %i",tiposervico[cont].codigo);
										gotoxy(31,coordenada);
										printf("| %s",tiposervico[cont].descricao);
										gotoxy(101,coordenada);
										printf("|");
										printf("\n");
										coordenada++;
									}
								}
									
								printf("\t\t+----------------------+--------------+-----------------------+---------------------+\n");
							
								printf("\n\n");
								printf("\t\t\t\t ---------------------------------------------------\n");
								printf("\t\t\t\t|   0) Voltar   |  1) Cadastrar   |  2) Visualizar  |\n");
								printf("\t\t\t\t ---------------------------------------------------\n");
								
								printf("\n\t\t\t\t\tAção: "); scanf("%i", &opcao_menu);
								
								if (opcao_menu == 2){
									if (cont_usuario > 1){
										printf("\n\n\t\t\t\t\tDigite o Código Desejado: ");
										scanf("%i",&codigo_busca);
									}
									else {
										printf("\n\n\t\tAinda não tem registros cadastrados, favor selecionado a ação 1) Incluir");
										sleep(3);
										goto listagem_tiposervico;
									}
								}
								
								switch (opcao_menu){
								
									case 1:{
										
										do{						
											header("Cadastro de Tipo de serviço");								
											
											printf("\n\n\t\t\t\t\tCódigo: %i", cont_tiposervico);
											printf("\n\n\t\t\t\t\tDescrição: ");
											scanf("%s",&nome_tiposervico_aux);								
											
											printf("\n\n");
											printf("\t\t\t\t\t ------------------------------\n");
											printf("\t\t\t\t\t|  0) Voltar  |  1) Cadastrar  |\n");
											printf("\t\t\t\t\t ------------------------------\n");
											printf("\n\n\t\t\t\t\tOpção: ");
											scanf("%i",&opcao_incluir);
											
											switch(opcao_incluir){
												case 1:{
													fflush(stdin);
													strcpy(tiposervico[cont_tiposervico].descricao, nome_tiposervico_aux);
													strcpy(tiposervico[cont_tiposervico].situacao, "Ativo");
													tiposervico[cont_tiposervico].codigo = cont_tiposervico;
													printf("\n\t\t\t\t\tTipo serviço %s incluído com sucesso!",tiposervico[cont_tiposervico].descricao);
													sleep(2);
													cont_tiposervico++;
													goto listagem_tiposervico;
													break;
												}
											}
											break;
											
										} while(opcao_incluir!=0);
										break;
									}
									
									case 2:{
										
										do{
											visualizacao_tiposervico:
											header("Visualização de Tipo serviço");
											
											printf("\n\n\t\t\t\t\tCódigo: %i",codigo_busca);
											printf("\n\n\t\t\t\t\t(1) Descrição: %s",tiposervico[codigo_busca].descricao);
											printf("\n\n");
											
											printf("\n\n");
											printf("\t\t\t\t\t ---------------------------------------------\n");
											printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |  2) Excluir  |\n");
											printf("\t\t\t\t\t ---------------------------------------------\n");
											
											printf("\n\t\t\t\t\tAção: "); scanf("%i", &opcao_visualizar);
											
											switch(opcao_visualizar){
												
												case 1:{
													
													do{
													
														printf("\n\n\t\t\t\t\tDigite o nº do Campo Desejado para Alterar: ");
														scanf("%i",&opcao_alterar);
														
														if (opcao_alterar == 1){
															
															do{	
															
																header("Alteração de Tipo de serviço");
																
																printf("\n\t\t\t\t\t----------------------------------");
																printf("\n\t\t\t\t\t         Dado Original             ");
																printf("\n\n\t\t\t\t\tDescrição: %s",tiposervico[codigo_busca].descricao);
																
																printf("\n\t\t\t\t\t----------------------------------");
																printf("\n\t\t\t\t\t         Dado Novo             ");
																printf("\n\n\t\t\t\t\tDescrição: ");
																scanf("%s",&nome_tiposervico_aux);
																
																printf("\n\n");
																
																printf("\n\n");
																printf("\n\t\t\t\t\t ------------------------------");
																printf("\n\t\t\t\t\t|   0) Voltar   |  1) Alterar  |");
																printf("\n\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		strcpy(tiposervico[codigo_busca].descricao, nome_tiposervico_aux);
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto listagem_tiposervico;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_tiposervico;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														else {
															printf("\n\n\t\t\t\t\tCampo Indisponível Para Alteração!\n");
															sleep(2);
															goto visualizacao_tiposervico;
														}
														
													}while(opcao_alterar!=0);
												}
												
												case 2:{
													
													printf("\n\t\t\t\t\tTem certeza que deseja excluir? (1 - Sim / 0 - Não): ",usuario[cont_usuario_aux].nome);
													scanf("%i",&opcao_excluir);
													
													if (opcao_excluir == 1){
														strcpy(tiposervico[codigo_busca].situacao, "Excluido");
														printf("\n\t\t\t\t\tTipo serviço %s excluído com sucesso!",tiposervico[codigo_busca].descricao);
														sleep(2);
														goto listagem_tiposervico;
														break;
													}
													else {
														printf("\n\t\t\t\t\tTipo serviço não excluído!");
														sleep(2);
														goto visualizacao_tiposervico;
													} 
												}
											}
											break;
										} while(opcao_visualizar!=0); 
										break;
									}
								} 
							
							}while(opcao_menu!=0);
							break;
						}
						
						case 0: {
							goto login;
						}
				
					}
					 
				}while(menu_principal!=0);
				
			}
			
			// USUÁRIO ATENDIMENTO
			if(usuario[cont].tipo == 2){
				
				for(cont = 1; cont < 50; cont++){
								
					if ((usuario[cont].tipo == tipousuario[cont].codigo) && (id_usuario_logado == usuario[cont].codigo)){
				//		printf("\n\t\t\t\t\t\tTipo: %i",tipousuario[cont].codigo);
	//					printf("\n\t\t\t\t\t\tNome: %s",tipousuario[cont].descricao);
						strcpy(nome_tipo_usuario_logado,tipousuario[cont].descricao);
					}
				}
				
				do {
			
					telaMenuUsuarioCadastro(nome_usuario_logado, nome_tipo_usuario_logado);
					
					printf("\n\t\t\t\t\t\tOpção: ");
					scanf("%i", &menu_principal);
					
					switch (menu_principal){
						
						case 1:{
							
							do{
								
								listagem_cliente:
								
								system("cls");
								printf("\n");
								printf("\t\t+-----------------------------------------------------------------------------------+\n");
							    printf("\t\t|                                 .::CLIENTES::.                                    |\n");
							    printf("\t\t+-------------+-------------------------------+-------------------+-----------------+\n");
							    printf("\t\t| Código      | Nome                          | Tipo              |  Situação       |\n");
							    printf("\t\t+-------------+-------------------------------+-------------------+-----------------+\n");
							    
							    coordenada = 7;
							    for(cont = 1; cont < maximo_clientes; cont++){
									
							    	ativo = strcmp(cliente[cont].situacao, "Ativo");
							    	inativo = strcmp(cliente[cont].situacao, "Inativo");
							    	
							    	if (ativo == 0 || inativo == 0){
										fflush(stdin);
										gotoxy(17,coordenada);
										printf("| %i",cliente[cont].codigo);
										gotoxy(31,coordenada);
										printf("| %s",cliente[cont].nome);
										gotoxy(63,coordenada);
										printf("| %s",tipocliente[cliente[cont].tipo].descricao);
										gotoxy(83,coordenada);
										printf("| %s",cliente[cont].situacao);
										gotoxy(101,coordenada);
										printf("|");
										printf("\n");
										coordenada++;
									}									
								}
									
								printf("\t\t+----------------------+--------------+-----------------------+---------------------+\n");
							
								printf("\n\n");
								printf("\t\t\t\t ---------------------------------------------------\n");
								printf("\t\t\t\t|   0) Voltar   |  1) Cadastrar   |  2) Visualizar  |\n");
								printf("\t\t\t\t ---------------------------------------------------\n");
								
								printf("\n\t\t\t\t\tAção: "); scanf("%i", &opcao_menu);
								
								if (opcao_menu == 2){
									if (cont_cliente > 1){
										printf("\n\n\t\t\t\t\tDigite o Código do Cliente Desejado: ");
										scanf("%i",&codigo_busca);
									}
									else {
										printf("\n\n\t\tAinda não tem Clientes cadastrados, favor selecionado a ação 1) Cadastrar");
										sleep(3);
										goto listagem_cliente;
									}
								}
								
								switch (opcao_menu){
								
									case 1:{
										
										do{									
											header("Cadastro de Cliente");
											gotoxy(25,7);
											printf("Código: %i", cont_cliente);
											gotoxy(60,7);
											printf("Nome: ");
											gotoxy(25,9);
											printf("Data Cadastro: ");
											gotoxy(25,11);
											printf("CPF: ");
											gotoxy(60,11);
											printf("Tipos: ");
											coordenada = 9;
											for(cont = 1; cont < maximo_tipocliente; cont++){
									
										    	ativo = strcmp(tipocliente[cont].situacao, "Ativo");
										    	inativo = strcmp(tipocliente[cont].situacao, "Inativo");
										    	
												if (ativo == 0 || inativo == 0){
													fflush(stdin);
													gotoxy(70,coordenada);
													printf("%i - %s\n",tipocliente[cont].codigo,tipocliente[cont].descricao);
													coordenada++;
												}										   		
											}
											gotoxy(90,coordenada-1);
											printf("Tipo: ");
//											printf("\n\t\t\t\t\t\t%i - %s",tipousuario[tipo_usuario_aux].codigo,tipousuario[tipo_usuario_aux].descricao);
											gotoxy(25,13);
											printf("Telefone: ");
											gotoxy(25,15);
											printf("E-mail: ");
											gotoxy(25,17);
											printf("Endereço: ");
											
											gotoxy(66,7);
											scanf("%s",&nome_cliente_aux);
											gotoxy(40,9);
											scanf("%s",&datacadastro_cliente_aux);
											gotoxy(30,11);
											scanf("%s",&cpf_cliente_aux);
											gotoxy(96,coordenada-1);
											scanf("%i",&tipo_cliente_aux);
											gotoxy(35,13);
											scanf("%s",&telefone_cliente_aux);
											gotoxy(33,15);
											scanf("%s",&email_cliente_aux);
											gotoxy(35,17);
											scanf("%s",&endereco_cliente_aux);
											printf("\n\n\n");
											
//											printf("\n\t\t\t\t\t\t%i - %s",tipocliente[tipo_cliente_aux].codigo,tipocliente[tipo_cliente_aux].descricao);
											
											//printf("\n\t\t\t\t\tSituação: ");
//											scanf("%s",&situacao_cliente_aux);

											printf("\t\t\t\t\t ------------------------------\n");
											printf("\t\t\t\t\t|  0) Voltar  |  1) Cadastrar  |\n");
											printf("\t\t\t\t\t ------------------------------\n");
											printf("\n\n\t\t\t\t\tOpção: ");
											scanf("%i",&opcao_incluir);
											
											switch(opcao_incluir){
												case 1:{
													fflush(stdin);
													strcpy(cliente[cont_cliente].nome, nome_cliente_aux);
													strcpy(cliente[cont_cliente].datacadastro, datacadastro_cliente_aux);
													cliente[cont_cliente].tipo = tipo_cliente_aux;
													strcpy(cliente[cont_cliente].cpf, cpf_cliente_aux);
													strcpy(cliente[cont_cliente].email, email_cliente_aux);
													strcpy(cliente[cont_cliente].telefone, telefone_cliente_aux);
													strcpy(cliente[cont_cliente].endereco, endereco_cliente_aux);
													strcpy(cliente[cont_cliente].situacao, "Ativo");
													cliente[cont_cliente].codigo = cont_cliente;
													printf("\n\t\t\t\t\tCliente %s cadastrado com sucesso!",cliente[cont_cliente].nome);
													sleep(2);
													cont_cliente++;
													goto listagem_cliente;
													break;
												}
											}
											break;
											
										} while(opcao_incluir!=0);
										break;
									}
									
									case 2:{
										
										do{
											visualizacao_cliente:
											header("Visualização de Cliente");
											gotoxy(25,7);
											printf("Código: %i",codigo_busca);
											gotoxy(60,7);
											printf("(1) Nome: %s",cliente[codigo_busca].nome);
											gotoxy(25,9);
											printf("(2) Data Cadastro: %s",cliente[codigo_busca].datacadastro);
											gotoxy(25,11);
											printf("(4) CPF: %s",cliente[codigo_busca].cpf);
											gotoxy(60,11);
											printf("(3) Tipo: %i - %s",cliente[codigo_busca].tipo,tipocliente[cliente[codigo_busca].tipo].descricao);
											gotoxy(25,13);
											printf("(6) Telefone: %s",cliente[codigo_busca].telefone);
											gotoxy(25,15);
											printf("(5) Email: %s",cliente[codigo_busca].email);
											gotoxy(25,17);
											printf("(7) Endereço: %s",cliente[codigo_busca].endereco);
											gotoxy(25,19);
											printf("(8) Situação: %s",cliente[codigo_busca].situacao);
											printf("\n\n\n");
											printf("\t\t\t ---------------------------------------------\n");
											printf("\t\t\t|   0) Voltar   |  1) Alterar  |  2) Excluir  |\n");
											printf("\t\t\t ---------------------------------------------\n");									
											printf("\n\t\t\t\t\tAção: "); scanf("%i", &opcao_visualizar);
											
											switch(opcao_visualizar){
												
												case 1:{
													
													do{
													
														printf("\n\n\t\t\t\t\tDigite o nº do Campo Desejado para Alterar: ");
														scanf("%i",&opcao_alterar);
															
														header("Alteração de Usuário");
															
														printf("\n\t\t\t\t\t----------------------------------\n");
														printf("\t\t\t\t\t         Dado Original             ");
														
														if (opcao_alterar == 1){
															
															do{
																printf("\n\n\t\t\t\t\tNome: %s",cliente[codigo_busca].nome);
																
																printf("\n\t\t\t\t\t----------------------------------\n");
																printf("\t\t\t\t\t         Dado Novo             ");
																printf("\n\n\t\t\t\t\tNome: ");
																scanf("%s",&nome_cliente_aux);
																printf("\n\n");
																
																printf("\n\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		strcpy(cliente[codigo_busca].nome, nome_cliente_aux);
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto visualizacao_cliente;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_cliente;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														if (opcao_alterar == 3){
															
															do{
																printf("\n\n\t\t\t\t\tTipo: %i - %s",cliente[codigo_busca].tipo,tipocliente[cliente[codigo_busca].tipo].descricao);
																
																printf("\n\t\t\t\t\t----------------------------------\n");
																printf("\t\t\t\t\t         Dado Novo             ");
																printf("\n\t\t\t\t\tTipo: ");
																for(cont = 1; cont < maximo_tipocliente; cont++){
														
															    	ativo = strcmp(tipocliente[cont].situacao, "Ativo");
															    	inativo = strcmp(tipocliente[cont].situacao, "Inativo");
															    	
															    	// Se o compartivo acima for igual retorna 0, caso não retorna 1
																	if (ativo == 0 || inativo == 0){
																		fflush(stdin);
																		printf("\n\t\t\t\t\t\t%i - %s",tipocliente[cont].codigo,tipocliente[cont].descricao);
																	}
															   		
																}
																printf("\n\n\t\t\t\t\tTipo: ");
																scanf("%i",&tipo_cliente_aux);
																printf("\n\t\t\t\t\t\t%i - %s",tipocliente[tipo_cliente_aux].codigo,tipocliente[tipo_cliente_aux].descricao);
																
																printf("\n\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		cliente[codigo_busca].tipo = tipo_cliente_aux;
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto visualizacao_cliente;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_cliente;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														if (opcao_alterar == 4){
															
															do{
																printf("\n\n\t\t\t\t\tCPF: %s",cliente[codigo_busca].cpf);
																
																printf("\n\t\t\t\t\t----------------------------------\n");
																printf("\t\t\t\t\t         Dado Novo             ");
																printf("\n\n\t\t\t\t\tCPF: ");
																scanf("%s",&cpf_cliente_aux);
																printf("\n\n");
																
																printf("\n\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		strcpy(cliente[codigo_busca].cpf, cpf_cliente_aux);
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto visualizacao_cliente;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_cliente;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														if (opcao_alterar == 5){
															
															do{
																printf("\n\n\t\t\t\t\tE-mail: %s",cliente[codigo_busca].email);
																
																printf("\n\t\t\t\t\t----------------------------------\n");
																printf("\t\t\t\t\t         Dado Novo             ");
																printf("\n\n\t\t\t\t\tE-mail: ");
																scanf("%s",&email_cliente_aux);
																printf("\n\n");
																
																printf("\n\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		strcpy(cliente[codigo_busca].email, email_cliente_aux);
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto visualizacao_cliente;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_cliente;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														if (opcao_alterar == 6){
															
															do{
																printf("\n\n\t\t\t\t\tTelefone: %s",cliente[codigo_busca].telefone);
																
																printf("\n\t\t\t\t\t----------------------------------\n");
																printf("\t\t\t\t\t         Dado Novo             ");
																printf("\n\n\t\t\t\t\tTelefone: ");
																scanf("%s",&telefone_cliente_aux);
																printf("\n\n");
																
																printf("\n\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		strcpy(cliente[codigo_busca].telefone, telefone_cliente_aux);
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto visualizacao_cliente;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_cliente;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														if (opcao_alterar == 7){
															
															do{
																printf("\n\n\t\t\t\t\tEndereço: %s",cliente[codigo_busca].endereco);
																
																printf("\n\t\t\t\t\t----------------------------------\n");
																printf("\t\t\t\t\t         Dado Novo             ");
																printf("\n\n\t\t\t\t\tEndereço: ");
																scanf("%s",&endereco_cliente_aux);
																printf("\n\n");
																
																printf("\n\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		strcpy(cliente[codigo_busca].endereco, endereco_cliente_aux);
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto visualizacao_cliente;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_cliente;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														if (opcao_alterar == 8){
															
															do{
																printf("\n\n\t\t\t\t\tSituação: %s",cliente[codigo_busca].situacao);
																
																printf("\n\t\t\t\t\t----------------------------------\n");
																printf("\t\t\t\t\t         Dado Novo             ");
																printf("\n\n\t\t\t\t\tSituação: ");
																scanf("%s",&situacao_cliente_aux);
																printf("\n\n");
																
																printf("\n\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		strcpy(cliente[codigo_busca].situacao, situacao_cliente_aux);
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto visualizacao_cliente;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_cliente;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														else {
															printf("\n\n\t\t\t\t\tCampo Indisponível Para Alteração!\n");
															sleep(2);
															goto visualizacao_cliente;
														}
														
													}while(opcao_alterar!=0);
												}
												
												case 2:{
													
													printf("\n\t\t\t\t\tTem certeza que deseja excluir? (1 - Sim / 0 - Não): ");
													scanf("%i",&opcao_excluir);
													
													if (opcao_excluir == 1){
														strcpy(cliente[codigo_busca].situacao, "Excluido");
														printf("\n\t\t\t\t\tUsuário excluído com sucesso!");
														sleep(2);
														goto listagem_cliente;
														break;
													}
													else {
														printf("\n\t\t\t\t\tUsuário não foi excluído!");
														sleep(2);
														goto visualizacao_cliente;
													}
												}
											}
											break;
										} while(opcao_visualizar!=0); 
										break;
									}
								} 
							
							}while(opcao_menu!=0);
							break;
							
						}
						
						case 2:{
							
							do{
								
								listagem_ordemservico_cadastro:
								
								system("cls");
								printf("\n");
								printf("\t\t+-------------------------------------------------------------------------------------+\n");
							    printf("\t\t|                                 .::ORDENS DE SERVIÇO::.                             |\n");
							    printf("\t\t+---------+-----------------------------+-------------------------+-------------------+\n");
							    printf("\t\t| Número  | Cliente                     | Técnico                 | Status            |\n");
							    printf("\t\t+---------+-----------------------------+-------------------------+-------------------+\n");
							    
							    coordenada = 7;
							    for(cont = 1; cont < maximo_ordemservicos; cont++){
									
							    	ativo = strcmp(ordemservico[cont].status, "Aberta");
							    	inativo = strcmp(ordemservico[cont].status, "Fechada");
							    	
									if (ativo == 0 || inativo == 0){
										fflush(stdin);
										gotoxy(17,coordenada);
										printf("| %i",ordemservico[cont].codigo);
										gotoxy(27,coordenada);
										printf("| %s",cliente[ordemservico[cont].cliente].nome);
										gotoxy(57,coordenada);
										printf("| %s",usuario[ordemservico[cont].usuario_tecnico].nome);
										gotoxy(83,coordenada);
										printf("| %s",ordemservico[cont].status);
										gotoxy(103,coordenada);
										printf("|");
										printf("\n");
										coordenada++;
									}
								}
								
								printf("\t\t+---------+-----------------------------+-------------------------+-------------------+\n");
							
								printf("\n\n");
								printf("\t\t\t\t ---------------------------------------------------\n");
								printf("\t\t\t\t|   0) Voltar   |  1) Cadastrar   |  2) Visualizar  |\n");
								printf("\t\t\t\t ---------------------------------------------------\n");
								
								printf("\n\t\t\t\t\tAção: "); scanf("%i", &opcao_menu);
								
								if (opcao_menu == 2){
									if (cont_ordemservico > 1){
										printf("\n\n\t\t\t\t\tDigite o Código da Ordem Desejado: ");
										scanf("%i",&codigo_busca);
									}
									else {
										printf("\n\n\t\tAinda não tem ordens de serviço cadastradas, favor selecionado a ação 1) Incluir");
										sleep(3);
										goto listagem_ordemservico_cadastro;
									}
								}
								
								switch (opcao_menu){
								
									case 1:{
										
										do{
											header("Cadastro de Ordem de Serviço");
											
											gotoxy(25,7);
											printf("Número: %i", cont_ordemservico);
											gotoxy(60,7);
											printf("Data Cadastro: ");
											gotoxy(25,9);
											printf("Aparelho: ");
											gotoxy(25,11);
											printf("Descrição: ");
											
											gotoxy(60,9);
											printf("Clientes: ");
											coordenada = 9;
											for(cont = 1; cont < maximo_clientes; cont++){
									
										    	ativo = strcmp(cliente[cont].situacao, "Ativo");
										    	inativo = strcmp(cliente[cont].situacao, "Inativo");
										    	
												if (ativo == 0 || inativo == 0){
													fflush(stdin);
													gotoxy(73,coordenada);
													printf("%i - %s\n",cliente[cont].codigo,cliente[cont].nome);
													coordenada++;
												}
											}
											
											gotoxy(100,coordenada-1);
											int coord_cliente = coordenada-1;
											printf("Cliente: ");
//											printf("\n\t\t\t\t\t\t%i - %s",tipousuario[tipo_usuario_aux].codigo,tipousuario[tipo_usuario_aux].descricao);
											
											gotoxy(25,coordenada+1);
											printf("Prioridades: ");
											gotoxy(30,coordenada+2);
											printf("1 - Baixa");
											gotoxy(30,coordenada+3);
											printf("2 - Média");
											gotoxy(30,coordenada+4);
											printf("3 - Alta");
											gotoxy(30,coordenada+5);
											int coord_prioridade = coordenada+5;
											printf("Prioridade:");
											
											gotoxy(60,coordenada+1);
											printf("Tipos de Serviços: ");
											coordenada = coordenada+2;
											for(cont = 1; cont < maximo_tiposervico; cont++){
									
										    	ativo = strcmp(tiposervico[cont].situacao, "Ativo");
										    	inativo = strcmp(tiposervico[cont].situacao, "Inativo");
										    	
												if (ativo == 0 || inativo == 0){
													fflush(stdin);
													gotoxy(73,coordenada);
													printf("%i - %s\n",tiposervico[cont].codigo,tiposervico[cont].descricao);
													coordenada++;
												}
											}
											
											gotoxy(100,coordenada-1);
											int coord_tipo = coordenada-1;
											printf("Tipo: ");
											
											gotoxy(25,coordenada+1);
											int coord_custo = coordenada+1;
											printf("Custo: R$");
											gotoxy(60,coordenada+1);
											printf("Forma de Pagamento: ");
											gotoxy(73,coordenada+2);
											printf("1 - Dinheiro");
											gotoxy(73,coordenada+3);
											printf("2 - Cartão");
											gotoxy(73,coordenada+4);
											printf("3 - Cheque");
											gotoxy(73,coordenada+5);
											printf("4 - Outros");
											gotoxy(90,coordenada+5);
											int coord_form_pgto = coordenada+5;
											printf("Forma de Pagamento: ");
											
											gotoxy(25,22);
											printf("Técnicos: ");
											coordenada = 23;
											for(cont = 1; cont < maximo_usuarios; cont++){
												
												ativo = strcmp(usuario[cont].situacao, "Ativo");
									    		inativo = strcmp(usuario[cont].situacao, "Inativo");
										    	
												if (ativo == 0 || inativo == 0){
													// Filtra só usuários do tipo TECNICO //
													if (usuario[cont].tipo == 3){
														fflush(stdin);
														gotoxy(30,coordenada);
														printf("%i - %s\n",usuario[cont].codigo,usuario[cont].nome);
														coordenada++;
													}											
												}
											}
											gotoxy(30,coordenada);
											int coord_tecnico = coordenada;
											printf("Técnico: ");
											gotoxy(25,coordenada+2);
											int coord_data_prevista = coordenada+2;
											printf("Data Prevista: ");
											gotoxy(60,coordenada+2);
											int coord_passos_reproduzir = coordenada+2;
											printf("Passos a Reproduzir: ");
											
											gotoxy(75,7);
											scanf("%s",&data_cadastro_ordemservico_aux);
											gotoxy(35,9);
											scanf("%s",&aparelho_ordemservico_aux);
											gotoxy(36,11);
											scanf("%s",&descricao_ordemservico_aux);
											gotoxy(109,coord_cliente);
											scanf("%i",&cliente_ordemservico_aux);
											gotoxy(42,coord_prioridade);
											scanf("%i",&opcao_selecionada_lista);
											fflush(stdin);								
											if (opcao_selecionada_lista == 1){
												strcpy(prioridade_ordemservico_aux, "1 - Baixa");
											}
											else if (opcao_selecionada_lista == 2){
												strcpy(prioridade_ordemservico_aux, "2 - Média");
											}
											else if (opcao_selecionada_lista == 3){
												strcpy(prioridade_ordemservico_aux, "3 - Alta");
											}
											gotoxy(106,coord_tipo);
											scanf("%i",&tipo_ordemservico_aux);
											gotoxy(35,coord_custo);
											scanf("%s",&custo_ordemservico_aux);
											gotoxy(110,coord_form_pgto);
											scanf("%i",&opcao_selecionada_lista);
											fflush(stdin);								
											if (opcao_selecionada_lista == 1){
												strcpy(forma_pagamento_ordemservico_aux, "1 - Dinheiro");
											}
											else if (opcao_selecionada_lista == 2){
												strcpy(forma_pagamento_ordemservico_aux, "2 - Cartão");
											}
											else if (opcao_selecionada_lista == 3){
												strcpy(forma_pagamento_ordemservico_aux, "3 - Cheque");
											}
											else if (opcao_selecionada_lista == 4){
												strcpy(forma_pagamento_ordemservico_aux, "4 - Outros");
											}
											gotoxy(39,coord_tecnico);
											scanf("%i",&usuario_tecnico_aux);
											gotoxy(40,coord_data_prevista);
											scanf("%s",&data_previsao_ordemservico_aux);
											gotoxy(81,coord_passos_reproduzir);
											scanf("%s",&passos_a_reproduzir_ordemservico_aux);
											
											printf("\n");
											printf("\t\t\t\t\t ------------------------------\n");
											printf("\t\t\t\t\t|  0) Voltar  |  1) Cadastrar  |\n");
											printf("\t\t\t\t\t ------------------------------\n");
											printf("\n\t\t\t\t\tOpção: ");
											scanf("%i",&opcao_incluir);
											
											switch(opcao_incluir){
												case 1:{
													fflush(stdin);
													ordemservico[cont_ordemservico].codigo = cont_ordemservico;
													ordemservico[cont_ordemservico].cliente = cliente_ordemservico_aux;
													strcpy(ordemservico[cont_ordemservico].aparelho, aparelho_ordemservico_aux);
													strcpy(ordemservico[cont_ordemservico].data_cadastro, data_cadastro_ordemservico_aux);										
													ordemservico[cont_ordemservico].tipo = tipo_ordemservico_aux;
													strcpy(ordemservico[cont_ordemservico].descricao, descricao_ordemservico_aux);
													strcpy(ordemservico[cont_ordemservico].custo, custo_ordemservico_aux);
													strcpy(ordemservico[cont_ordemservico].forma_pagamento, forma_pagamento_ordemservico_aux);
													ordemservico[cont_ordemservico].usuario_tecnico = usuario_tecnico_aux;
													strcpy(ordemservico[cont_ordemservico].prioridade, prioridade_ordemservico_aux);
													strcpy(ordemservico[cont_ordemservico].data_previsao, data_previsao_ordemservico_aux);
													strcpy(ordemservico[cont_ordemservico].passos_a_reproduzir, passos_a_reproduzir_ordemservico_aux);
													strcpy(ordemservico[cont_ordemservico].solucao_aplicada, "");
													strcpy(ordemservico[cont_ordemservico].status, "Aberta");
													ordemservico[cont_ordemservico].usuario_atendimento = id_usuario_logado;
													ordemservico[cont_ordemservico].usuario_ultima_alteracao = id_usuario_logado;
													
													printf("\n\t\t\t\t\tOrdem de Serviço Cadastrada com Sucesso!");
													sleep(2);
													cont_ordemservico++;
													goto listagem_ordemservico_cadastro;
													break;
												}
											}
											break;
											
										} while(opcao_incluir!=0);
										break;
									}
									
									case 2:{
										
										do{	
											visualizacao_ordemservico_cadastro:
												
											header("Visualização de Ordem de Serviço");
										
											gotoxy(25,7);
											printf("Número: %i",codigo_busca);
											gotoxy(75,7);
											printf("(1) Cliente: %i - %s",ordemservico[codigo_busca].cliente,	cliente[ordemservico[codigo_busca].cliente].nome);
											gotoxy(25,9);
											printf("(2) Aparelho: %s",ordemservico[codigo_busca].aparelho);
											gotoxy(75,9);
											printf("(3) Data Cadastro: %s",ordemservico[codigo_busca].data_cadastro);
											gotoxy(25,11);
											printf("(4) Tipo: %i - %s",ordemservico[codigo_busca].tipo,	tiposervico[ordemservico[codigo_busca].tipo].descricao);
											gotoxy(75,11);
											printf("(5) Descrição: %s",ordemservico[codigo_busca].descricao);
											gotoxy(25,13);
											printf("(6) Usuário Atendimento: %i - %s",	ordemservico[codigo_busca].usuario_atendimento,	usuario[ordemservico[codigo_busca].usuario_atendimento].nome);
											gotoxy(75,13);
											printf("(7) Usuário Última Alteração: %i - %s",	ordemservico[codigo_busca].usuario_ultima_alteracao,	usuario[ordemservico[codigo_busca].usuario_ultima_alteracao].nome);
											gotoxy(25,15);
											printf("(8) Custo: R$ %s",ordemservico[codigo_busca].custo);
											gotoxy(75,15);
											printf("(9) Forma de Pagamento: %s",ordemservico[codigo_busca].forma_pagamento);
											gotoxy(25,17);
											printf("(10) Técnico: %i - %s",	ordemservico[codigo_busca].usuario_tecnico,	usuario[ordemservico[codigo_busca].usuario_tecnico].nome);
											gotoxy(75,17);
											printf("(11) Prioridade: %s",ordemservico[codigo_busca].prioridade);
											gotoxy(25,19);
											printf("(12) Data Prevista: %s",ordemservico[codigo_busca].data_previsao);
											gotoxy(75,19);
											printf("(13) Passos a Reproduzir: %s",ordemservico[codigo_busca].passos_a_reproduzir);
											gotoxy(25,21);
											printf("(14) Solução Aplicada: %s",ordemservico[codigo_busca].solucao_aplicada);
											gotoxy(75,21);
											printf("(15) Status: %s",ordemservico[codigo_busca].status);
											printf("\n\n\n");
											printf("\t\t\t ---------------------------------------------\n");
											printf("\t\t\t|   0) Voltar   |  1) Alterar  |  2) Excluir  |\n");
											printf("\t\t\t ---------------------------------------------\n");
											
											printf("\n\t\t\t\t\tAção: "); scanf("%i", &opcao_visualizar);
											
											switch(opcao_visualizar){
												
												case 1:{
													
													do{
													
														printf("\n\n\t\t\t\t\tDigite o nº do Campo Desejado para Alterar: ");
														scanf("%i",&opcao_alterar);
															
														header("Alteração de Ordem de Serviço");
															
														printf("\n\t\t\t\t\t----------------------------------");
														printf("\n\t\t\t\t\t         Dado Original             ");
														
														if (opcao_alterar == 1){
															
															do{
																printf("\n\n\t\t\t\t\tCliente: %i - %s",ordemservico[codigo_busca].cliente,cliente[ordemservico[codigo_busca].cliente].nome);
																
																printf("\n\t\t\t\t\t----------------------------------");
																printf("\n\t\t\t\t\t         Dado Novo             ");
																printf("\n\n\t\t\t\tCliente: ");
																for(cont = 1; cont < maximo_clientes; cont++){
														
															    	ativo = strcmp(cliente[cont].situacao, "Ativo");
															    	inativo = strcmp(cliente[cont].situacao, "Inativo");
															    	
																	if (ativo == 0 || inativo == 0){
																		fflush(stdin);
																		printf("\n\t\t\t\t\t%i - %s",cliente[cont].codigo,cliente[cont].nome);
																	}
															   		
																}
																printf("\n\n\t\t\t\tCliente: ");
																scanf("%i",&cliente_ordemservico_aux);
																printf("\n\t\t\t\t%i - %s",cliente[cliente_ordemservico_aux].codigo,cliente[cliente_ordemservico_aux].nome);
																
																printf("\n\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		ordemservico[codigo_busca].cliente = cliente_ordemservico_aux;
																		ordemservico[codigo_busca].usuario_atendimento = id_usuario_logado;
																		ordemservico[codigo_busca].usuario_ultima_alteracao = id_usuario_logado;
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto visualizacao_ordemservico_cadastro;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_ordemservico_cadastro;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														if (opcao_alterar == 2){
															
															do{
																printf("\n\n\t\t\t\t\tAparelho: %s",ordemservico[codigo_busca].aparelho);
																
																printf("\n\t\t\t\t\t----------------------------------\n");
																printf("\t\t\t\t\t         Dado Novo             ");
																printf("\n\n\t\t\t\t\tAparelho: ");
																scanf("%s",&aparelho_ordemservico_aux);
																printf("\n\n");
																
																printf("\n\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		strcpy(ordemservico[codigo_busca].aparelho, aparelho_ordemservico_aux);
																		ordemservico[codigo_busca].usuario_atendimento = id_usuario_logado;
																		ordemservico[codigo_busca].usuario_ultima_alteracao = id_usuario_logado;
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto visualizacao_ordemservico_cadastro;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_ordemservico_cadastro;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														if (opcao_alterar == 4){
															
															do{
																printf("\n\n\t\t\t\t\tTipo: %i - %s",ordemservico[codigo_busca].tipo,	tiposervico[ordemservico[codigo_busca].tipo].descricao);
																
																printf("\n\t\t\t\t\t----------------------------------\n");
																printf("\t\t\t\t\t         Dado Novo             ");
																printf("\n\t\t\t\t\tTipo: ");
																for(cont = 1; cont < maximo_tiposervico; cont++){
														
															    	ativo = strcmp(tiposervico[cont].situacao, "Ativo");
															    	inativo = strcmp(tiposervico[cont].situacao, "Inativo");
															    	
															    	// Se o compartivo acima for igual retorna 0, caso não retorna 1
																	if (ativo == 0 || inativo == 0){
																		fflush(stdin);
																		printf("\n\t\t\t\t\t\t%i - %s",tiposervico[cont].codigo,tiposervico[cont].descricao);
																	}
															   		
																}
																printf("\n\n\t\t\t\t\tTipo: ");
																scanf("%i",&tipo_ordemservico_aux);
																printf("\n\t\t\t\t\t\t%i - %s",tiposervico[tipo_ordemservico_aux].codigo,tiposervico[tipo_ordemservico_aux].descricao);
																
																printf("\n\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		ordemservico[codigo_busca].tipo = tipo_ordemservico_aux;
																		ordemservico[codigo_busca].usuario_atendimento = id_usuario_logado;
																		ordemservico[codigo_busca].usuario_ultima_alteracao = id_usuario_logado;
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto visualizacao_ordemservico_cadastro;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_ordemservico_cadastro;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														if (opcao_alterar == 5){
															
															do{
																printf("\n\n\t\t\t\t\tDescrição: %s",ordemservico[codigo_busca].descricao);
																
																printf("\n\t\t\t\t\t----------------------------------\n");
																printf("\t\t\t\t\t         Dado Novo             ");
																printf("\n\n\t\t\t\t\tDescrição: ");
																scanf("%s",&descricao_ordemservico_aux);
																printf("\n\n");
																
																printf("\n\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		strcpy(ordemservico[codigo_busca].descricao, descricao_ordemservico_aux);
																		ordemservico[codigo_busca].usuario_atendimento = id_usuario_logado;
																		ordemservico[codigo_busca].usuario_ultima_alteracao = id_usuario_logado;
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto visualizacao_ordemservico_cadastro;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_ordemservico_cadastro;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														if (opcao_alterar == 8){
															
															do{
																printf("\n\n\t\t\t\t\tCusto R$: %s",ordemservico[codigo_busca].custo);
																
																printf("\n\t\t\t\t\t----------------------------------\n");
																printf("\t\t\t\t\t         Dado Novo             ");
																printf("\n\n\t\t\t\t\tCusto R$: ");
																scanf("%s",&custo_ordemservico_aux);
																printf("\n\n");
																
																printf("\n\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		strcpy(ordemservico[codigo_busca].custo, custo_ordemservico_aux);
																		ordemservico[codigo_busca].usuario_atendimento = id_usuario_logado;
																		ordemservico[codigo_busca].usuario_ultima_alteracao = id_usuario_logado;
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto visualizacao_ordemservico_cadastro;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_ordemservico_cadastro;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														if (opcao_alterar == 9){
															
															do{
																
																printf("\n\n\t\t\t\t\tForma de Pagamento: %s",ordemservico[codigo_busca].forma_pagamento);
																
																printf("\n\t\t\t\t\t----------------------------------\n");
																printf("\t\t\t\t\t         Dado Novo             ");
																printf("\n\n\t\t\t\t\tForma de Pagamento: ");
																printf("\n\n\t\t\t\t\t\t1 - Dinheiro");
																printf("\n\t\t\t\t\t\t2 - Cartão");
																printf("\n\t\t\t\t\t\t3 - Cheque");
																printf("\n\t\t\t\t\t\t4 - Outros");
																printf("\n\n\t\t\t\t\tForma de Pagamento: ");
																scanf("%i",&opcao_selecionada_lista);
																fflush(stdin);								
																if (opcao_selecionada_lista == 1){
																	strcpy(forma_pagamento_ordemservico_aux, "1 - Dinheiro");
																	printf("\n\t\t\t\t\t\t1 - Dinheiro");
																}
																else if (opcao_selecionada_lista == 2){
																	strcpy(forma_pagamento_ordemservico_aux, "2 - Cartão");
																	printf("\n\t\t\t\t\t\t2 - Cartão");
																}
																else if (opcao_selecionada_lista == 3){
																	strcpy(forma_pagamento_ordemservico_aux, "3 - Cheque");
																	printf("\n\t\t\t\t\t\t3 - Cheque");
																}
																else if (opcao_selecionada_lista == 4){
																	strcpy(forma_pagamento_ordemservico_aux, "4 - Outros");
																	printf("\n\t\t\t\t\t\t4 - Outros");
																}									
																
																printf("\n\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		strcpy(ordemservico[codigo_busca].forma_pagamento, forma_pagamento_ordemservico_aux);
																		ordemservico[codigo_busca].usuario_atendimento = id_usuario_logado;
																		ordemservico[codigo_busca].usuario_ultima_alteracao = id_usuario_logado;
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto visualizacao_ordemservico_cadastro;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_ordemservico_cadastro;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}	
														
														if (opcao_alterar == 10){
															
															do{
																printf("\n\n\t\t\t\t\tTécnico: %i - %s",ordemservico[codigo_busca].usuario_tecnico,	usuario[ordemservico[codigo_busca].usuario_tecnico].nome);
																
																printf("\n\t\t\t\t\t----------------------------------");
																printf("\n\t\t\t\t\t         Dado Novo             ");
																printf("\n\n\t\t\t\t\tTécnico: ");
																for(cont = 1; cont < maximo_usuarios; cont++){
														
															    	ativo = strcmp(usuario[cont].situacao, "Ativo");
															    	inativo = strcmp(usuario[cont].situacao, "Inativo");
															    	
																	if (ativo == 0 || inativo == 0){
																		// Filtra só usuários do tipo TECNICO //
																		if (usuario[cont].tipo == 3){
																			fflush(stdin);
																			printf("\n\n\t\t\t\t\t\t%i - %s",usuario[cont].codigo,	usuario[cont].nome);
																		}											
																	}	
															   		
																}
																printf("\n\n\t\t\t\t\tTécnico: ");
																scanf("%i",&usuario_tecnico_aux);
																printf("\n\n\t\t\t\t\t\t%i - %s",usuario[usuario_tecnico_aux].codigo,	usuario[usuario_tecnico_aux].nome);
																
																printf("\n\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		ordemservico[codigo_busca].usuario_tecnico = usuario_tecnico_aux;
																		ordemservico[codigo_busca].usuario_atendimento = id_usuario_logado;
																		ordemservico[codigo_busca].usuario_ultima_alteracao = id_usuario_logado;
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto visualizacao_ordemservico_cadastro;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_ordemservico_cadastro;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														if (opcao_alterar == 11){
															
															do{
																printf("\n\n\t\t\t\t\tPrioridade: %s",ordemservico[codigo_busca].prioridade);
																
																printf("\n\t\t\t\t\t----------------------------------\n");
																printf("\t\t\t\t\t         Dado Novo             ");
																printf("\n\n\t\t\t\t\tPrioridade: ");
																printf("\n\n\t\t\t\t\t\t1 - Baixa");
																printf("\n\t\t\t\t\t\t2 - Média");
																printf("\n\t\t\t\t\t\t3 - Alta");
																printf("\n\n\t\t\t\t\tPrioridade: ");
																scanf("%i",&opcao_selecionada_lista);
																fflush(stdin);								
																if (opcao_selecionada_lista == 1){
																	strcpy(prioridade_ordemservico_aux, "1 - Baixa");
																	printf("\n\t\t\t\t\t\t1 - Baixa");
																}
																else if (opcao_selecionada_lista == 2){
																	strcpy(prioridade_ordemservico_aux, "2 - Média");
																	printf("\n\t\t\t\t\t\t2 - Média");
																}
																else if (opcao_selecionada_lista == 3){
																	strcpy(prioridade_ordemservico_aux, "3 - Alta");
																	printf("\n\t\t\t\t\t\t3 - Alta");
																}								
																
																printf("\n\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		strcpy(ordemservico[codigo_busca].prioridade, prioridade_ordemservico_aux);
																		ordemservico[codigo_busca].usuario_atendimento = id_usuario_logado;
																		ordemservico[codigo_busca].usuario_ultima_alteracao = id_usuario_logado;
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto visualizacao_ordemservico_cadastro;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_ordemservico_cadastro;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														if (opcao_alterar == 12){
															do{
																printf("\n\n\t\t\t\t\tData Prevista: %s",ordemservico[codigo_busca].data_previsao);
																
																printf("\n\t\t\t\t\t----------------------------------\n");
																printf("\t\t\t\t\t         Dado Novo             ");
																printf("\n\n\t\t\t\t\tData Prevista: ");
																scanf("%s",&data_previsao_ordemservico_aux);
																printf("\n\n");
																
																printf("\n\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		strcpy(ordemservico[codigo_busca].data_previsao, data_previsao_ordemservico_aux);
																		ordemservico[codigo_busca].usuario_atendimento = id_usuario_logado;
																		ordemservico[codigo_busca].usuario_ultima_alteracao = id_usuario_logado;
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto visualizacao_ordemservico_cadastro;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_ordemservico_cadastro;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														if (opcao_alterar == 13){
															
															do{
																printf("\n\n\t\t\t\t\tPassos a Reproduzir: %s",ordemservico[codigo_busca].passos_a_reproduzir);
																
																printf("\n\t\t\t\t\t----------------------------------\n");
																printf("\t\t\t\t\t         Dado Novo             ");
																printf("\n\n\t\t\t\t\tPassos a Reproduzir: ");
																scanf("%s",&passos_a_reproduzir_ordemservico_aux);
																printf("\n\n");
																
																printf("\n\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\t\t\t\t\t|   0) Voltar   |  1) Alterar  |\n");
																printf("\t\t\t\t\t ------------------------------\n");
																printf("\n\t\t\t\t\tOpção: ");
																scanf("%i",&opcao_alterar);
																
																switch(opcao_alterar){
																	case 1:{
																		fflush(stdin);
																		strcpy(ordemservico[codigo_busca].passos_a_reproduzir, passos_a_reproduzir_ordemservico_aux);
																		ordemservico[codigo_busca].usuario_atendimento = id_usuario_logado;
																		ordemservico[codigo_busca].usuario_ultima_alteracao = id_usuario_logado;
																		printf("\n\t\t\t\t\tCampo alterado com sucesso!");
																		sleep(2);
																		goto visualizacao_ordemservico_cadastro;
																		break;
																	}
																	case 0:{ 
																		goto visualizacao_ordemservico_cadastro;
																		break;
																	}
																}
																break;
															
															}while(opcao_alterar!=0);
														}
														
														else {
															printf("\n\n\t\t\t\t\tUsuário Não Autorizado Para Alteração Este Campo!\n");
															sleep(2);
															goto visualizacao_ordemservico_cadastro;
														}
														
													}while(opcao_alterar!=0);
												}
												
												case 2:{
													
													printf("\n\t\t\t\t\tTem certeza que deseja excluir? (1 - Sim / 0 - Não): ");
													scanf("%i",&opcao_excluir);
													
													if (opcao_excluir == 1){
														strcpy(ordemservico[codigo_busca].status, "Excluido");
														printf("\n\t\t\t\t\tOrdem de Serviço Excluída com Sucesso!");
														sleep(2);
														goto listagem_ordemservico_cadastro;
														break;
													}
													else {
														printf("\n\t\t\t\t\tOrdem de Serviço não foi excluído!");
														sleep(2);
														goto listagem_ordemservico_cadastro;
													} 
												}
											}
											break;
										} while(opcao_visualizar!=0); 
										break;
									}
								} 
							
							}while(opcao_menu!=0);
							break;
						}
						
						case 0: {
							goto login;
						}
					}
						
				} while(menu_principal!=0);
				
			}
			
			// USUÁRIO TÉCNICO
			if(usuario[cont].tipo == 3){
				
				for(cont = 1; cont < 50; cont++){
								
					if ((usuario[cont].tipo == tipousuario[cont].codigo) && (id_usuario_logado == usuario[cont].codigo)){
				//		printf("\n\t\t\t\t\t\tTipo: %i",tipousuario[cont].codigo);
	//					printf("\n\t\t\t\t\t\tNome: %s",tipousuario[cont].descricao);
						strcpy(nome_tipo_usuario_logado,tipousuario[cont].descricao);
					}
				}
				
				do {
			
					telaMenuUsuarioTecnico(nome_usuario_logado, nome_tipo_usuario_logado);
					
					printf("\n\t\t\t\t\t\tOpção: ");
					scanf("%i", &menu_principal);
					
					switch (menu_principal){
						
						case 1:{
							
							do{
								
								listagem_menu_ordemservico_tecnico:
								
								system("cls");
								printf("\n\n");
								printf("\t\t\t\t ---------------------------------------------\n");
								printf("\t\t\t\t|          ORDEM DE SERVIÇO - STATUS          |\n");
								printf("\t\t\t\t ---------------------------------------------\n");
								printf("\t\t\t\t|   0) Voltar   |  1) Aberta   |  2) Fechada  |\n");
								printf("\t\t\t\t ---------------------------------------------\n");
								
								int opcao_ordem_tecnico;
								
								printf("\n\t\t\t\t\tOpção: "); scanf("%i", &opcao_ordem_tecnico);
								
								if (opcao_ordem_tecnico == 1){
									
									do{
								
										listagem_ordemservico_tecnico_aberta:
										
										system("cls");
										printf("\n");
										printf("\t\t+-------------------------------------------------------------------------------------+\n");
									    printf("\t\t|                         .::ORDENS DE SERVIÇO EM ABERTO::.                           |\n");
									    printf("\t\t+---------+-----------------------------+-------------------------+-------------------+\n");
									    printf("\t\t| Número  | Cliente                     | Técnico                 | Status            |\n");
									    printf("\t\t+---------+-----------------------------+-------------------------+-------------------+\n");
									    
									    int achou = 1;
									    
									    coordenada = 7;
									    for(cont = 1; cont < maximo_ordemservicos; cont++){
											
									    	ativo = strcmp(ordemservico[cont].status, "Aberta");
									    	inativo = strcmp(ordemservico[cont].status, "Fechada");
									    	
											if (ativo == 0 && id_usuario_logado == ordemservico[cont].usuario_tecnico){
												fflush(stdin);
												gotoxy(17,coordenada);
												printf("| %i",ordemservico[cont].codigo);
												gotoxy(27,coordenada);
												printf("| %s",cliente[ordemservico[cont].cliente].nome);
												gotoxy(57,coordenada);
												printf("| %s",usuario[ordemservico[cont].usuario_tecnico].nome);
												gotoxy(83,coordenada);
												printf("| %s",ordemservico[cont].status);
												gotoxy(103,coordenada);
												printf("|");
												printf("\n");
												coordenada++;
												achou = 2;
											}
										}
										
										if(achou == 1) {
											gotoxy(17,coordenada);
											printf("| Técnico não possui nenhuma ordem de serviço em aberto.");
											gotoxy(103,coordenada);
											printf("|\n");
										}
										
										printf("\t\t+---------+-----------------------------+-------------------------+-------------------+\n");
									
										printf("\n\n");
										printf("\t\t\t\t ----------------------------------\n");
										printf("\t\t\t\t|   0) Voltar   |  1) Visualizar   |\n");
										printf("\t\t\t\t ----------------------------------\n");
										
										printf("\n\t\t\t\t\tAção: "); scanf("%i", &opcao_menu);
										
										if (opcao_menu == 1){
											printf("\n\n\t\t\t\t\tDigite o Código da Ordem Para Visualizar: ");
											scanf("%i",&codigo_busca);
										}
										
										switch (opcao_menu){
										
											case 1:{
												
												do{	
													visualizacao_ordemservico_tecnico:
														
													header("Visualização de Ordem de Serviço");
										
													gotoxy(25,7);
													printf("Número: %i",codigo_busca);
													gotoxy(75,7);
													printf("(1) Cliente: %i - %s",ordemservico[codigo_busca].cliente,	cliente[ordemservico[codigo_busca].cliente].nome);
													gotoxy(25,9);
													printf("(2) Aparelho: %s",ordemservico[codigo_busca].aparelho);
													gotoxy(75,9);
													printf("(3) Data Cadastro: %s",ordemservico[codigo_busca].data_cadastro);
													gotoxy(25,11);
													printf("(4) Tipo: %i - %s",ordemservico[codigo_busca].tipo,	tiposervico[ordemservico[codigo_busca].tipo].descricao);
													gotoxy(75,11);
													printf("(5) Descrição: %s",ordemservico[codigo_busca].descricao);
													gotoxy(25,13);
													printf("(6) Usuário Atendimento: %i - %s",	ordemservico[codigo_busca].usuario_atendimento,	usuario[ordemservico[codigo_busca].usuario_atendimento].nome);
													gotoxy(75,13);
													printf("(7) Usuário Última Alteração: %i - %s",	ordemservico[codigo_busca].usuario_ultima_alteracao,	usuario[ordemservico[codigo_busca].usuario_ultima_alteracao].nome);
													gotoxy(25,15);
													printf("(8) Custo: R$ %s",ordemservico[codigo_busca].custo);
													gotoxy(75,15);
													printf("(9) Forma de Pagamento: %s",ordemservico[codigo_busca].forma_pagamento);
													gotoxy(25,17);
													printf("(10) Técnico: %i - %s",	ordemservico[codigo_busca].usuario_tecnico,	usuario[ordemservico[codigo_busca].usuario_tecnico].nome);
													gotoxy(75,17);
													printf("(11) Prioridade: %s",ordemservico[codigo_busca].prioridade);
													gotoxy(25,19);
													printf("(12) Data Prevista: %s",ordemservico[codigo_busca].data_previsao);
													gotoxy(75,19);
													printf("(13) Passos a Reproduzir: %s",ordemservico[codigo_busca].passos_a_reproduzir);
													gotoxy(25,21);
													printf("(14) Solução Aplicada: %s",ordemservico[codigo_busca].solucao_aplicada);
													gotoxy(75,21);
													printf("(15) Status: %s",ordemservico[codigo_busca].status);
													printf("\n\n\n");
													printf("\t\t\t ------------------------------\n");
													printf("\t\t\t|   0) Voltar   |  1) Alterar  |\n");
													printf("\t\t\t ------------------------------\n");
													
													printf("\n\t\t\t\t\tAção: "); scanf("%i", &opcao_visualizar);
													
													switch(opcao_visualizar){
														
														case 1:{
													
															do{
															
																printf("\n\n\t\t\t\t\tDigite o nº do Campo Desejado para Alterar: ");
																scanf("%i",&opcao_alterar);
																
																if (opcao_alterar == 15){
																	
																	do{
																		header("Alteração de Ordem de Serviço");
																		
																		printf("\n\t\t\t\t\t----------------------------------\n");
																		printf("\t\t\t\t\t         Dado Original             ");																
																		printf("\n\n\t\t\t\t\tStatus: %s",ordemservico[codigo_busca].status);
																
																		printf("\n\t\t\t\t\t----------------------------------\n");
																		printf("\t\t\t\t\t         Dado Novo             ");
																		printf("\n\n\t\t\t\t\tStatus: ");
																		
																		printf("\n\n\t\t\t\t\t\t1 - Finalizada");
																		printf("\n\n\t\t\t\t\tStatus: ");
																		scanf("%i",&opcao_selecionada_lista);
																		fflush(stdin);								
																		if (opcao_selecionada_lista == 1){
																			
																			printf("\n\t\t\t\t\tFinalizar Ordem de Serviço? (1 - Sim / 0 - Não): ");
																			scanf("%i",&opcao_excluir);
																			
																			if (opcao_excluir == 1){
																				
																				printf("\n\n\t\t\t\t\tSolução Aplicada: ");
																				scanf("%s",&solucao_aplicada_ordemservico_aux);
																				printf("\n\n");
																				
																				strcpy(ordemservico[codigo_busca].solucao_aplicada, solucao_aplicada_ordemservico_aux);
																				strcpy(ordemservico[codigo_busca].status, "Fechada");
																				ordemservico[codigo_busca].usuario_ultima_alteracao = id_usuario_logado;
																				printf("\n\t\t\t\t\tOrdem de Serviço Finalizada com Sucesso!");
																				sleep(2);
																				goto listagem_ordemservico_tecnico_fechada;
																				break;
																			}
																			else {
																				printf("\n\t\t\t\t\tOrdem de Serviço Não Finalizada!");
																				sleep(2);
																				goto visualizacao_ordemservico_tecnico;
																			}
																		}
																	
																	}while(opcao_alterar!=0);
																}
																
																else {
																	printf("\n\n\t\t\t\t\tUsuário Não Autorizado Para Alteração Este Campo!\n");
																	sleep(2);
																	goto visualizacao_ordemservico_tecnico;
																}
																
															}while(opcao_alterar!=0);
														}
													}
													break;
												} while(opcao_visualizar!=0); 
												break;
											}
											
											case 0:{
												goto listagem_menu_ordemservico_tecnico;
												break;
											}
										} 
									
									}while(opcao_menu!=0);
									break;
									
								}
								if (opcao_ordem_tecnico == 2){
									
									do{
								
										listagem_ordemservico_tecnico_fechada:
											
										system("cls");
										printf("\n");
										printf("\t\t+-------------------------------------------------------------------------------------+\n");
									    printf("\t\t|                         .::ORDENS DE SERVIÇO FINALIZADAS::.                         |\n");
									    printf("\t\t+---------+-----------------------------+-------------------------+-------------------+\n");
									    printf("\t\t| Número  | Cliente                     | Técnico                 | Status            |\n");
									    printf("\t\t+---------+-----------------------------+-------------------------+-------------------+\n");
									    
									    int achou = 1;
									    
									    coordenada = 7;
									    for(cont = 1; cont < maximo_ordemservicos; cont++){
											
									    	ativo = strcmp(ordemservico[cont].status, "Aberta");
									    	inativo = strcmp(ordemservico[cont].status, "Fechada");
									    	
											if (inativo == 0 && id_usuario_logado == ordemservico[cont].usuario_tecnico){
												fflush(stdin);
												gotoxy(17,coordenada);
												printf("| %i",ordemservico[cont].codigo);
												gotoxy(27,coordenada);
												printf("| %s",cliente[ordemservico[cont].cliente].nome);
												gotoxy(57,coordenada);
												printf("| %s",usuario[ordemservico[cont].usuario_tecnico].nome);
												gotoxy(83,coordenada);
												printf("| %s",ordemservico[cont].status);
												gotoxy(103,coordenada);
												printf("|");
												printf("\n");
												coordenada++;
												achou = 2;
											}
										}
										
										if(achou == 1) {
											gotoxy(17,coordenada);
											printf("| Técnico não possui nenhuma ordem de serviço fechada.");
											gotoxy(103,coordenada);
											printf("|\n");
										}
										
										printf("\t\t+---------+--------------------------+-----------------+-------------+----------------+\n");
									
										printf("\n\n");
										printf("\t\t\t\t ----------------------------------\n");
										printf("\t\t\t\t|   0) Voltar   |  1) Visualizar   |\n");
										printf("\t\t\t\t ----------------------------------\n");
										
										printf("\n\t\t\t\tAção: "); scanf("%i", &opcao_menu);
										
										if (opcao_menu == 1){
											printf("\n\n\t\t\t\t\tDigite o Código da Ordem Para Visualizar: ");
											scanf("%i",&codigo_busca);
										}
										
										switch (opcao_menu){
										
											case 1:{
												
												do{	
													header("Visualização de Ordem de Serviço");
										
													gotoxy(25,7);
													printf("Número: %i",codigo_busca);
													gotoxy(75,7);
													printf("(1) Cliente: %i - %s",ordemservico[codigo_busca].cliente,	cliente[ordemservico[codigo_busca].cliente].nome);
													gotoxy(25,9);
													printf("(2) Aparelho: %s",ordemservico[codigo_busca].aparelho);
													gotoxy(75,9);
													printf("(3) Data Cadastro: %s",ordemservico[codigo_busca].data_cadastro);
													gotoxy(25,11);
													printf("(4) Tipo: %i - %s",ordemservico[codigo_busca].tipo,	tiposervico[ordemservico[codigo_busca].tipo].descricao);
													gotoxy(75,11);
													printf("(5) Descrição: %s",ordemservico[codigo_busca].descricao);
													gotoxy(25,13);
													printf("(6) Usuário Atendimento: %i - %s",	ordemservico[codigo_busca].usuario_atendimento,	usuario[ordemservico[codigo_busca].usuario_atendimento].nome);
													gotoxy(75,13);
													printf("(7) Usuário Última Alteração: %i - %s",	ordemservico[codigo_busca].usuario_ultima_alteracao,	usuario[ordemservico[codigo_busca].usuario_ultima_alteracao].nome);
													gotoxy(25,15);
													printf("(8) Custo: R$ %s",ordemservico[codigo_busca].custo);
													gotoxy(75,15);
													printf("(9) Forma de Pagamento: %s",ordemservico[codigo_busca].forma_pagamento);
													gotoxy(25,17);
													printf("(10) Técnico: %i - %s",	ordemservico[codigo_busca].usuario_tecnico,	usuario[ordemservico[codigo_busca].usuario_tecnico].nome);
													gotoxy(75,17);
													printf("(11) Prioridade: %s",ordemservico[codigo_busca].prioridade);
													gotoxy(25,19);
													printf("(12) Data Prevista: %s",ordemservico[codigo_busca].data_previsao);
													gotoxy(75,19);
													printf("(13) Passos a Reproduzir: %s",ordemservico[codigo_busca].passos_a_reproduzir);
													gotoxy(25,21);
													printf("(14) Solução Aplicada: %s",ordemservico[codigo_busca].solucao_aplicada);
													gotoxy(75,21);
													printf("(15) Status: %s",ordemservico[codigo_busca].status);
													printf("\n\n");
													printf("\t\t\t ---------------\n");
													printf("\t\t\t|   0) Voltar   |\n");
													printf("\t\t\t ---------------\n");
													
													printf("\n\t\t\tAção: "); scanf("%i", &opcao_visualizar);
													
													switch(opcao_visualizar){
														case 0:{
															goto listagem_ordemservico_tecnico_fechada;
															break;
														}
													}
													break;
												} while(opcao_visualizar!=0); 
												break;
											}
											
											case 0:{
												goto listagem_menu_ordemservico_tecnico;
												break;
											}
										} 
									
									}while(opcao_menu!=0);
									break;
									
								}
								if (opcao_ordem_tecnico == 0){
									telaMenuUsuarioTecnico(nome_usuario_logado, nome_tipo_usuario_logado);
								}
							
							}while(opcao_menu!=0);
							break;					
						}
						
						case 0: {
							goto login;
						}
					}
					
				} while(menu_principal!=0);
				
			}
			
			else {
				system("cls");
				printf("\n\n\n\n\n\n\n\t\t\t\t\tSaindo do sistema...");
				sleep(2);
				exit(0);
			}
		}
		
		if (valida_login == 0 && valida_senha != 0){
		
			printf("\n\n\n\n\t\t\t\t\t\t\t  SENHA INCORRETA");
			sleep(2);
			goto login;
			break;
		}
		
		if (valida_login != 0 && valida_senha != 0 && cont == maximo_usuarios-1){
			
			printf("\n\n\n\n\t\t\t\t\t\t\t  USUÁRIO INCORRETO");
			sleep(2);
			goto login;
			break;
		}
	}
}
