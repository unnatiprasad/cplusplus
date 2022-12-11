#!/usr/bin/env python
# coding: utf-8

# In[1]:


import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
get_ipython().run_line_magic('matplotlib', 'inline')


# Here we are implementing the linear regression model from scratch
# weights and bias are the two parameters(features)for the model
# We will use gradient descent implementation
# 

# In[ ]:


class Linear_Regression:
    #Initiating the parameters:- learning rate and the number of iterations
    def __init__(self,learning_rate,no_of_iterations):
        
        self.learning_rate=learning_rate
        self.no_of_iterations=no_of_iterations
        
    
        
    #X and Y are the feature and target values
    def fit(self, X, Y):
        
        #number of training examples(no of data points) and number of features(one for only one feature)
        self.m,self.n = X.shape #no. of rows and columns
        
        #initiating the weights and bias of our model
        self.w=np.zeroes(self.n)
        self.b=0
        self.X=X
        self.Y=Y
        
        
        #implementing gradient descent
        
        for i in range (self.no_of_iterations):
            self.update_weights()
            
        
        
        
    def update_weights(self):
        
        y_prediction=self.predict(self.X)
        
        
        #calculating weights
        
        dw=-(2*(self.X.T).dot(self.Y-Y_prediction))/self.m
        
        db = -(2*np.sum(self.Y-Y_prediction))/self.m
        
        #updating the weights
        
        self.w=self.w-self.learning_rate*dw
        self.b=self.b-self.learning_rate*db
        
        
    def predict(self, X):
          return X.dot(self.w)+self.b
        
        
    

