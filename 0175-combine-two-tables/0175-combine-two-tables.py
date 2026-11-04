import pandas as pd

def combine_two_tables(person: pd.DataFrame, address: pd.DataFrame) -> pd.DataFrame:
    a=pd.merge(person,address,how='left',on='personId')
    df=a[['firstName','lastName','city','state']]
    return df