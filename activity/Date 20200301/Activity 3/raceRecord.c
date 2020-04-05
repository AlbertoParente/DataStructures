#include <stdio.h>
#include <stdlib.h>
#include "raceRecord.h"

struct RaceRecord {
    float frequency;
    float temperature;
    float elevation;
};

TRaceRecord *neww(int quantity) {
    TRaceRecord *raceRecord = (TRaceRecord *)malloc(quantity* sizeof(TRaceRecord));
    return raceRecord;
};

float calculationAverage(TRaceRecord *raceRecord, int quantityForCalculation) {
    int i; float sum = 0;
    for(i = 0; i < quantityForCalculation; i++) {
        sum = sum + raceRecord[i].frequency;
    }
    return sum / quantityForCalculation;
}

float biggerFrequency(TRaceRecord *raceRecord, int vector) {
    int i; float higherValue = 0;
    for(i = 0; i < vector; i++) {
        if(raceRecord[i].frequency > higherValue) {
            higherValue = raceRecord[i].frequency;
        }
    }
    return higherValue;
}

void findByType(TRaceRecord *raceRecord, int vector, int defineReturn) {
    int i;
    switch(defineReturn) {
        case 1:
            printf("Lista de FREQUENCIAS");
                for(i = 0; i < vector; i++) {
                    printf("\nFrequencia: %f", raceRecord[i].frequency);
        } break;
        case 2:
            printf("Lista de TEMPERATURAS");
                for(i = 0; i < vector; i++) {
            printf("\nTemperatura: %f", raceRecord[i].temperature);
        } break;
        case 3:
            printf("Lista de ELECACOES");
                for(i = 0; i < vector; i++) {
            printf("\nElevacao: %f", raceRecord[i].elevation);
        } break;
    }
}
