	###############################################################################
###          University of Hawaii, College of Engineering
### @brief   Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
###
### @file    Makefile
### @version 1.0 - Initial version
###
### Makefile for  Animal Farm
###
### @author  Arthur Lee <leea3@hawaii.edu>
### @date    10 Mar 2022
###
### @see     https://www.gnu.org/software/make/manual/make.html
###############################################################################

#gcc for C, g++ for C++
CC     = gcc
CFLAGS = -g -Wall -Wextra

TARGET = animalFarm

all: $(TARGET)

catDatabase.o: catDatabase.c catDatabase.h
	$(CC) $(CFLAGS) -c catDatabase.c

addCats.o: addCats.c addCats.h catDatabase.h
	$(CC) $(CFLAGS) -c addCats.c

reportCats.o: reportCats.c reportCats.h catDatabase.h
	$(CC) $(CFLAGS) -c reportCats.c

updateCats.o: updateCats.c updateCats.h catDatabase.h
	$(CC) $(CFLAGS) -c updateCats.c

deleteCats.o: deleteCats.c deleteCats.h catDatabase.h
	$(CC) $(CFLAGS) -c deleteCats.c

main.o: main.c catDatabase.h addCats.h reportCats.h
	$(CC) $(CFLAGS) -c main.c

animalFarm: main.o catDatabase.o addCats.o reportCats.o updateCats.o deleteCats.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o catDatabase.o addCats.o reportCats.o updateCats.o deleteCats.o

clean:
	rm -f $(TARGET) *.o

