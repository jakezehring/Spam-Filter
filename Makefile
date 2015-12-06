#Spam Filter
#team default_string

SpamFilter: main.cpp classifier.o word.o
	g++ -Wall main.cpp classifier.o word.o -o SpamFilter

classifier.o: classifier.cpp classifier.h word.h
	g++ -c -Wall classifier.cpp word.cpp

word.o: word.cpp word.h
	g++ -c -Wall word.cpp

