import pandas as pd

df = pd.read_csv('../datasets/data.csv')
df.set_index('Date', inplace = True)

df.to_csv('../datasets/newcsv2.csv')

df1 = pd.read_csv('../datasets/newcsv2.csv',index_col = 0)
df1.columns = ['House_Price']

#df1.to_html('example.html')

print (df.head(),'\n', df1.head())

