#include "main.h"
/**
 * append_textto_file - appends text at the end of a file 
 * @filename: name of the file to be created
 * @text_content: NULL terminated string to be add
 * Return: 1 on success and -1 on failure
 *         -1 if filename is NULL
 *          if file content is NULL add Nothing
 *          1 if the file exists and -1 if file doesnot
 */
 int append_text_to_file(const char *filename, char *text_content)
 {
    int ptr, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	ptr = open(filename, O_WRONLY | O_APPEND);
	w = write(ptr, text_content, len);

	if (ptr == -1 || w == -1)
		return (-1);

	close(ptr);

	return (1);
}
