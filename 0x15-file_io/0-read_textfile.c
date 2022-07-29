#include "main.h"
/**
 * read_textfile - Read a text file and print to POSIX stdout
 * @filename: char string of files name
 * @letters: number of letters to read and print
 * Return: number of letters read and printed, or 0 if error
 */
 ssize_t read_textfile(const char *filename, size_t letters)
 {
	 ssize_t ptr, r, w;
         char *buffer;
         /*comments*/
         if (filename == NULL)
		 return (0);
         buffer = malloc(sizeof(char) * letters);
         if (buffer == NULL)
		 return (0);
         ptr = open(filename, O_RDONLY);
         r = read(ptr, buffer, letters);
         w = write(STDOUT_FILENO, buffer, r);
         if (ptr == -1 || r == -1 || w == -1 || w != r)
         {
		 free(buffer);
		 return (0);
         }
         free(buffer);
         close(ptr);
         return (w);
}
