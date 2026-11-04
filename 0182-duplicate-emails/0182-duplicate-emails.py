import pandas as pd

def duplicate_emails(person: pd.DataFrame) -> pd.DataFrame:
    person=pd.DataFrame(person['email'])
    df=person[person.duplicated()].drop_duplicates()

    return df.rename(columns={'email':'Email'})