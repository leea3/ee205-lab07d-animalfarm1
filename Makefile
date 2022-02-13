###############################################################################
###          University of Hawaii, College of Engineering
### @brief   Lab 05d - Animal Farm 0 - EE 205 - Spr 2022
###
### @file    Makefile
### @version 1.0 - Initial version
###
### Makefile for  Animal Farm
###
### @author  Arthur Lee <leea3@hawaii.edu>
### @date    21 Feb 2022
###
### @see     https://www.gnu.org/software/make/manual/make.html
###############################################################################

#gcc for C, g++ for C++
CC     = gcc
CFLAGS = -g -Wall -Wextra

TARGET = animalFarm

all: $(TARGET)

main.o: main.c catDatabase.h
	$(CC) $(CFLAGS) -c main.c

catDatabase.o: catDatabase.c catDatabase.h
	$(CC) $(CFLAGS) -c catDatabase.c

addCats.o: addCats.c addCats.h
	$(CC) $(CFLAGS) -c addCats.c

animalFarm: main.o catDatabase.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o catDatabase.o

clean:
	rm -f $(TARGET) *.o

