// Yannique Hecht
// HARVARD CS50 Week 4 - Recover - Implement a program that recovers JPEGs from a forensic image on a memory card

// PSEUDO CODE
// 1. Open memory card
// -->  FILE *f = fopen(filename, "r");
// 2. Repeat until end of card
//    Read 512 bytes into a buffer
//    --> Read files: fread(ata,size, number, inptr);
//    --> where... data = ointer to whereto store read data, size = size of each element to read, number = number of elements to read, inptr = FILE *to read from
//    --> Buffer Bitwise Arithmetic --> (buffer[3] & 0xe0) == 0xe0
//    If start of new JPEG
//    --> Look for beginning of a JPEG --> 1st byte = 0xff, 2nd byte = 0xd8, 3rd byte = 0xff, 4th byte = 0xe...
//     If first JPEG
//     --> Start writing
//     --> ###.jpg --> sprintf(filename, "%03i.jpg",2);
//     --> FILE *img = fopen(filename, "w");
//     --> fwrite(data, size, number, outptr);
//     Else
//      If already found JPEG
//       Keep writing
//      --> Last byte = 0xe0, 0xe1, 0xe2, ..., 0exf
// 3. Close remaining files


// include libarries
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // check if commandline entry is correct and file name specified
    if (argc != 2)
    {
        fprintf(stderr, "Usage: ./recover image\n");
        return 1;
    }

    // 1. open memory card & display error message if not opening properly
    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        fprintf(stderr, "Unable to open file %s.\n", argv[1]);
        return 1;
    }

    //create vars and allocate memory
    FILE *img;
    char filename[7];
    // use of malloc
    unsigned char *bf = malloc(512);
    int end = 1000;
    int counter = 0;

    while (fread(bf, 512, 1, file))
    {
        // if new JPEG found...
        if (bf[0] == 0xff && bf[1] == 0xd8 && bf[2] == 0xff && (bf[3] & 0xf0) == 0xe0)
        {
            // close previous JPEG if it exists
            if (counter > 0)
            {
                fclose(img);
            }

            // specify filename
            sprintf(filename, "%03d.jpg", counter);
            // open new image file
            img = fopen(filename, "w");

            // check if JPEG created successfully
            if (img == NULL)
            {
                fclose(file);
                free(bf);
                fprintf(stderr, "Could not create JPEG %s", filename);
                return 3;
            }

            counter++;
        }

        // if any JPEG exists writes on currently opened file
        if (counter > 0)
        {
            fwrite(bf, 512, 1, img);
        }
    }

    // close all files
    fclose(img);
    fclose(file);

    // free Memory
    free(bf);
    return 0;
}