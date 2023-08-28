#https://trinket.io/embed/python3/a5bd54189b

# Supports Python Modules: builtins, math,pandas, scipy 
# matplotlib.pyplot, numpy, operator, processing, pygal, random, 
# re, string, time, turtle, urllib.request

import matplotlib.pyplot as plt
import pandas as pd
import numpy as np
import scipy as sp

x=np.arange(0, 8*np.pi, 0.1)

plt.subplot(3,1,1)
plt.title("Sin")
yaxsin = np.sin(x)
plt.plot(x, yaxsin)
plt.grid()

plt.subplot(3,1,2)
plt.title("Cos")
yaxcos = np.cos(x)
plt.plot(x, yaxcos)
plt.grid()

plt.subplot(3,1,3)
plt.title("Tan")
xaxtan = np.linspace(0, np.pi, 100)
yaxtan = np.tan(xaxtan)
plt.plot(xaxtan, yaxtan)
plt.grid()

plt.show()


#https://numpy.org/doc/stable/reference/generated/numpy.arange.html
#https://matplotlib.org/stable/api/_as_gen/matplotlib.pyplot.subplot.html
#https://www.w3schools.com/python/matplotlib_grid.asp
