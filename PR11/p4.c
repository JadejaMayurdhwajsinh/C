#include <stdio.h>
#include <stdlib.h>

const char *day_name(int n)
{

    static const char *days[] = {"Invalid","Monday","Tuesday",
         "Wednesday","Thursday","Friday","Saturday","Sunday"};

    if (n < 1 || n > 7)
    {
        return days[0]; 
    }
    return days[n];
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s <day1> <day2> ... <dayN>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen("days.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file to write.\n");
        return 1;
    }

    for (int i = 1; i < argc; i++)
    {
        int day = atoi(argv[i]);                     
        const char *day_str = day_name(day);         
        fprintf(file, "Day %d: %s\n", day, day_str);
    }
    fclose(file);
    printf("days written in file\n");
    return 0;
}
