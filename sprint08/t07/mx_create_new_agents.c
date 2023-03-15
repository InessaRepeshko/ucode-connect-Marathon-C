#include "create_new_agents.h"

t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count) {
    if ((void **) name == NULL
        || !(char **) name
        || !(int *) power
        || !(int *) strength
        || !(int) count
        || count < 0
        || count > 2147483647) {
        return NULL;
    }
    
    t_agent **agents = (t_agent **) malloc(sizeof(t_agent *) * count + 1);
    
    for (int i = 0; i < count; i++) {
        agents[i] = mx_create_agent(name[i], power[i], strength[i]);
    }
    
    agents[count] = NULL;
    
    return agents;
}

