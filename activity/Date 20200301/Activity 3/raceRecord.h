typedef struct RaceRecord TRaceRecord;
TRaceRecord *neww(int quantity);
float calculationAverage(TRaceRecord *raceRecord, int quantityForCalculation);
float biggerFrequency(TRaceRecord *raceRecord, int vector);
void findByType(TRaceRecord *raceRecord, int vector, int defineReturn);

