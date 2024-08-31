#include <stdio.h>

int main() {
    double fatMensalSP = 67836.43;
    double fatMensalRJ = 36678.66;
    double fatMensalMG = 29229.88;
    double fatMensalES = 27165.48;
    double fatMensalOutros = 19849.53;
    double fatMensalDistribuidora = fatMensalES + fatMensalMG + fatMensalOutros + fatMensalRJ + fatMensalSP;
    printf("O percentual de representacao de SP %.2f % \n", (fatMensalSP/fatMensalDistribuidora)*100.00);
    printf("O percentual de representacao de RJ %.2f % \n", (fatMensalRJ/fatMensalDistribuidora)*100.00);
    printf("O percentual de representacao de MG %.2f % \n", (fatMensalMG/fatMensalDistribuidora)*100.00);
    printf("O percentual de representacao de ES %.2f % \n", (fatMensalES/fatMensalDistribuidora)*100.00);
    printf("O percentual de representacao de Outros %.2f % \n", (fatMensalOutros/fatMensalDistribuidora)*100.00);
    return 0;
}
