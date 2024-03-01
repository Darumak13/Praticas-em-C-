#include "testeLibrary.h"

// Uma empresa decidiu fazer um levantamento em relação aos candidatos que se
// apresentarem para preenchimento de vagas no seu quadro de funcionários. Supondo
// que você seja o programador dessa empresa, criar um algoritmo que leia para cada
// candidato a idade, o sexo (M ou F) e a experiência no serviço (S ou N). Para encerrar a
// entrada de dados, digite zero para a idade. Calcule e escreva: o número de candidatos
// do sexo feminino; o número de candidatos do sexo masculino; m a idade média dos
// homens que já têm experiência no serviço; a porcentagem dos homens com mais de
// 45 anos entre o total dos homens; o número de mulheres com idade inferior a 35 anos
// e com experiência no serviço; a menor idade entre as mulheres que já têm experiência
// no serviço.

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
    // média e contador dos homens com experiencia
    double media_m_experiencia, cont_m_experiencia = 0;
    // varivel que mostra entre as mulheres que já têm experiência com a menor idade
    int menor_idade_f_e = 0;
    candidato cadastro[40];

    setlocale (LC_CTYPE, "PORTUGUESE");

    // Informa quanto candidatos cadastrar
    cout << "Quantos você quer cadastrar: ";
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
                cout << "Informe se a experiencia ou não S/N: ";
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
                cout << "Você deseja continuar? 1.sim || 0.não: " << endl;
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

    // Impressão do cadastro dos candidatos
    for (int i = 0; i < j; i++)
    {    
        cout << "============================" << endl;
        cout << "Idade da " << i  << "° pessoa: " << cadastro[i].idade << endl;
        cout << "Sexo da " << i  << "° pessoa: " << cadastro[i].sexo << endl;
        cout << "A " << i  << "° pessoa possui experiencia? "  << cadastro[i].experiencia_serv << endl;
        cout << "============================" << endl;
    }
    
    Limpa();

    // Impressão do contador feminino e masculino e gereal dos candidatos
    cout << "Foram registrados = " << cont_m << " homens no quadro de registro." << endl;
    cout << "Foram registrados = " << cont_f << " mulheres no quadro de registro." << endl;
    cout << "Foram registrados = " << cont_geral << " pessoas no quadro de registro. " << endl;

    Limpa();

    // calculo de porcentagem dos homens acima dos 45
    porcen_m_45 = contador_m_45 * 100/cont_geral;

    // Impressão dos homens acima dos 45
    cout << porcen_m_45 << " % dos homens são acima dos 45. " << endl;

    Limpa();

    // Impressão das mulheres abaixo dos 35 com experiencia
    cout << "Mulheres abaixo de 35 com experiencia = " << cont_f_35_experiencia << endl;

    Limpa();

    // calculo da média dos homens com experiencia
    media_m_experiencia = cont_m_experiencia/cont_geral;

    // Impressão da média dos homens com experiencia
    cout << "A média dos homens com experiencia = " << media_m_experiencia << endl;

    Limpa();

    // Impressão que a menor idade das mulheres que já possuem experiencia
    cout << "A menor idade das mulheres que possuem experiencia = " << menor_idade_f_e << endl;

    Limpa();

    return 0;


}