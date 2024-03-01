#include "testeLibrary.h"

// Uma empresa decidiu fazer um levantamento em rela��o aos candidatos que se
// apresentarem para preenchimento de vagas no seu quadro de funcion�rios. Supondo
// que voc� seja o programador dessa empresa, criar um algoritmo que leia para cada
// candidato a idade, o sexo (M ou F) e a experi�ncia no servi�o (S ou N). Para encerrar a
// entrada de dados, digite zero para a idade. Calcule e escreva: o n�mero de candidatos
// do sexo feminino; o n�mero de candidatos do sexo masculino; m a idade m�dia dos
// homens que j� t�m experi�ncia no servi�o; a porcentagem dos homens com mais de
// 45 anos entre o total dos homens; o n�mero de mulheres com idade inferior a 35 anos
// e com experi�ncia no servi�o; a menor idade entre as mulheres que j� t�m experi�ncia
// no servi�o.

struct candidato {
    int idade;
    string sexo, experiencia_serv;
};

void Menu_Candidato ()
{
    cout << "1 - Cadastrar candidato" << endl;
    cout << "2 - Sair." << endl;
    cout << "> ";
}

void Limpa ()
{
    cout << "\n";
    system ("pause");
    system ("CLS");
    cout << "\n";
}

int main ()
{
    int j = 0, Op  = 0, Op_2; 
    // contador de candidatos femininos
    int cont_f = 0; 
    // contador de candidatos masculinos
    int cont_m = 0; 
    // contador geral de pessoas
    int cont_geral = 0; 
    // variaveis de porcentagem dos homens acima dos 45
    int porcen_m_45, contador_m_45 = 0; 
    // contador de mulheres abaixo dos 35 com experiencia
    int cont_f_35_experiencia = 0;
    // m�dia e contador dos homens com experiencia
    double media_m_experiencia, cont_m_experiencia = 0;
    // varivel que mostra entre as mulheres que j� t�m experi�ncia com a menor idade
    int menor_idade_f_e = 0;
    candidato cadastro[40];

    setlocale (LC_CTYPE, "PORTUGUESE");

    // Informa quanto candidatos cadastrar
    cout << "Quantos voc� quer cadastrar: ";
    cin >> j;

    Menu_Candidato();
    cin >> Op;
    Limpa();
    
    if(Op == 1){
    for (int i = 0; i < j; i++){
        do {
                cout << "Informe a idade: ";
                cin >> cadastro[j].idade;
                cin.ignore();
                cout << "Informe o sexo F/M: ";
                getline( cin, cadastro[j].sexo);
                cout << "Informe se a experiencia ou n�o S/N: ";
                getline( cin, cadastro[j].experiencia_serv);  
                menor_idade_f_e = cadastro[j].idade; 
                cont_geral++;
                Limpa();
                
        
                if (cadastro[j].sexo == "F")
                {
                    cont_f ++;
                } else 
                    if (cadastro[j].sexo == "M") 
                    {
                        cont_m++;
                    }   

                if ((cadastro[j].sexo == "M") && (cadastro[j].idade > 45))
                {
                    contador_m_45++;
                }

                if ((cadastro[j].sexo == "F") && (cadastro[j].idade < 35) && (cadastro[j].experiencia_serv == "S"))
                {
                    cont_f_35_experiencia++;
                }

                if ((cadastro[j].sexo == "M") && (cadastro[j].experiencia_serv == "S"))
                {
                    cont_m_experiencia++;
                }
                
                if ((cadastro[j].sexo == "F") && (cadastro[j].experiencia_serv == "S"))
                {
                    if (cadastro[j].idade < menor_idade_f_e)
                    {
                        menor_idade_f_e = cadastro[j].idade;
                    }
                    
                }
                cout << "Voc� deseja continuar? 1.sim || 0.n�o: " << endl;
                cin >> cadastro[j].idade;
            if(cadastro[j].idade == 1){
                j++; 
            }else if(cadastro[j].idade == 0)
                cadastro[j].idade = 0;
            
            }while (cadastro[j].idade != 0);

            Menu_Candidato();
            cin >> Op;
            Limpa();
    }    
    } else 

    // Impress�o do cadastro dos candidatos
    for (int i = 0; i < j; i++)
    {    
        cout << "============================" << endl;
        cout << "Idade da " << i  << "� pessoa: " << cadastro[i].idade << endl;
        cout << "Sexo da " << i  << "� pessoa: " << cadastro[i].sexo << endl;
        cout << "A " << i  << "� pessoa possui experiencia? "  << cadastro[i].experiencia_serv << endl;
        cout << "============================" << endl;
    }
    
    Limpa();

    // Impress�o do contador feminino e masculino e gereal dos candidatos
    cout << "Foram registrados = " << cont_m << " homens no quadro de registro." << endl;
    cout << "Foram registrados = " << cont_f << " mulheres no quadro de registro." << endl;
    cout << "Foram registrados = " << cont_geral << " pessoas no quadro de registro. " << endl;

    Limpa();

    // calculo de porcentagem dos homens acima dos 45
    porcen_m_45 = contador_m_45 * 100/cont_geral;

    // Impress�o dos homens acima dos 45
    cout << porcen_m_45 << " % dos homens s�o acima dos 45. " << endl;

    Limpa();

    // Impress�o das mulheres abaixo dos 35 com experiencia
    cout << "Mulheres abaixo de 35 com experiencia = " << cont_f_35_experiencia << endl;

    Limpa();

    // calculo da m�dia dos homens com experiencia
    media_m_experiencia = cont_m_experiencia/cont_geral;

    // Impress�o da m�dia dos homens com experiencia
    cout << "A m�dia dos homens com experiencia = " << media_m_experiencia << endl;

    Limpa();

    // Impress�o que a menor idade das mulheres que j� possuem experiencia
    cout << "A menor idade das mulheres que possuem experiencia = " << menor_idade_f_e << endl;

    Limpa();

    return 0;


}