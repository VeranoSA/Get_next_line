/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 12:14:50 by tseanego          #+#    #+#             */
/*   Updated: 2019/06/28 18:39:49 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** We creating a function that returns a line ending in a new line that
** was read from a file descriptor.
** Fd is used to read.
** Line is an address of a pointer that will be used to save the line read
** from the file descriptor.
** It will return 1 if the line has been read, 0 when the reading has
** been read -1 for an error.
** Calling get_next_line in a loop will allow you to read the text available
** on a fd one line at a time until the end(no matter the size of text/line.
** 1) Thats the normal array
** 2) Buffer is same as C with a different value it goes to the header file
** file and add whatever value with +1
** 3) Temporary variable thats going to be used to store info.
** 4) How many bytes you have read
** 5) It holds the position of new line characters.
** 6) If the fd value is invalid or allocation fails or the line variable is
** empty return (-1).
** 7) Passing the strchr with whatever its in C string and looking for a new
** line in that string. Setting the b value to be the amount of bytes read
** and checking to see if be is bigger than 0.
** 8) Adding a null terminato to the end of the buffer.
** 9) Setting tmp to be the same as C string.
** 10) C string get reallocated to whatever thats in the buffer added to
** the end of whatever its in C string.
** 11) Free the tmp variable (To prevent memory leaks) (It goes to the
** address of the variable.
** 12) If b==-1 means it failed to read or tmp is not = fd u fail to read.
** 13) return -1 if fail to read 0 if you read everything.
** 14) Does the same as line till fuul stop.
** 15) It takes the line variable and allocate line variable to whatever
** strsub returns - C string size so we dont over allocate memory.
** 16) Takes the line variable and sets it to be the same as c string.
** 17) It subtracts the size of line variable from the size of my c string
** used usigned int so it can hold small or big number.
** 18) Make size of C string zero because size_t cant be negetive.
** 19) Free tmp variable again.
** 20) Return either 1 or 0 (if both values positive or 0 or they exists)
** Stackoverflow: when you change the constant macro BUFF_SIZE to 10000000
** the stack memory overflows because expressing 10000000 in binary
** uses more memory than can be allocated from the stack so the computer
** tries to use other memory and touches memory it's not allowed to
** leading to a segmentation fault.
*/

// Library includes for main
 #include <fcntl.h>
 #include <stdio.h>
 #include <string.h>

#include "libft/libft.h"
#include "get_next_line.h"

int	get_next_line(const int fd, char **line)
{
	static char	*c[2000];
	char		buffer[BUFF_SIZE + 1];
	char		*tmp;
	ssize_t		b;
	int			endl;

	if (fd < 0 || (!c[fd] && !(c[fd] = ft_strnew(1))) || !line)
		return (-1);
	while (!ft_strchr(c[fd], '\n') && ((b = read(fd, buffer, BUFF_SIZE)) > 0))
	{
		buffer[b] = '\0';
		tmp = c[fd];
		c[fd] = ft_strjoin(c[fd], buffer);
		ft_strdel(&tmp);
	}
	if (b == -1 || !*(tmp = c[fd]))
		return (b == -1 ? -1 : 0);
	if ((endl = (ft_strchr(c[fd], '\n') > 0)))
		*line = ft_strsub(c[fd], 0, ft_strchr(c[fd], '\n') - c[fd]);
	else
		*line = ft_strdup(c[fd]);
	c[fd] = ft_strsub(c[fd], (unsigned int)(ft_strlen(*line) + endl),
			(size_t)(ft_strlen(c[fd]) - (ft_strlen(*line) + endl)));
	ft_strdel(&tmp);
	return (!(!c[fd] && !ft_strlen(*line)));
}
/*
int		main(int argc, char **argv)
 {
 int		fd;
 char	*line;

 if (argc == 1)
 fd = 0;
 else if (argc == 2)
 fd = open(argv[1], O_RDONLY);
 else
 return (2);
 get_next_line(fd, &line);
 ft_putendl(line);
 while (get_next_line(fd, &line) == 1)
 {
 ft_putendl(line);
 free(line);
 }
 if (argc == 2)
 close(fd);
 }
*/
/*
** to test, run:
** gcc -Wall -Wextra -Werror get_next_line.c libft/ft_putendl.c
** libft/ft_putendl_fd.c libft/ft_putchar.c libft/ft_putchar_fd.c
** libft/ft_putstr_fd.c libft/ft_strchr.c libft/ft_strdel.c
** libft/ft_memdel.c libft/ft_strdup.c libft/ft_strcpy.c
** libft/ft_strjoin.c libft/ft_strlen.c libft/ft_strnew.c
** libft/ft_memalloc.c libft/ft_bzero.c libft/ft_strcat.c
** libft/ft_strncat.c libft/ft_strsub.c libft/ft_strncpy.c
*/
