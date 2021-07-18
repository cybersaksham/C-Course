/*
You have to fill in values to a template letter.txt

Letter.txt looks like this :-
"Thanks {{name}} for purchasing {{item}} form our outlet {{outlet}}
Please visit our outlet {{outlet}} for any kind of problems. We plan to serve you again soon."

You have to read this file & replace these values:
{{name}} - Saksham
{{item}} - Table Fan
{{outlet}} - Ram Laxmi fan outlet

Use function of file to acomplish this
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replaceWord(const char *str, const char *oldWord, const char *newWord)
{
    char *resultString;
    int i, count = 0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);

    // Count times old word occur
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;

            // Jump over this word
            i = i + oldWordLength - 1;
        }
    }

    // Making a new string to fit in the replaced words
    resultString = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1);
    i = 0;
    while (*str)
    {
        // Compare the substring with result
        if (strstr(str, oldWord) == str)
        {
            strcpy(&resultString[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        }
        else
        {
            resultString[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resultString[i] = '\0';

    return resultString;
}

int main(int argc, char const *argv[])
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    ptr = fopen("ex-15_automated_receipt_generator_template.txt", "r");
    ptr2 = fopen("ex-15_automated_receipt_generator_template_output.txt", "w");
    char str[200];

    // Reading a file
    fgets(str, 200, ptr);
    printf("The given bill template was :-\n%s\n\n", str);

    char *newStr;
    newStr = replaceWord(str, "{{name}}", "Saksham");
    newStr = replaceWord(newStr, "{{item}}", "Table Fan");
    newStr = replaceWord(newStr, "{{outlet}}", "Ram Laxmi fan outlet");
    printf("The actual bill template generated is :-\n%s", newStr);
    fprintf(ptr2, "%s", newStr);

    fclose(ptr);
    fclose(ptr2);

    return 0;
}