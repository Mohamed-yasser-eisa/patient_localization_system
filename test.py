from sklearn.svm import SVC
import micromlgen 
import pandas as pd
#from sklearn.model_selection import train_test_split
import numpy as np

# put your samples in the dataset folder
# one class per file
# one feature vector per line, in CSV format
df = pd.read_csv('final-data-mod3.csv')
df = df.replace(np.nan , -90)

x = df.iloc[:, :-1]
y = df.iloc[:, -1]

features = x.values
labels = y.values

#x_train, x_test, y_train, y_test = train_test_split(features, labels, test_size=0.2, random_state=77)
classifier = SVC(kernel='poly',C= 1.0, gamma = 0.001 ).fit(features, labels)
print(classifier)
c_code = micromlgen.port(classifier)
with open("code.h","w") as f:
    f.write(c_code)
 