


#compile all the files and run all the programs 
run: task1 task2 task3 task4 #task5 task6


task1: compile
	gcc -o task1/program task1/program.o
	./task1/program

task2: compile
	gcc -o task2/program task2/program.o
	./task2/program

task3: compile
	gcc -o task3/program task3/program.o
	./task3/program

task4: compile
	gcc -o task4/program task4/program.o
	./task4/program

#task5: compile
#	gcc -o task5/program task5/program.o
#	./task5/program

#task6: compile
#	gcc -o task6/program task6/program.o
#	./task6/program

compile:
	gcc -c task1/main.c -o task1/program.o
	gcc -c task2/main.c -o task2/program.o
	gcc -c task3/main.c -o task3/program.o
	gcc -c task4/main.c -o task4/program.o
#	gcc -c task5/main.c -o task5/program.o
#	gcc -c task6/main.c -o task6/program.o

clean:
	rm task1/program.o task1/program
	rm task2/program.o task2/program
	rm task3/program.o task3/program
	rm task4/program.o task4/program
#	rm task5/program.o task5/program
#	rm task6/program.o task6/program


