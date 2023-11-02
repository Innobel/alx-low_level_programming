/**
* is_space - Checks if a character is a whitespace character.
* @c: The character to check.
*
* Return: 1 if the character is a whitespace character, 0 otherwise.
*/
int is_space(char c) {
return (c == ' ' || c == '\t' || c == '\n');
}

/**
* count_words - Counts the number of words in a string.
* @str: The input string.
*
* Return: The number of words in the string.
*/
int count_words(char *str) {
int count = 0;
int is_word = 0;

while (*str) {
if (is_space(*str)) {
is_word = 0;
} else if (!is_word) {
is_word = 1;
count++;
}
str++;
}

return count;
}

/**
* strtow - Splits a string into words.
* @str: The string to be split.
*
* Description:
* This function splits a given string into words, where words are
* separated by spaces. It allocates memory dynamically for each word
* and returns an array of strings (words). The last element of the array
* is NULL. If the input string is NULL or an empty string, or if memory
* allocation fails, the function returns NULL.
*
* Returns:
* A pointer to an array of strings containing the words, or NULL if the function fails.
*/
char **strtow(char *str) {
if (str == NULL || *str == '\0') {
return NULL;
}

int num_words = count_words(str);

char **words = (char **)malloc((num_words + 1) * sizeof(char *));
if (words == NULL) {
return NULL;
}

int word_count = 0;
int word_length = 0;

while (*str) {
if (is_space(*str)) {
if (word_length > 0) {
words[word_count] = (char *)malloc((word_length + 1) * sizeof(char));
if (words[word_count] == NULL) {
// Memory allocation failed; clean up and return NULL
for (int i = 0; i < word_count; i++) {
free(words[i]);
}
free(words);
return NULL;
}
word_count++;
word_length = 0;
}
} else {
word_length++;
if (word_length == 1 || (word_length > 1 && is_space(*(str - 1)))) {
// Start of a new word; allocate space for it
words[word_count] = (char *)malloc((word_length + 1) * sizeof(char));
if (words[word_count] == NULL) {
// Memory allocation failed; clean up and return NULL
for (int i = 0; i < word_count; i++) {
free(words[i]);
}
free(words);
return NULL;
}
}
words[word_count][word_length - 1] = *str;
}
str++;
}

if (word_length > 0) {
// Handle the last word
words[word_count] = (char *)malloc((word_length + 1) * sizeof(char));
if (words[word_count] == NULL) {
// Memory allocation failed; clean up and return NULL
for (int i = 0; i <= word_count; i++) {
free(words[i]);
}
free(words);
return NULL;
}
word_count++;
}

// Terminate the array with NULL
words[word_count] = NULL;

return words;
}

