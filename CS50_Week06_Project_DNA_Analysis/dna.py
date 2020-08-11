# Yannique Hecht
# HARVARD CS50 Week 6 - DNA - Implement a program that identifies a person based on their DNA

# PSEUDO CODE
# Open CSV file & DNA sequence, read content into memory
# For each STR, compute longest run of consecutive repeats in the DNA sequence
# Compare STR ount against each row in CSV file
# If match, print out name of match, else print "no match"

from csv import reader, DictReader
from sys import argv

# check for 3 entries in command line
if len(argv) < 3:
    # return error message
    print("Usage Error: python dna.py database.csv sequences.txt")
    exit()

# open file and read dna sequence
with open(argv[2]) as dna_file:
    dna_reader = reader(dna_file)
    for row in dna_reader:
        dna_list = row

# store dna in string
dna = dna_list[0]

# create a dictionary to store sequences to count
sequences = {}

# extract sequences from database into list
with open(argv[1]) as suspects_file:
    suspects = reader(suspects_file)
    for row in suspects:
        dna_Sequences = row
        dna_Sequences.pop(0)
        break

# copy list in a dictionary with genes as keys
for item in dna_Sequences:
    sequences[item] = 1

# iterate trough complete dna sequence, count repetition of str strings
for key in sequences:
    l = len(key)
    tempMax = 0
    temp = 0
    for i in range(len(dna)):
        # Skip to end after counting an str sequence
        while temp > 0:
            temp -= 1
            continue

        # if dna segment equal key and & repition, start count
        if dna[i: i + l] == key:
            while dna[i - l: i] == dna[i: i + l]:
                temp += 1
                i += l

            # compare value to the so far longest sequence, and override if longer
            if temp > tempMax:
                tempMax = temp

    # store longest sequences in dictionary with respective key
    sequences[key] += tempMax

# open and iterate trough people database as a dictionary, compare continuously to first sequence
with open(argv[1], newline='') as suspects_file:
    suspects = DictReader(suspects_file)
    for suspects in suspects:
        match = 0
        # compare sequences to people
        for dna in sequences:
            if sequences[dna] == int(suspects[dna]):
                match += 1
        # print match
        if match == len(sequences):
            print(suspects['name'])
            exit()
        # if no match, print no match
    print("No match")