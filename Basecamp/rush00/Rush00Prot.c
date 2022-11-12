#import <stdio.h>

void	main(){

    int width;
    int row;
    int x;
    int y;

    x = 5;
    y = 4;

    width = 0;
    row = 0;

    while (width <= x)
        {
            while (row <= y)
            {
                if ((row == 0 || row == y-1) && (width == 0))
                {
                    printf('/');
                }
                else if ((row == 0 || row == y - 1) && (width == x - 1))
                {
                    printf('\\');
                }
                else if ((row > 0 && row < y -1) && (width > 0 && width < x - 1))
                {
                    printf(' ');
                }
                else
                {
                    printf('*');
                }
            row++;
            }
            width++;
        }
}

