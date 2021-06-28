#include <iostream>

using namespace std;

int main()
{
    float valor, pessoas1, clicam, compart, visuali;
    
    cout << "Informe o valor investido: ";
    cin >> valor;
    
    // A cada RS1,00 investido 30 pessoas visualizam o anúncio original:
    float x = ((valor / valor) * 30);
    pessoas1 = x * valor;
    /*Teste unitário:*/ cout << "A quantidade de pessoas atingidas foi: " << pessoas1 << endl;
    
    // A cada 100 pessoas que visualizam o anúncio 12 clicam nele:
    clicam = ((pessoas1 / 100) * 12);
    /*Teste unitário 2:*/ cout << "Clicaram no anúncio: " << clicam << endl;
    
    // A cada 20 pessoas que clicam no anúncio, 3 compartilham nas redes sociais:
    compart = ((clicam / 20) * 3);
    /*Teste unitário 3:*/ cout << "Compartilham nas redes sociais: " << compart << endl;
    
    // Cada compartilhamento nas redes sociais gera 40 novas visualizações:
    visuali = (compart * 40);
    /*Teste unitário4:*/ cout << "Cada compartilhamento gera 40 novas visualizações: " << visuali << endl;
    
    // Total de visualização do anúncio original:
    float tot1 = pessoas1 + visuali;
    cout << "Total de pessoas que visualizaram o anúncio original: " << tot1 << endl;
    
    
    /*O mesmo anúncio é compartilhado no máximo 4x em sequência.
    Tendo o resultado de views da primeira onda de compartilhamentos, vamos as outras 3:*/
    float tot2[3];
    for(int pos = 0; pos < 3; pos++)
    {
        cout << endl << pos+2 << "º compartilhamento: " << endl;
        clicam = ((visuali / 100) * 12);
        cout << "Clicam: " << clicam << endl;
        compart = ((clicam / 20) * 3);
        cout << "Compartilham: " << compart << endl;
        visuali = (compart * 40);
        cout << "Visualizam: " << visuali << endl;
        
        tot2[pos] = visuali;
    }
    
    /* Receba o valor investido em R$ e retorne uma projeção aproximada da quantidade máxima de pessoas 
    que visualizarão o mesmo anúncio: anúncio original + os compartilhamentos:*/
    double resFinal = tot1 + tot2[0] + tot2[1] + tot2[2];
    cout << endl << "Projeção aproximada da quantidade máxima de pessoas que visualizarão o mesmo anúncio: " << resFinal;
    
    
    return 0;
}