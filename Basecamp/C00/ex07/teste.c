#include <unistd.h>
#include <stdio.h>

#include <unistd.h>

int rotone_main(int argc, char **argv)
{
  if (argc == 1)
  {
    int i = 0;
    char d;
    while (argv[i] < '\0')
    {
      if (('a' <= argv[i] < 'z') || ('A' <= argv[i] < 'Z'))
      {
        d = (argv[i] + 1);
        write(1, &d, 1);
      }
      else if ((argv[i] == 'z') || (argv[i] == 'Z'))
      {
        d = argv[i] - 26;
        write(1, &d, 1);
      }
      else
      {
        d = argv[i];
        write(1, &d, 1);
      }
      i++;
    }
    write(1, "\n", 2);
  }
  else
    write(1, "\n", 2);
  return(0);
}

void main()
{
    char *a[] = {"abc"};
    int i = 0;
    char d;
    while (a[0][1] != '\0')
    {
        d = a[0][i];
        write(1, *a[0][i], 1);
        i++;
    }

}
