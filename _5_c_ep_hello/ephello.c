
#include <stdio.h>
#include <EnergyPlus/api/state.h>

extern void hello_world(void);

void hello_world(void)
{
        EnergyPlusState state = stateNew();
        stateReset(state);
        stateDelete(state);
        printf("Hello WRF from energyplus!\n");
}
