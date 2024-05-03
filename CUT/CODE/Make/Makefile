###################################################
# Created by: Anadi Mishra
# Created on: 26 October 2022
###################################################

SRCDIR = ../SRC
BINDIR = ../bin
OBJDIR = ../obj
REPORTDIR = ../reports

all:
	
	gcc -I ../Include/ -c ${SRCDIR}/project.c -o ${OBJDIR}/project.o
	gcc ${OBJDIR}/project.o -o ${BINDIR}/project.bin
	

#memcheck:
	#valgrind ../bin/project.bin  > ../reports/valgrind_report.txt 2>&1
	#valgrind ../bin/project.bin  >> ../reports/valgrind_report.txt
clean: 
	rm ${OBJDIR}/*.o ${BINDIR}/project.bin




###################### End of MakeFile ###############
