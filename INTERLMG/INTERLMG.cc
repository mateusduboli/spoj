#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;
int ITERATION = 0;

struct Cidade {
	double x;
	double y;
};

vector<Cidade> * lerCidadesDaTela() {
	int nCidades = -1;
	vector<Cidade> * cidades;

	cin >> nCidades;

	if (nCidades == 0) {
		return 0;
	}

	cidades = new vector<Cidade>;

	for(int i = 0; i < nCidades; i++) {
		Cidade cidade;
		cin >> cidade.x >> cidade.y;
		cidades->push_back(cidade);
	}

	return cidades;
}

double distancia(const Cidade * c1, const Cidade * c2) {
	return sqrt(pow(c1->x - c2->x, 2) + pow(c1->y - c2->y, 2));
}

double distanciaMinima(const vector<Cidade> * cidades) {
	int nCidades = cidades->size();
	double minimoGlobal = 0;
	for (int i = 1; i < nCidades; i++) {
		Cidade referencia = cidades->at(i);
		double maximoLocal = 0.0;
		cerr << i << " x (";
		bool entrou = false;
		for (int k = 0; k < i; k++) {
			// entrou = true;
			Cidade comparacao = cidades->at(k);
			double maximoCandidato = distancia(&referencia, &comparacao);
			if (maximoCandidato > maximoLocal) {
				maximoLocal = maximoCandidato;
			}
			cerr << k << " ";
		}
		if(entrou) {
			cerr << "\b";
		}
		cerr << "): " << maximoLocal << endl;
		if (minimoGlobal == 0 || maximoLocal < minimoGlobal) {
			minimoGlobal = maximoLocal;
		}
	}
	return minimoGlobal;
}

int main(int argc, const char * argv[])
{
	vector<Cidade> * cidades;
	while(cin) {
		cidades = lerCidadesDaTela();
		if(cidades) {
			cerr << "Iteration : " << ITERATION++ << endl;
			double d = distanciaMinima(cidades);
			cout << fixed;
			cout << setprecision(4) << d << endl;
			delete cidades;
		} else {
			break;
		}
	}
	return 0;
}
