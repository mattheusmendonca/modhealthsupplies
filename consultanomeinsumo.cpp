#include "consultanomeinsumo.h"
#include "ui_consultanomeinsumo.h"
#include <QPixmap>

consultanomeinsumo::consultanomeinsumo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::consultanomeinsumo)
{
    setWindowTitle("Distribuição");
    ui->setupUi(this);
    QPixmap pix(":/src/src/white.png");
    ui->label_7->setPixmap((pix.scaled(900,800,Qt::KeepAspectRatio)));
}

int consultanomeinsumo::getQuantidade(){
    return quantidade;
}

int consultanomeinsumo::getTipodoLocal(){
    return local;
}

std::string consultanomeinsumo::getNome(){
    return nome;
}

void consultanomeinsumo::on_buttonBox_accepted()
{
    std::string local;
    int tipo = -1;
    local = ui->comboBox->currentText().toStdString();
    if(local=="Ministério da Saúde"){
        tipo = 0;
    }
    if(local=="Acre"){
        tipo = 1;
    }
    if(local=="Alagoas"){
        tipo = 2;
    }
    if(local=="Amapá"){
        tipo = 3;
    }
    if(local=="Amazonas"){
        tipo = 4;
    }
    if(local=="Bahia"){
        tipo = 5;
    }
    if(local=="Ceará"){
        tipo = 6;
    }
    if(local=="Distrito Federal"){
        tipo = 7;
    }
    if(local=="Espírito Santo"){
        tipo = 8;
    }
    if(local=="Goiás"){
        tipo = 9;
    }
    if(local=="Maranhão"){
        tipo = 10;
    }
    if(local=="Mato Grosso"){
        tipo = 11;
    }
    if(local=="Mato Grosso do Sul"){
        tipo = 12;
    }
    if(local=="Minas Gerais"){
        tipo = 12;
    }
    if(local=="Pará"){
        tipo = 14;
    }
    if(local=="Paraíba"){
        tipo = 15;
    }
    if(local=="Paraná"){
        tipo = 16;
    }
    if(local=="Pernambuco"){
        tipo = 17;
    }
    if(local=="Piauí"){
        tipo = 18;
    }
    if(local=="Rio de Janeiro"){
        tipo = 19;
    }
    if(local=="Rio Grande do Norte"){
        tipo = 20;
    }
    if(local=="Rio Grande do Sul"){
        tipo = 21;
    }
    if(local=="Rondônia"){
        tipo = 22;
    }
    if(local=="Roraima"){
        tipo = 23;
    }
    if(local=="Santa Catarina"){
        tipo = 24;
    }
    if(local=="São Paulo"){
        tipo = 25;
    }
    if(local=="Sergipe"){
        tipo = 26;
    }
    if(local=="Tocantins"){
        tipo = 27;
    }
    this->local = tipo;

    int qtde;
    qtde = ui->quantidade1->text().toInt();
    this->quantidade = qtde;

    std::string nom;
    nom = ui->nome1->text().toStdString();
    this->nome = nom;
    close();
}

consultanomeinsumo::~consultanomeinsumo()
{
    delete ui;
}
