# Yannique Hecht
# HARVARD CS50 Week 6 - Hello - Implement a program that prints out a half-pyramid of a specified height


from cs50 import get_int


def main():
    while True:
        height = get_int("Height: ")
        width = height
        if height > 0 and height <= 8:
            break

    for i in range(1, height + 1):
        number_of_hashes = i
        number_of_spaces = width - number_of_hashes

        print(" " * number_of_spaces, end="")
        print("#" * number_of_hashes)


if __name__ == "__main__":
    main()