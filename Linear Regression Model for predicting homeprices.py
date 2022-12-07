#!/usr/bin/env python
# coding: utf-8

# In[57]:


import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
get_ipython().run_line_magic('matplotlib', 'inline')
import math
from sklearn import linear_model


# In[60]:


homeprices=pd.read_csv("homeprices.csv")
homeprices.bedrooms=homeprices.bedrooms.fillna(math.floor(homeprices.bedrooms.median()))


# In[61]:


homeprices


# In[69]:


reg=linear_model.LinearRegression()
reg.fit(homeprices[["area","bedrooms","age"]],homeprices.price)


# In[70]:


reg.predict([[2800,2,30]])


# In[71]:


reg.coef_

reg.intercept_
# In[ ]:




