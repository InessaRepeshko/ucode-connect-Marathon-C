#include "only_smiths.h"

t_agent **mx_only_smiths(t_agent **agents, int strength) {
    if (*agents == NULL) {
        return NULL;
    }
    
    int capacity = 0;
    
    for (int i = 0; agents[i] != NULL; i++) {
        if (mx_strcmp(agents[i]->name, "Smith") == 0
            && agents[i]->strength < strength) {
            capacity++;
        }
    }
    
    t_agent **smiths = (t_agent **) malloc(sizeof(t_agent *) * capacity + 1);
    capacity = 0;
    
    for (int i = 0; agents[i] != NULL; i++) {
        if (mx_strcmp(agents[i]->name, "Smith") == 0
            && agents[i]->strength < strength) {
            smiths[capacity] = mx_create_agent(agents[i]->name,
                                               agents[i]->power,
                                               agents[i]->strength);
            capacity++;
        }
    }
    
    smiths[capacity] = NULL;
    
    mx_exterminate_agents(&agents);
    
    return smiths;
}

