#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct horario{
    int horas, minutos, segundos;
};

struct data{
    int dia, mes, ano;
};

struct compromisso{
    struct data estaData;
    struct horario esteHorario;
    char descricao[100];
};
