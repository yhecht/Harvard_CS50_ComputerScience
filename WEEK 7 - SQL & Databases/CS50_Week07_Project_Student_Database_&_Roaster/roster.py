# Yannique Hecht
# HARVARD CS50 Week 7 - Houses - Implement a program to import student data into a database, and then produce class rosters


# In roster.py, write a program that prints a list of students for a given house in alphabetical order.
    # Your program should accept the name of a house as a command-line argument.
    # If the incorrect number of command-line arguments are provided, your program should print an error and exit.
    # Your program should query the students table in the students.db database for all of the students in the specified house.
    # Your program should then print out each student’s full name and birth year (formatted as, e.g., Harry James Potter, born 1980 or Luna Lovegood, born 1981).
    # Each student should be printed on their own line.
    # Students should be ordered by last name. For students with the same last name, they should be ordered by first name.


from cs50 import SQL
from sys import argv

# check for correct usage in commandline, else return error message
if len(argv) < 2:
    print("Usage: roster.py housename")
    exit()

# open database in variable
db = SQL("sqlite:///students.db")

# execute query listing all students of a specified house ordered alphabetically
students = db.execute("SELECT * FROM students WHERE house = (?) ORDER BY last", argv[1])

# for each student with middle name, print middle name
for student in students:
    if student['middle'] != None:
        print(f"{student['first']} {student['middle']} {student['last']}, born {student['birth']}")
    else:
        print(f"{student['first']} {student['last']}, born {student['birth']}")