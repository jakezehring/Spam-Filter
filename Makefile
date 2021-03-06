#Spam Filter
#team default_string

SpamFilter: main.cpp classifier.o word.o
	g++ -Wall -g main.cpp classifier.o word.o -o SpamFilter

classifier.o: classifier.cpp classifier.h word.h
	g++ -c -g -Wall classifier.cpp word.cpp

word.o: word.cpp word.h
	g++ -c -g -Wall word.cpp

clean:
	rm *.o SpamFilter
