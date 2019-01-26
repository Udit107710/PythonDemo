import pandas as pd
import quandl as qd

df = qd.get("WIKI/GOOGL")

print(df.head())

