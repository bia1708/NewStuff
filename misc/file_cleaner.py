
# POSITIVELY DO NOT RUN !!!

# this program is designed to clean the 'movies.csv' file
# basically, we only need to extract the 'titleId' and 'title' columns


import sys
import csv
import pandas as pd

# this piece of code is here because some field in the data set was too big :/
maxInt = sys.maxsize

while True:
    # decrease the maxInt value by factor 10
    # as long as the OverflowError occurs.

    try:
        csv.field_size_limit(maxInt)
        break
    except OverflowError:
        maxInt = int(maxInt/10)


# this piece of code gets rid of unnecessary columns
with open("..\\Files\\movies.csv", "r", encoding="utf8") as source:
    reader = csv.reader(source)

    with open("../Files/movies_in.csv", "w", encoding="utf8") as result:
        writer = csv.writer(result)
        for r in reader:
            writer.writerow((r[0], r[2]))


# this piece of code gets rid of duplicates in the data set and makes a new csv file (the clean version of the initial
# data set)
df = pd.read_csv("../Files/movies_in.csv")

df = df.drop_duplicates(subset='titleId').reset_index(drop=True)

df.to_csv("../Files/movies_in.csv")
