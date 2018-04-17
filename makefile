phase.png : tray.txt 
	python AR_graph.py

tray.txt : ./a.out
	./a.out > tray.txt

./a.out : 
	g++ AR_gravity.cpp
