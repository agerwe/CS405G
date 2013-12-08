#makefile
#
# Source files:  vsh.cpp scanner.cpp parser.cpp token.h vsh_var.h
#
# executable file: vsh
#


make: myDBMS.cpp myBP.cpp myMEM.cpp 
	g++ -o myDBMS myDBMS.cpp myBP.cpp myMEM.cpp

clean:
