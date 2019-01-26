import pandas as pd
import quandl
import matplotlib.pyplot as plt
from matplotlib import style
import numpy as np
from statistics import mean
style.use('fivethirtyeight')

housing_data = 	pd.read_pickle('HPI.pickle')
housing_data = housing_data.pct_change()
