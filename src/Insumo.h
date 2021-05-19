#ifndef INSUMO_H
#define INSUMO_H

#include <string>

#define VACINA 1
#define MEDICAMENTO 2
#define EPI 3

class Insumo  
{
	protected:
		std::string nome;
		int quantidade;
		float valorUnit;
		std::string dtVencimento;
		std::string nomeFabricante;
		int tipoInsumo;
	
	public:
		
		int getTipoInsumo();
		std::string getNome();
		int getQuantidade();
		float getValorUnit();
		std::string getDtVencimento();
		std::string getNomeFabricante();
		virtual std::string getDescricao();
	
		Insumo();
		~Insumo();

};
#endif