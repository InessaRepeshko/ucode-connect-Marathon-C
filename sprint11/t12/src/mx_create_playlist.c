#include "../inc/list.h"

t_list *mx_create_playlist(char *filename) {
    t_list *list = NULL;
    char *string = mx_file_to_str(filename);
    
    if (string == NULL){
        mx_printerr("ERROR\n");
        
        return list;
    }
    
    char **songs = mx_strsplit(string, '\n');
    
    for (int i = 0; songs[i] != NULL ; ++i) {
        char **buffer = mx_strsplit(songs[i], ',');
        t_song *song = malloc(sizeof(t_song));
        song->artist = buffer[0];
        song->name = buffer[1];
        mx_push_back(&list, (void *)song);
    }

    free(string);
    string = NULL;
    
    return list;
}

