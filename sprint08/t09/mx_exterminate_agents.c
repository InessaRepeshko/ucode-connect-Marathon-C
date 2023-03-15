#include "only_smiths.h"

void mx_exterminate_agents(t_agent ***agents) {
    if (*agents == NULL) {
        return;
    }
    
    t_agent **agents_array = *agents;
    
    for (int i = 0; agents_array[i] != NULL; i++) {
        free(agents_array[i]->name);
        agents_array[i]->name = NULL;
        free(agents_array[i]);
        agents_array[i] = NULL;
    }
    
    free(agents_array);
    *agents = NULL;
    return;
}

