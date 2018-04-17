import numpy as np
import matplotlib.pyplot as plt

x = np.genfromtxt("tray.txt", usecols = 0)
v = np.genfromtxt("tray.txt", usecols = 1)
t = np.genfromtxt("tray.txt", usecols = 2)

plt.title("x vs t")
plt.xlabel("Tiempo")
plt.ylabel("Posicion")
plt.plot(x,t)
plt.savefig("pos.png")
plt.clf()

plt.title("v vs t")
plt.xlabel("Tiempo")
plt.ylabel("Velocidad")
plt.plot(v,t)
plt.savefig("vel.png")
plt.clf()

plt.title("v vs x")
plt.xlabel("Posicion")
plt.ylabel("Velocidad")
plt.plot(v,x)
plt.savefig("phase.png")


