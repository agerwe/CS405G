make: myDBMS.cpp myBP.cpp myMEM.cpp page.h 
	g++ -o myDBMS myDBMS.cpp myBP.cpp myMEM.cpp page.h

clean:
