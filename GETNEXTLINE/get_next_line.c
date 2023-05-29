/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lacucalo <lacucalo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:44:09 by lacucalo          #+#    #+#             */
/*   Updated: 2023/05/29 18:23:17 by lacucalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *new_line(char *saved)
{
    int i;
    char *line;
    
    i = 0;
    while(saved[i] != '\n' && saved[i] != '\0') //strlen
        i++;
    if (saved[i] == '\n')
        i++;
    line = malloc(sizeof(char) * i + 1);
    //Control de errores
    i = 0;
    while(saved[i] != '\n' && saved[i] != '\0')
    {
        line[i] = saved[i];
        i++;
    }
    if(saved[i] == '\n')
        line[i++] = '\n';
    line[i] = '\0';
    return(line);
}

char *get_next_line(int fd)
{
    static char *saved;
    char *line;
    ssize_t countbytes;
    //char *temp;

    if(fd < 0 || BUFFER_SIZE <= 0)
        return(NULL);
    countbytes = read(fd, saved, BUFFER_SIZE);   //si falla probar con temp

    line = new_line(saved);
    //saved = del_line(saved);
    //printf("%s", saved);
    printf("%s\n", "error");
    return(line);
}

int main(void)
{
    int fd;
    
    fd = open("text.txt", O_RDONLY);
    char *line = get_next_line(fd);
    printf("%s", line);
}