import matplotlib.pyplot as plt
import numpy as np
import serial
import time

x = np.linspace(0, 127, 1)
y = []

serdev = '/dev/ttyACM0'
s = serial.Serial(serdev)
for x in range(128):
    line = s.readline()
    y.append(float(line))

plt.plot(x, y)
plt.show()
s.close()