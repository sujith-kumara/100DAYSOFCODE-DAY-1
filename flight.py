import pandas as pd

# Read dataset
df = pd.read_csv("FlightDelayData.csv")

# Predictive Model
airline_code = "xyz"
departure_time = "09:45"
delay_time = df.loc[(df['Airline_Code'] == airline_code) & (df['Departure_Time'] == departure_time), 'Delay_Time']
if len(delay_time) == 0:
    print("The flight is not likely to be delayed")
else:
    print("The flight is likely to be delayed by {} minutes".format(delay_time.values[0]))

# Convert dataset to XML
df.to_xml("FlightDelays.xml")

# Print XML
with open("FlightDelays.xml", "rt") as f:
    print("XML File: ")
    print(f.read())