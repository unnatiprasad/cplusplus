#!/usr/bin/env python
# coding: utf-8

# In[1]:


import numpy as np
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn import svm
from sklearn.metrics import accuracy_score


# Data Collection and Analysis

# In[8]:


#loading the dataset of diabetes to a pandas dataframe
diabetes_dataset=pd.read_csv("diabetes.csv")
diabetes_dataset.head()


# In[10]:


diabetes_dataset.shape


# In[11]:


diabetes_dataset["Outcome"].value_counts()


# In[14]:


diabetes_dataset.groupby("Outcome").mean()


# In[15]:


X=diabetes_dataset.drop("Outcome",axis=1)


# In[16]:


X


# In[17]:


Y=diabetes_dataset["Outcome"]


# In[47]:


Y


# In[51]:


#now we will standardise the data
scalr= StandardScaler()
scalr.fit(X)


# In[52]:


standardized_data=scalr.transform(X)


# In[53]:


print(standardized_data)


# In[54]:


X= standardized_data


# In[55]:


print(X)


# In[56]:


print(Y)


# In[59]:


#Train test split

X_train,X_test,Y_train,Y_test= train_test_split(X,Y,test_size=0.2,stratify=Y,random_state=2)

print(X.shape,X_train.shape,X_test.shape)


# Training the model

# In[61]:


classifier=svm.SVC(kernel="linear")
#training the support vector machine classifier
classifier.fit(X_train,Y_train)


# Model Evaluation 

# Accuracy Score

# In[65]:


#accuracy score on the training data
X_train_prediction = classifier.predict(X_train)
training_data_accuracy=accuracy_score(X_train_prediction,Y_train)

X_test_prediction=classifier.predict(X_test)
test_data_accuracy=accuracy_score(X_test_prediction,Y_test)

print("Accuracy score of train data is", training_data_accuracy)
print("Accuracy score of test data is", test_data_accuracy)


# Predictive SYstem

# In[69]:


input_data=(6,148,72,35,0,33.6,0.627,50)
input_data_as_numpy_array=np.asarray(input_data)
input_data_reshaped=input_data_as_numpy_array.reshape(1,-1)
std_data=scalr.transform(input_data_reshaped)
prediction=classifier.predict(std_data)

print(prediction)

if(prediction[0]==1):
    print("Diabetic")
else:
    print("Non diabetic")


# In[ ]:




