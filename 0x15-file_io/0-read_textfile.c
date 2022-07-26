#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output 
 * @filename: constant string
 * @letters: number of letters to raed and print
 * Return: number of letters to print
 *         0 if file cannot open
 *         0 if filename is NULL
 *         0 if write fails and doesn't write the expected amount of bytes
 */
 ssize_t read_textfile(const char *filename, size_t letters)
 {
	 ssize_t ptr, r, w;
         char *buffer;
         
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
