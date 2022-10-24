#include <iostream>
#include <string>
using namespace std;

// 1 -  Faça uma função que recebe uma certa valor e ajusta ela percentualmente 
// entre dois valores mínimo e máximo e retorna esse valor

// 2 - Faça uma função que simule a leitura de um sensor lendo o 
// valor do teclado ao final a função retorna este valor

// 3 - Faça uma função que armazena uma valor inteira qualquer 
// em um vetor fornecido. Note que como C não possui vetores 
// nativos da linguagem, lembre-se que você precisa passar o 
// valor máximo do vetor assim como a última posição preenchida
// Evite também que, por acidente, um valor seja escrito em 
// uma área de memória fora do vetor



// 4 - Faça uma função que recebe um vetor com 4 posições que contém 
// o valor da distância de um pequeno robô até cada um dos seus 4 lados.
// A função deve retornar duas informações: A primeira é a direção 
// de maior distância ("Direita", "Esquerda", "Frente", "Tras") e a 
// segunda é esta maior distância.




// 5 - Faça uma função que pergunta ao usuário se ele deseja continuar o mapeamento e 
// retorna verdadeiro ou falso


// 6 - A função abaixo (que está incompleta) vai "d" virtualmente um robô 
// e através de 4 sensores em cada um dos 4 pontos do robo ("Direita", "Esquerda", 
// "Frente", "Tras"). 
//      A cada passo, ele verifica as distâncias aos objetos e vai mapeando o terreno 
// para uma movimentação futura. 
//      Ele vai armazenando estas distancias em um vetor fornecido como parâmetro 
// e retorna a ultima posicao preenchida do vetor.
//      Esta função deve ir lendo os 4 sensores até que um comando de pare seja enviado 
//
//      Para simular os sensores e os comandos de pare, use as funções já construídas 
// nos ítens anteriores e em um looping contínuo até que um pedido de parada seja 
// enviado pelo usuário. 
//
//      Complete a função com a chamada das funções já criadas

int guardarvetor(int t,int x, int *vetor,int sposi){
    int *vp = vetor;
	vp[sposi] = x;
	vp[t];
    return (sposi + 1);
} 

int lersensor(){
    int n = 0;
    printf("Por favor insira um numero:  ");
    c >> n;
    return n;
}

int converter(int vMin,int x,,int Vmax){
	Vmax = Vmax - vMin;
	x = x - vMin;
	int a = (x*100)/Vmax;
	return a;
}


const char *direcaoMenorCaminho(int *direcao,int *vetor){
	const char *sentidos[] = {"Esquerda", "Direita", "Tras", "Frente"};
	int l = 0;
	for (int s = 0; s < 4; s++) {
		if (vetor[s] > *direcao){
			*direcao = vetor[s];
			l = s;
		}
	}
	return sentidos[l];
}

int leComando(){
	int resposta = 0;
	printf("Voce deseja continuar ? Veja as opcoes (1 - Sim / 0 - Não) \n ") ;
	scanf(" %d ", &resposta);
	if (resposta == 1) {
		return 1;
	}
	else {
		return 0;
	}
}

int dirige(int mvint *i){
	int *vMov = i;
	int posvetor = 0;
	int mVetor = mv;
	int d = 1;		
	while(d == 1){
		for (int i = 0; i < 4; i++)	{
			int valor = lersensor();
			valor = converter(valor,0,830);
			posvetor = guardarvetor(mVetor,valor,posvetor,vMov);
		}			
		d = leComando();		
	}
	return posvetor;
}

void percorre(int *v,int distanciaT){			
	int mD = 0;
	int *vMov = v;
	for(int i = 0; i< distanciaT; i+=4){
		const char *direcao = direcaoMenorCaminho(&(vMov[i]),&mD);
		printf(" Movimentando para %s distancia = %i\n ", direcao,mD);
	}
}

int main(int f, char** g) {
	int vMov[mVetor*4];
	int mVetor = 100;
	int pav = 0;
	pav = dirige(vMov,mVetor);
	percorre(pav,vMov);
	return 0;
}