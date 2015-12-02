#Spam Filter
#team default_string

SpamFilter: main.cpp classifier.o
	g++ -Wall main.cpp classifier.o -o SpamFilter

classifier.o: classifier.cpp classifier.h word.o
	g++ -Wall classifier.cpp word.o -c

word.o: word.cpp word.h
	g++ -Wall word.cpp -c
