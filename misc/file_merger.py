
# POSITIVELY DO NOT RUN !!!

# this program was used to merge the 2 files ('movies_in.csv' and 'ratings.csv') into 'input.csv'
# this code is provided for bragging rights only, seriously do not run it

import pandas as pd

titles = pd.read_csv("../Files/movies_in.csv")
ratings = pd.read_csv("../Files/ratings.csv")
ratings.columns.values[0] = 'titleId'
merged = titles.merge(ratings, on='titleId')

# this part of the code deletes the first column (it's unnecessary and frankly idk where it came from)
merged.columns = ['col1', 'titleId', 'title', 'averageRating', 'numVotes']
merged = merged.drop(columns="col1")
merged.to_csv("../Files/input.csv")
