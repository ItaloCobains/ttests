#include <stdio.h>
#include "libttests.h"

void itCallbackSucesso()
{
    expect(1 == 1, "1 == 1");
}

void itCallbackSucessoUmMaisUm()
{
    expect(1 + 1 == 2, "1 + 1 == 2");
}

void suiteSucesso()
{
    printf("myTest\n");
    it("Esperado 1 == 1", itCallbackSucesso);
    it("Esperado 1 + 1 = 2", itCallbackSucessoUmMaisUm);
}

void itCallbackFalha()
{
    expect(1 == 2, "1 == 2");
}

void itCallbackSucessoUmMaisUmIgualTres()
{
    expect(1 + 1 == 3, "1 + 1 == 3");
}

void suiteFalha()
{
    it("Esperado 1 == 2", itCallbackFalha);
    it("Esperado 1 + 1 = 3", itCallbackSucessoUmMaisUmIgualTres);
}

int main()
{
    describe("Suite de testes de sucesso", suiteSucesso);
    describe("Suite de testes de falha", suiteFalha);
    return 0;
}
